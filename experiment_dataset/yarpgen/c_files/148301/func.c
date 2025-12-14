/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148301
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) arr_0 [i_0])) : (4630621235637122456LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [(signed char)0]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_13))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_1] [i_0] [i_0]))));
                        arr_9 [13] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) | (arr_7 [i_3] [i_2] [i_1] [i_0])));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */unsigned long long int) var_5);
}
