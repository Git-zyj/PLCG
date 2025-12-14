/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133871
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) (short)21377);
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_3 [i_0 + 3]))));
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */short) (signed char)0)), (var_4)));
                var_18 += ((/* implicit */unsigned int) arr_3 [i_0]);
            }
        } 
    } 
    var_19 |= var_5;
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_10);
                var_21 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_3)), (arr_7 [i_2] [i_2 - 1])))), (max((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_9 [i_2] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))))), (((((arr_6 [7ULL] [i_3]) + (9223372036854775807LL))) << (((9977328283289362431ULL) - (9977328283289362431ULL)))))))));
                var_22 = ((/* implicit */_Bool) ((unsigned int) max((arr_6 [i_2 + 3] [i_2 + 3]), (arr_6 [i_2 + 2] [i_2]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (signed char i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) 9977328283289362452ULL))));
                                arr_22 [i_7] [17] [(unsigned short)1] [(unsigned short)1] [14LL] [5LL] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((arr_12 [i_6 - 3]) ? (arr_15 [i_8 + 1] [i_6 + 2] [i_5 + 3]) : (arr_15 [i_8 - 1] [i_6 - 4] [i_5 + 2]))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_20 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5 + 2]))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_10))));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (8469415790420189197ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 1) 
                    {
                        for (int i_10 = 3; i_10 < 17; i_10 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_10] [i_4] [i_9] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (9977328283289362431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20866)))))) ? (((/* implicit */unsigned long long int) (-(2670121260U)))) : (((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (var_9) : (((/* implicit */unsigned long long int) arr_23 [i_4] [i_5] [i_5] [i_5] [i_5 + 3] [i_10 - 1]))))));
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) var_2);
                                arr_30 [i_4] [i_5] [9ULL] [i_9] [i_4] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) 2033183914)), (arr_19 [i_9 + 1] [i_5] [0] [i_10 - 2] [i_10 - 2] [i_6 - 4] [i_6])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_4] [i_9 + 1]))))) : (min((arr_9 [i_4] [i_6 - 1] [i_9]), (((/* implicit */long long int) var_3))))));
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)1023))) : (-3488953491122020075LL)))) ? (min((((unsigned int) arr_10 [i_4] [i_5] [i_6])), (((/* implicit */unsigned int) arr_12 [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
