/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180811
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
    var_18 -= ((/* implicit */unsigned int) var_9);
    var_19 = 4294967295U;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (signed char)127)))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((((((/* implicit */unsigned int) var_9)) ^ (0U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (4294967287U))))))))))));
        var_22 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        var_23 -= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) >> (((((/* implicit */int) (short)8188)) - (8165)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */int) var_1);
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_15 [i_1] [8] [i_3] [i_4] [(unsigned short)11] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((var_14) | (36028797018963904LL)));
                        }
                    } 
                } 
            } 
            arr_16 [i_2] = ((/* implicit */int) min((min((8U), (((/* implicit */unsigned int) (short)(-32767 - 1))))), (((/* implicit */unsigned int) max((arr_10 [i_1 - 1]), (arr_10 [i_1 - 1]))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6])) ? (arr_4 [i_1]) : (((/* implicit */long long int) 1572864))));
            var_27 += ((/* implicit */long long int) ((unsigned int) (-(1040187392U))));
            var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((int) 20U))) != (var_14)));
        }
    }
}
