/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136298
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_3), (min((min(((short)32752), (((/* implicit */short) (_Bool)0)))), (((/* implicit */short) arr_2 [6U]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (arr_1 [i_2] [i_1]) : (arr_1 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [(short)14])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (18446744073709551615ULL))) : (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (((((/* implicit */_Bool) 4294967292U)) ? (var_4) : (18446744073709551611ULL)))))));
                        var_16 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) arr_11 [i_4] [i_2] [i_2] [i_0]);
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_3] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (short)32767)))) != (((/* implicit */int) (unsigned char)0)))) ? (min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) : (-2147483624))) != (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_3)))))))));
                        }
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775801LL)) && (((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */_Bool) 2147483624);
                        var_20 *= ((/* implicit */long long int) (_Bool)1);
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        arr_21 [12ULL] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned long long int) 2147483623)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [11] [i_2] [i_6]))) / (4U))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [1LL] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-32751))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)24)), (arr_11 [i_0] [i_1] [i_2] [i_6]))))));
                        arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_4 [i_0]), (((/* implicit */long long int) var_3))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) * (var_4))), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_2] = ((/* implicit */short) arr_1 [i_2] [i_7]);
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            arr_30 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (short)32750);
                            var_21 = ((/* implicit */unsigned int) arr_5 [i_7] [i_7]);
                            var_22 = ((/* implicit */signed char) (_Bool)1);
                            arr_31 [i_0] [i_1] [i_2] = ((/* implicit */int) 18446744073709551615ULL);
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            arr_36 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32767)) ? (((((/* implicit */_Bool) arr_25 [i_9] [i_2] [i_2] [i_1] [i_2] [i_0])) ? (((/* implicit */int) (signed char)127)) : (2064384))) : (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */short) min((var_23), ((short)32767)));
                            var_24 = ((/* implicit */unsigned int) (-2147483647 - 1));
                        }
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_40 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_1)))) : (((/* implicit */int) arr_32 [0LL] [i_1] [i_1] [i_2] [i_7] [i_10] [(short)5]))));
                            arr_41 [i_2] [i_1] = ((/* implicit */unsigned int) var_3);
                            arr_42 [i_2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [i_2] [i_10] [i_10])))));
                            var_25 = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            arr_45 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)32762);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_9))));
                            var_27 += ((/* implicit */unsigned int) ((127ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            var_28 *= ((/* implicit */signed char) 6U);
                        }
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                    {
                        arr_48 [5ULL] [5ULL] [i_2] [i_2] [5ULL] = ((/* implicit */unsigned long long int) (unsigned short)63488);
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) arr_39 [(short)2] [i_1] [i_2] [i_1] [i_1] [i_12])) + (18)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32750)) < ((~(((/* implicit */int) arr_3 [i_1] [i_0]))))))) : (min((arr_38 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) 9U))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_55 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_0] [i_13] [i_14] [i_14])) ? (-1) : (((/* implicit */int) arr_52 [i_1] [i_2] [i_13] [11])))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_0 [i_2] [i_14])))) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 4294967295U)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [(unsigned short)11] [(unsigned short)11] [i_13] [i_2] [i_0])))));
                                arr_56 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((((/* implicit */unsigned long long int) -5)), (0ULL))) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)(-32767 - 1)))));
                                arr_57 [i_0] [i_1] [i_13] [i_0] &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)228), (((/* implicit */unsigned char) (signed char)-103)))))))) - (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_2] [i_0] [i_14])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_30 &= ((/* implicit */long long int) (short)32761);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */signed char) min((min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))), (((((/* implicit */int) (signed char)-10)) & (939524096)))));
}
