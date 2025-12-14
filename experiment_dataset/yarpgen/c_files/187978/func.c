/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187978
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(var_5))) ? (max((((/* implicit */long long int) var_4)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) ? ((((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (max((-8419051263154030995LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))) : (min((((/* implicit */long long int) max((((/* implicit */unsigned short) (short)32758)), ((unsigned short)45710)))), (max((((/* implicit */long long int) var_9)), (var_7)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) min((max(((-(var_12))), (((/* implicit */unsigned long long int) max((var_18), (((/* implicit */int) var_14))))))), (max((((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) var_16)))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */int) var_14)))))), (min((((((/* implicit */_Bool) (unsigned short)9429)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)19825)))), ((-(((/* implicit */int) (unsigned short)45710))))))));
                    arr_9 [i_0] [i_0] = max((min((((/* implicit */unsigned long long int) 3798499007U)), (2194728288256ULL))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_11)), (-64715123)))))));
                }
                for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */short) min((min((min((var_12), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-24341)), (264241152)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))), (min((var_10), (((/* implicit */unsigned int) var_9)))))))));
                                arr_18 [i_0] [(unsigned char)3] [i_1] [i_3] [i_0] [(unsigned char)3] = ((/* implicit */short) var_18);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_14))))) ? (min((var_0), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) min((-356274680), (((/* implicit */int) (short)-18247)))))))) ? (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (((var_11) ? (var_9) : (((/* implicit */int) var_4))))))) : ((~(var_7)))));
                    arr_19 [i_0] = ((((/* implicit */_Bool) (-(var_9)))) ? (max((((/* implicit */unsigned long long int) (-(var_8)))), (max((var_12), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                    var_22 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_13)), (var_9)))) : ((+(var_7)))))));
                }
                var_23 = ((/* implicit */unsigned char) var_18);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((var_18), (min((((/* implicit */int) var_19)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (var_1))))))))));
    var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_16))))) ? (var_9) : (((((/* implicit */_Bool) var_13)) ? (var_9) : (var_18))))), ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_13))))))));
}
