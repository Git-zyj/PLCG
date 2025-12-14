/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187497
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (767251259)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)1)) >> (((4294967286U) - (4294967264U)))))))));
                    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_0] [i_0])) ? (max((var_13), (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (var_0)))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2293938267U)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)127), ((unsigned char)0))))))))))));
    var_18 = ((/* implicit */long long int) 9U);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (short i_4 = 3; i_4 < 22; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        arr_17 [i_3] = (!(((/* implicit */_Bool) 9U)));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_22 [i_7] [i_3] [i_7 - 1] [i_7] [i_7] = ((/* implicit */unsigned int) ((signed char) ((arr_15 [i_5 - 1] [i_4] [i_5] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))));
                            arr_23 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_11)))));
                            arr_24 [i_3] = ((/* implicit */short) arr_20 [i_3] [i_4] [i_5 + 2] [i_3]);
                            var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) 470587449U))));
                        }
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 23; i_9 += 4) 
                        {
                            arr_28 [i_3] [i_3] [i_3] [(short)8] [i_3] |= ((/* implicit */unsigned int) ((-738198395000847985LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))));
                            var_21 = ((/* implicit */long long int) arr_13 [i_4 - 1] [i_3]);
                        }
                        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */short) 4203993063U);
                            var_23 ^= 2001029028U;
                        }
                    }
                    arr_32 [i_3] [i_4] [i_3] = ((/* implicit */int) ((unsigned long long int) (~((~(var_10))))));
                }
            } 
        } 
    } 
}
