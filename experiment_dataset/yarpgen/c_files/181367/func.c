/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181367
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */signed char) (~(((int) ((_Bool) (signed char)-107)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (short)643)) / (((((/* implicit */_Bool) var_11)) ? (-1937122709) : (((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */int) (!(((((((/* implicit */int) var_9)) == (0))) && (((((/* implicit */int) (unsigned short)56213)) == (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)50866)) != (((((/* implicit */int) arr_5 [i_0] [i_1])) * (((/* implicit */int) var_2))))));
                    var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) max(((unsigned short)56213), (((/* implicit */unsigned short) (short)-28597)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)26)) ? (var_0) : (((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)9315)), (281474976710654ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])) : ((~(((/* implicit */int) (signed char)102)))))))));
                }
            } 
        } 
        var_18 &= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)56213))));
        var_19 = max((((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) (unsigned char)48)))));
    }
}
