/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137836
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
    var_12 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) ((signed char) ((((var_8) + (9223372036854775807LL))) >> (((var_11) - (1637380545)))))))));
    var_13 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))), (var_10))) << (((var_9) - (3562242992260160978ULL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_14 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1]))))), ((-(arr_5 [i_0] [i_1] [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((4815532564054705034ULL) < (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                                var_15 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] [i_2] [i_1] = min((max((((/* implicit */int) arr_4 [i_0] [(short)6])), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((arr_3 [i_1] [i_2]) ? (((/* implicit */int) (unsigned short)27484)) : (((/* implicit */int) arr_3 [i_0] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned int) ((long long int) (_Bool)0));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), ((+(var_9)))));
                        arr_16 [i_0] [i_1] [i_2] [(_Bool)1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-2953))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_2]))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_5] [i_0] [i_2]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_5] [i_1] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -4512383142941299007LL)) ? (13631211509654846581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), ((unsigned char)195)))) ? (((/* implicit */long long int) arr_8 [i_6] [(short)14] [i_2] [3ULL] [i_0] [i_0])) : ((((_Bool)1) ? (var_8) : (((/* implicit */long long int) var_10))))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) : (arr_17 [i_1] [i_1] [i_2] [i_5] [i_6]))));
                            var_17 = var_9;
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_0] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (signed char)-73);
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_0] [i_7] [i_8] = ((/* implicit */signed char) (_Bool)1);
                            arr_29 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (2147483647)));
                        }
                        for (signed char i_9 = 2; i_9 < 23; i_9 += 1) 
                        {
                            arr_33 [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                            arr_34 [i_0] [i_0] [i_2] [i_7] [i_7] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [17U])), (arr_21 [i_0] [i_1] [i_0] [(signed char)12])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) : ((+(0U)))))));
                            arr_35 [i_0] [i_1] [i_2] [i_7] [i_9] = ((/* implicit */unsigned long long int) max(((unsigned short)27468), (((/* implicit */unsigned short) (unsigned char)208))));
                            var_18 = ((/* implicit */unsigned char) var_0);
                            arr_36 [i_9] [i_7] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) var_11);
                        }
                        arr_37 [i_0] [i_1] [i_2] = ((/* implicit */signed char) 4815532564054705034ULL);
                        arr_38 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-6)), (arr_10 [i_7] [i_2] [i_2] [i_1] [i_0])));
                    }
                }
                arr_39 [(short)12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0] [i_0] [14LL])))) - (((((/* implicit */_Bool) 5848076819816202223LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))) ? (((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_1])) : (var_8))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */long long int) var_10))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_2))));
                arr_40 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_1] [14] [i_0] [i_1]);
            }
        } 
    } 
}
