/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150429
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
    var_16 = ((/* implicit */short) ((_Bool) var_0));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))), (arr_1 [i_0] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_3)))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_13)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (short)32325)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                        var_19 = ((/* implicit */_Bool) min((min((((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32322))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_3 + 1]))) : (557787710U)))))), (((/* implicit */unsigned long long int) (short)32326))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */short) arr_13 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */int) var_7);
    var_22 = ((/* implicit */signed char) var_9);
}
