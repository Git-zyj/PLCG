/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115872
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
    var_13 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))) * ((+(9223372036854775806LL))))), (((((/* implicit */_Bool) var_10)) ? (-6050204585633719283LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))));
                var_15 = ((/* implicit */unsigned int) max(((-((-(var_10))))), (((/* implicit */unsigned long long int) ((-1915673153887904265LL) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-22))));
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_17 = (-(((/* implicit */int) arr_4 [i_2])));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_2] [6ULL] [6ULL])) ? (var_12) : (var_0))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6050204585633719282LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_4] [i_3]))) : (var_1))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            arr_17 [i_2] [i_3 - 1] [i_3 + 2] [i_5] [i_6] = ((/* implicit */unsigned short) var_5);
                            var_19 ^= ((/* implicit */long long int) arr_11 [i_2] [i_3] [i_4] [i_5]);
                            var_20 -= ((/* implicit */signed char) (((+(((/* implicit */int) var_9)))) * (((/* implicit */int) var_2))));
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */unsigned int) ((451964642789341497LL) % (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                            var_21 = ((/* implicit */long long int) arr_21 [i_7] [i_5] [i_4] [(unsigned short)9] [i_7]);
                            var_22 = ((((arr_16 [i_2] [i_3 + 2] [i_3 + 1] [i_5] [i_7] [i_2] [i_4]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) -451964642789341506LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3 - 1] [i_4]))) : (arr_21 [i_7] [i_7] [i_4] [i_5] [i_7]))) - (4294966153U))));
                            arr_23 [i_7] [i_5] [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_4);
                        }
                        arr_24 [i_4] [i_3] = ((/* implicit */long long int) ((((arr_18 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3 + 2] [i_3 - 2]) + (2147483647))) << (((((((arr_18 [i_2] [i_2] [i_3] [i_3] [i_4] [i_4] [i_3]) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) - (1254415763)))));
                        arr_25 [i_5] [i_2] [i_3] [i_2] [i_2] = ((((/* implicit */_Bool) arr_15 [i_3] [i_3 + 1] [i_4] [(short)18] [i_3] [i_4])) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (451964642789341500LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3955372549459542315LL)) ? (-6801117021715894590LL) : (451964642789341512LL)));
                        var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (451964642789341500LL)))) * (((3318941735806443950ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)110)), ((+(arr_9 [(_Bool)1] [(_Bool)1] [i_4])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_3] [i_3] [i_3 - 1] [i_2]))) * (1148312026U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)84), (((/* implicit */signed char) var_8)))))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_2] [i_2]))) % (-6050204585633719266LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), (arr_19 [i_3] [i_3] [i_3] [i_3 + 2] [i_9]))))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (451964642789341497LL))), (((/* implicit */long long int) ((arr_9 [i_2] [i_3] [i_9]) == (((/* implicit */unsigned long long int) arr_21 [i_9] [i_9] [i_9] [i_4] [i_9])))))))));
                        arr_31 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */int) min((var_11), (((signed char) 451964642789341478LL))))) - (((/* implicit */int) var_2))));
                        /* LoopSeq 4 */
                        for (signed char i_10 = 3; i_10 < 23; i_10 += 1) 
                        {
                            var_27 ^= ((/* implicit */unsigned int) 18446744073709551615ULL);
                            var_28 = ((/* implicit */int) max((((arr_10 [i_3 + 3] [i_3 + 3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(9223372036854775807LL)))))))));
                            var_29 &= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 6050204585633719296LL)) || (((/* implicit */_Bool) (unsigned short)23444))))), ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_2] [i_9] [i_4] [i_9] [i_11] [i_2]))) : (arr_5 [i_3] [i_2])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_12 [i_4])) : (var_1)))))));
                            var_31 = ((/* implicit */unsigned short) (!(var_2)));
                            arr_36 [i_11] [i_9] [i_4] [i_9] [i_9] [i_2] = ((/* implicit */_Bool) -3955372549459542315LL);
                            var_32 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_6))))) & (((unsigned long long int) arr_30 [i_4] [i_2])))))));
                            arr_37 [i_2] [i_2] [i_4] [i_9] [i_11] [i_11] = ((/* implicit */unsigned int) 451964642789341513LL);
                        }
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            arr_41 [i_9] [i_3 + 3] [i_4] [i_9] [i_12] = ((/* implicit */signed char) var_0);
                            arr_42 [i_12] [i_4] [i_9] [i_4] [i_9] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_35 [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 1] [i_3 - 2])) - (var_12)))) ? ((-(((/* implicit */int) (short)-13755)))) : (max((arr_39 [i_9]), (((var_2) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))))));
                            var_33 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (var_10)));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_34 = ((arr_12 [i_3 + 1]) - (((arr_12 [i_3 - 2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2] [i_3 + 3] [i_2] [i_2] [i_3 - 1]))))));
                            var_35 = ((max((((/* implicit */long long int) arr_26 [i_13] [i_9] [i_3 + 2] [i_3] [i_3 - 2] [i_3 - 2])), (var_1))) >> (((max((((((/* implicit */int) var_4)) + (var_3))), (((/* implicit */int) arr_4 [i_2])))) - (32857))));
                            arr_45 [i_2] [i_3] [i_4] [i_4] [i_9] [i_13] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)0)) ? (var_5) : ((((-9223372036854775807LL - 1LL)) % (var_1)))))));
                            var_36 &= ((/* implicit */int) ((_Bool) -1794451443336200870LL));
                            arr_46 [i_2] [i_2] [i_13] &= ((/* implicit */short) (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) -12LL)) & (arr_14 [i_2] [i_2] [i_2] [i_4] [i_9] [i_13]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_32 [i_2] [(_Bool)1] [i_4] [i_9] [i_13])), ((short)-13743)))))))))));
                        }
                    }
                    var_37 |= ((/* implicit */int) ((min((var_10), (arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 2]))) + (min((max((var_12), (((/* implicit */unsigned long long int) (signed char)-33)))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_2)))))))));
                    arr_47 [i_2] [i_3] [i_4] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((36028796884746240ULL) * (((/* implicit */unsigned long long int) -106497472)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-50)) ? (arr_35 [i_2] [i_2] [i_3] [i_3 - 2] [i_4]) : (451964642789341503LL)))))) : (arr_15 [i_2] [(short)17] [i_2] [i_2] [i_2] [i_2])));
                    /* LoopSeq 4 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) ((min((arr_38 [i_3] [i_3] [i_4] [i_14 + 1] [i_3] [i_4]), (arr_38 [i_3] [i_14] [i_14] [i_14 + 1] [i_14] [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_14] [i_3] [i_2] [i_3] [i_2])))));
                        arr_52 [i_2] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) -1794451443336200865LL);
                    }
                    for (unsigned short i_15 = 2; i_15 < 22; i_15 += 1) /* same iter space */
                    {
                        var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (var_1)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 36028796884746235ULL)) ? (((/* implicit */long long int) -1070001287)) : (-2138470008803005942LL))), (((/* implicit */long long int) max((arr_7 [i_15] [i_4] [i_3 - 2]), (((/* implicit */signed char) var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) | (((/* implicit */int) (short)-28120))))) ? (13707248397900962269ULL) : (min((18446744073709486080ULL), (((/* implicit */unsigned long long int) (short)-4365))))))));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (max((var_10), (((/* implicit */unsigned long long int) ((min((451964642789341479LL), (461129306077153425LL))) - (((/* implicit */long long int) ((unsigned int) 5763432558970131187LL))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 2; i_16 < 22; i_16 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (+(3257058762U)))) || (((((/* implicit */int) var_2)) <= (((/* implicit */int) (signed char)9))))));
                        var_42 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13755))) : (var_1)))));
                        var_43 = ((/* implicit */signed char) var_1);
                    }
                    for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        arr_60 [i_2] [i_2] [i_2] [i_3 + 1] [i_4] [i_17] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)37)) != (var_3)))), (((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_39 [i_2]))))) ? (((/* implicit */unsigned long long int) var_1)) : (max((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_3])), (8282767765562810640ULL)))))));
                        arr_61 [i_17] [i_3] = ((/* implicit */unsigned short) var_10);
                    }
                }
            } 
        } 
    }
    for (signed char i_18 = 3; i_18 < 18; i_18 += 1) 
    {
        var_44 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (~(arr_16 [i_18] [i_18 + 2] [i_18] [i_18] [i_18 + 1] [i_18] [i_18])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (arr_65 [i_18 - 1] [i_18]))))) <= (var_12)));
        arr_66 [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((var_1) % (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (unsigned char)244)))))))) > (((/* implicit */long long int) ((var_3) - (((/* implicit */int) max((((/* implicit */signed char) var_8)), (arr_49 [i_18] [i_18] [i_18 - 3] [i_18 + 1])))))))));
    }
    for (short i_19 = 0; i_19 < 24; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_20 = 3; i_20 < 23; i_20 += 3) 
        {
            for (unsigned int i_21 = 4; i_21 < 22; i_21 += 2) 
            {
                {
                    var_45 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_49 [i_19] [i_19] [i_19] [i_21])) | (max((arr_18 [i_20] [i_20 + 1] [i_20 - 3] [i_21] [i_20] [i_21] [i_21 - 4]), (((/* implicit */int) arr_7 [i_20 - 1] [i_20] [i_20 - 3]))))));
                    arr_76 [i_19] [i_19] [i_20] [i_21 - 4] = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) 4641083850748066411ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_19] [i_20] [i_21] [i_19]))) : (var_0))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_16 [i_21] [i_21 - 3] [i_21] [(short)14] [i_21 + 2] [i_20 - 2] [i_20 - 2])))));
                    var_46 = ((/* implicit */long long int) min((var_46), (((((((((/* implicit */_Bool) arr_7 [i_19] [11ULL] [11ULL])) ? (var_5) : (((/* implicit */long long int) arr_21 [i_19] [i_19] [i_21] [i_20] [i_19])))) << (((min((((/* implicit */unsigned long long int) var_6)), (var_10))) - (14970209615556664827ULL))))) << (((((((((/* implicit */int) min(((short)-13758), (((/* implicit */short) var_2))))) % (((((/* implicit */_Bool) (short)13750)) ? (((/* implicit */int) arr_74 [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) var_7)))))) + (52))) - (21)))))));
                }
            } 
        } 
        arr_77 [i_19] = ((/* implicit */long long int) var_6);
        var_47 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))) | (((((/* implicit */unsigned long long int) -451964642789341478LL)) ^ (var_10))))), (((/* implicit */unsigned long long int) ((arr_13 [i_19]) << (((((arr_15 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) << (((((/* implicit */int) (unsigned short)65522)) - (65469))))) - (15708555500268290022ULL))))))));
        var_48 &= ((/* implicit */short) var_6);
    }
}
