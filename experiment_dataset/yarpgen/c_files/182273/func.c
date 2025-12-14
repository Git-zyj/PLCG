/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182273
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2548543615U))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((min((3221225472U), (((/* implicit */unsigned int) var_12)))) - (19U)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56765))) >= (3221225472U)))), (var_6)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (min((((/* implicit */unsigned int) -1651748527)), (arr_3 [i_0] [(unsigned char)5]))) : (((/* implicit */unsigned int) -1651748527))));
                var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22523)) ? (min((arr_2 [i_0 + 1] [i_0 + 1]), (var_10))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (min((((/* implicit */unsigned int) (unsigned char)252)), (arr_1 [i_0 + 1])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        {
                            var_15 += ((/* implicit */signed char) arr_0 [8ULL]);
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_11 [i_2] [i_2]) >> (((((/* implicit */int) arr_9 [i_0] [i_0])) + (81))))))));
                                arr_15 [i_0] [i_0] [(signed char)9] [i_0] [i_0] = ((/* implicit */int) 4294967295U);
                            }
                            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [(unsigned char)2] |= ((/* implicit */unsigned char) 3221225455U);
                                arr_20 [(unsigned short)2] [i_0] [i_2] [i_3 - 2] [i_3] [i_3 - 1] [0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)504))))) ? (((/* implicit */int) arr_18 [i_0 - 2])) : (((/* implicit */int) arr_18 [(short)7]))))));
                                arr_21 [(_Bool)1] [i_0] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)22)) >> (((/* implicit */int) ((((/* implicit */unsigned int) var_10)) > (4294967295U)))))), ((+(((/* implicit */int) (unsigned char)63))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2])) ? (arr_3 [i_0 - 1] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) / (((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (_Bool)1))))) : (((var_3) / (((/* implicit */unsigned int) var_4))))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_17 [i_3 + 3] [i_0] [0LL] [i_3 + 3] [i_0] [i_0 + 2])))) - ((+(((/* implicit */int) arr_17 [i_3 - 2] [i_1] [i_2] [(unsigned short)2] [i_5] [i_0 - 2])))))))));
                            }
                            for (long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                            {
                                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_6] [(unsigned short)4] [i_6] [i_2] [i_3 + 2] [(unsigned short)4] [i_2])), ((+(((/* implicit */int) (unsigned short)21351))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15026))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)10843)), (var_5)))) ? (max((arr_5 [i_0] [i_1] [4U]), (((/* implicit */long long int) arr_1 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [0U] [i_1] [(_Bool)1] [i_1] [i_1] [(unsigned char)2] [i_1])))))));
                                var_20 *= ((/* implicit */short) var_0);
                                var_21 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 9170161827507787460ULL)) ? (1763891053U) : (1073741836U))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)17374))))), (arr_0 [i_0])));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned long long int) arr_3 [i_3 - 2] [i_3 - 2])) : (9530827881155362485ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)95)) || (((/* implicit */_Bool) 3221225459U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3221225459U)) && (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [(unsigned short)6] [i_3 - 2] [i_0] [i_6])) || (((/* implicit */_Bool) 1481704181U)))))))) : ((((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741864U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25700))) : (arr_4 [i_0] [i_2])))) : (min((3951235468324957745ULL), (((/* implicit */unsigned long long int) (signed char)-56))))))));
                                arr_24 [i_0 - 2] [i_0] [0LL] [i_6] = ((/* implicit */_Bool) (unsigned char)100);
                            }
                            var_23 = ((/* implicit */long long int) arr_22 [i_0] [i_1] [5U] [i_1]);
                            arr_25 [i_0] [i_0] [i_0] [i_3 - 3] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_22 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_0 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
