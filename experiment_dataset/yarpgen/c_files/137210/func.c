/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137210
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
    var_20 = var_1;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (_Bool)1)))))) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_1))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))))))));
        var_22 = ((/* implicit */int) arr_2 [i_0]);
        var_23 = ((/* implicit */int) ((arr_3 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) var_8)));
                    var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (4009094866U));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((((/* implicit */int) var_17)) | (((/* implicit */int) arr_7 [i_3] [i_3] [2] [i_3])))))))));
        var_27 = ((/* implicit */int) ((6921624150301104701ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1479191485)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))));
        var_28 = ((/* implicit */unsigned char) ((((int) arr_8 [i_3])) < (((/* implicit */int) var_9))));
    }
}
