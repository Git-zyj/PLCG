/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145553
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) max((min((var_3), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 4] [i_1 + 1])))), (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1 - 2] [i_0]), (((/* implicit */unsigned char) (signed char)127)))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-115)), (14353169924104580033ULL)));
                                var_16 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (arr_8 [i_1 - 1] [i_1 + 4] [i_1 + 2] [i_1 + 1])))), (min((14353169924104580033ULL), (18446744073709551590ULL)))));
                                var_17 = ((/* implicit */signed char) max((((/* implicit */int) min((max(((short)32767), ((short)-32761))), ((short)-17173)))), (min((min((((/* implicit */int) var_0)), (1056964608))), (((/* implicit */int) (signed char)127))))));
                            }
                        } 
                    } 
                    arr_14 [5U] [i_1 + 4] [i_1 + 4] [i_2] |= ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (short)32766)), (arr_9 [i_0] [i_1 + 3] [(unsigned char)3]))), (((/* implicit */unsigned int) min(((unsigned short)32767), (((/* implicit */unsigned short) (short)32759)))))));
                    var_18 = ((/* implicit */unsigned int) max((min((arr_4 [i_1 + 3] [i_1 - 2] [(_Bool)1]), (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]))), (max((((/* implicit */unsigned char) var_6)), (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 3])))));
                    var_19 = ((/* implicit */unsigned int) min((min((var_3), (((/* implicit */unsigned long long int) var_5)))), (min((((/* implicit */unsigned long long int) (unsigned short)14741)), (8795019280384ULL)))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)14741);
                    var_20 |= ((/* implicit */_Bool) -8954404388745304101LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_7] [i_7] [i_7] [i_5] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)23);
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (short)17189))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        var_22 = (signed char)(-127 - 1);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (unsigned char)209);
                            var_24 = ((/* implicit */long long int) 18446744073709551615ULL);
                        }
                        for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) (unsigned short)65535);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (unsigned short)448))));
                        }
                    }
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                    {
                        var_27 *= ((/* implicit */unsigned long long int) (unsigned short)50772);
                        var_28 &= ((/* implicit */int) 4323455642275676160ULL);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (15348669620797963633ULL)));
                        var_30 *= ((/* implicit */int) (_Bool)1);
                    }
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) (unsigned char)23);
                            var_32 = ((/* implicit */long long int) (unsigned short)64);
                        }
                        var_33 = ((/* implicit */unsigned int) 18446744073709551613ULL);
                    }
                }
                for (long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    var_34 ^= min((max((7518704237020266349ULL), (0ULL))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */short) var_6))))));
                    var_35 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 4] [i_1 + 4])), (18446744073709551589ULL))), (min((((/* implicit */unsigned long long int) max((arr_34 [i_0] [i_0] [i_0] [i_1 - 2] [3ULL] [3LL]), (9223372036854775807LL)))), (max((((/* implicit */unsigned long long int) (unsigned short)50783)), (var_3)))))));
                    var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_1 [i_1 + 2] [i_1 + 3]), (((/* implicit */unsigned int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) max(((short)17172), (var_12)))), (max((41ULL), (((/* implicit */unsigned long long int) var_7))))))));
                    var_37 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)67)), ((unsigned char)0)))), (max((((/* implicit */unsigned long long int) (unsigned short)14764)), (41ULL))))), (((/* implicit */unsigned long long int) max((max((var_1), (((/* implicit */unsigned int) (unsigned short)14764)))), (((/* implicit */unsigned int) arr_41 [i_1 + 1] [(unsigned char)5] [i_0])))))));
                    var_38 = ((/* implicit */_Bool) max((min((var_2), (((/* implicit */long long int) (unsigned char)82)))), (max((min((((/* implicit */long long int) (short)-17174)), (0LL))), (((/* implicit */long long int) min(((signed char)67), ((signed char)7))))))));
                }
                arr_47 [i_0] [i_1 + 4] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_1 + 1]), (((/* implicit */unsigned short) (signed char)52))))), (min((var_9), (((/* implicit */unsigned long long int) var_6)))))), (min((var_3), (11845852407632265533ULL)))));
                var_39 = min((((/* implicit */unsigned int) max((var_4), (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) 429389850)), (var_11))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (max((((/* implicit */int) var_7)), (var_4)))));
    var_41 = min((var_3), (((/* implicit */unsigned long long int) var_13)));
    /* LoopSeq 1 */
    for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        var_42 |= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (_Bool)1)), (var_1))), (((/* implicit */unsigned int) max((((/* implicit */short) var_8)), ((short)18788))))));
        arr_50 [i_16] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)0)), (var_2)))), (max((7406635959908159110ULL), (((/* implicit */unsigned long long int) (unsigned short)50792)))))), (((/* implicit */unsigned long long int) min((var_6), (var_13))))));
        var_43 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_16] [i_16] [i_16])))), (min((((/* implicit */unsigned long long int) arr_6 [i_16] [i_16] [i_16])), (18446744073709551561ULL)))));
    }
}
