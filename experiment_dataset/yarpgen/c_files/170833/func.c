/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170833
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max(((-2147483647 - 1)), ((((_Bool)0) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))))) : ((+((+(((/* implicit */int) (short)28672))))))));
        var_11 = ((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) >= ((-2147483647 - 1))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_2]);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26843)) == (-2147483633)));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_9 [i_3] [i_3]))));
        var_14 |= max((((/* implicit */unsigned short) (unsigned char)252)), ((unsigned short)38698));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3]))))))))));
    }
    var_16 -= ((/* implicit */long long int) var_6);
    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483619)) ? (((/* implicit */int) (unsigned short)0)) : (2147483633)));
    var_18 *= ((/* implicit */unsigned char) var_2);
}
