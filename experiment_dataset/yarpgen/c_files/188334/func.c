/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188334
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (arr_3 [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (arr_7 [i_4] [i_4] [i_4])))) : ((-(((/* implicit */int) arr_1 [i_1] [(unsigned char)23])))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] = ((/* implicit */signed char) ((int) -20LL));
                                var_12 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) 2024586398U)) || (((/* implicit */_Bool) 2558779224U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1])) : (-34LL)))))), (((((/* implicit */_Bool) (unsigned char)250)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4]) : (arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_2] [i_3] [i_4 + 1]))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (unsigned char)6)), (18446744073709551612ULL))) >> ((((~(((/* implicit */int) arr_0 [i_0 + 2])))) - (10678)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) max(((!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) < (var_4))))), (((((((/* implicit */int) var_5)) == (((/* implicit */int) var_9)))) && (((/* implicit */_Bool) ((long long int) var_7)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32676)) ? (((/* implicit */int) (short)13772)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_0)) ? (34LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) var_2)) : (max((((/* implicit */unsigned long long int) (signed char)30)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 416865030)) : (var_1)))))));
}
