/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155001
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0])))))) - (((unsigned long long int) var_0))));
                        arr_8 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3 - 1] [i_3 + 1] [i_0] [i_3]))) <= (arr_6 [i_0] [i_0] [i_3 - 1] [i_2] [i_0])))), (max((arr_7 [i_0] [i_1] [i_3 - 1] [i_0] [i_0] [i_1]), (((/* implicit */unsigned char) var_13))))));
                        var_21 *= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_4 [i_2])) + (((/* implicit */int) (short)-3844)))) + (2147483647))) << (((((unsigned int) min((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_3])))) - (1U)))));
                        arr_9 [i_3] [i_0] [i_2] [i_3 - 2] [i_2] = arr_7 [i_0] [i_1] [i_0] [i_3 + 4] [i_3] [i_3 + 1];
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3870)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-3844)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (short)3837);
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)151)) + (((/* implicit */int) arr_0 [i_0]))));
                        arr_15 [i_0] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */_Bool) ((arr_2 [i_4]) - (((/* implicit */long long int) ((arr_1 [i_0]) ? (arr_12 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */int) arr_1 [i_0])))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_5] [i_0] [i_2] = ((/* implicit */signed char) ((unsigned short) max((arr_12 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */int) var_9)))));
                        var_23 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) | (arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_5]));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 16487813255116783907ULL))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((0U) << (((((/* implicit */int) (unsigned short)52113)) - (52102))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 3907727037U)))))))) | (((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [6U] [i_0]) - (((/* implicit */int) (unsigned char)87))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) : (arr_3 [i_0] [21] [i_0])))));
                        arr_19 [i_0] [i_0] [i_2] [i_5] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) min((max((min((arr_10 [i_0] [i_0] [i_5] [i_1] [i_5] [i_0]), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) ((387240269U) << (((arr_12 [i_0] [i_1] [i_2] [i_0]) - (944166012))))))))) : (((/* implicit */unsigned short) min((max((min((arr_10 [i_0] [i_0] [i_5] [i_1] [i_5] [i_0]), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) ((387240269U) << (((((arr_12 [i_0] [i_1] [i_2] [i_0]) - (944166012))) + (431324622)))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_24 [11LL] [i_6] [i_2] [i_0] = arr_23 [i_0];
                        var_26 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) ((arr_22 [i_0] [i_1] [i_2] [i_6] [i_2]) && (((/* implicit */_Bool) arr_2 [i_1])))))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_19);
    var_28 = ((/* implicit */unsigned char) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
