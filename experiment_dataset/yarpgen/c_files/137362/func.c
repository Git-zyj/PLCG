/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137362
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
    var_16 = ((/* implicit */unsigned long long int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_12), (((/* implicit */long long int) var_13)))))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((var_2) >> (((((/* implicit */int) ((unsigned char) min((var_7), (var_8))))) - (87))))))));
    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)));
    var_19 -= ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) % (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))), (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    var_22 ^= var_2;
                    arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ^ (var_5)))) ? ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_3 + 2])))) : (((/* implicit */unsigned long long int) -368913058805861104LL))));
                    var_23 *= ((/* implicit */unsigned long long int) min((((arr_3 [i_0 + 2] [i_0 + 2] [i_3 - 1]) + (arr_3 [i_2] [i_0 + 2] [i_3 + 2]))), (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (3094067847U)))), (arr_3 [i_3 - 1] [i_2] [i_0 + 1])))));
                }
                var_24 = ((/* implicit */unsigned int) arr_9 [i_2] [i_1] [0ULL] [i_2]);
                arr_11 [i_1] = ((/* implicit */_Bool) ((short) 233981326011880539LL));
                var_25 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_0 + 1] [i_0]));
            }
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_14 [3LL] [3LL] = var_5;
            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) ((short) arr_7 [(_Bool)1] [i_4] [i_0 + 1] [i_0 - 1] [i_4]))) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)14] [i_0 + 1] [18LL] [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((((/* implicit */int) (unsigned short)43494)) | (((/* implicit */int) var_8)))))))));
            /* LoopNest 3 */
            for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_6] [i_7 - 1] [i_7 + 1] = ((/* implicit */short) min((((/* implicit */long long int) var_15)), (((max((((/* implicit */long long int) (unsigned short)43486)), (arr_15 [i_0 - 1] [i_6]))) + (((/* implicit */long long int) ((/* implicit */int) (short)-25734)))))));
                            var_27 -= ((/* implicit */_Bool) ((min((arr_21 [i_7 + 1] [i_7 + 1] [(unsigned char)19] [i_7 + 1] [i_7 + 2]), (arr_21 [i_7 + 2] [i_7 + 1] [i_7] [i_7 + 2] [i_7 + 1]))) ^ (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_5 - 1])))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((8865319426606454935ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_4] [(unsigned char)12] [i_6] [i_7]))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 1140874699)))) : (((((/* implicit */_Bool) 3745751163816526388LL)) ? (arr_15 [i_7] [i_4]) : (562949953421311LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_2 [6U] [(unsigned char)7]))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_24 [i_0] [i_0] [i_5] [9LL]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0 + 2]))))))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (arr_22 [i_0 + 1] [i_0 + 1] [i_4] [(_Bool)1] [i_4] [i_9] [i_10])))))) | (((/* implicit */int) ((short) arr_8 [i_0] [i_4])))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551606ULL), (((/* implicit */unsigned long long int) arr_3 [i_8] [i_8] [i_8]))))) ? (((var_6) | (((/* implicit */long long int) arr_30 [i_0] [14U])))) : (((/* implicit */long long int) max((2049683853U), (((/* implicit */unsigned int) var_4)))))))) & (((unsigned long long int) ((arr_32 [i_0] [i_4] [i_8] [i_9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */int) ((unsigned char) var_9))) >> (((((/* implicit */int) var_8)) - (182)))))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_13 [(unsigned short)18] [i_4] [i_8])));
                arr_36 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((long long int) arr_33 [i_8] [i_0] [i_4] [i_0] [i_0 - 1] [i_0 - 1])) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [(unsigned char)17] [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) && (((/* implicit */_Bool) 8865319426606454935ULL)));
            }
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                var_33 = ((/* implicit */long long int) var_9);
                var_34 = var_7;
                /* LoopSeq 1 */
                for (unsigned char i_12 = 4; i_12 < 19; i_12 += 4) 
                {
                    var_35 = ((/* implicit */short) min((-2352613507978397742LL), (((/* implicit */long long int) (unsigned char)114))));
                    arr_42 [i_0] = ((/* implicit */signed char) ((unsigned short) min((10ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3808232392977741309LL)) ? (368913058805861102LL) : (5859870691578303271LL)))))));
                }
                var_36 = ((/* implicit */unsigned int) ((((((arr_31 [i_11] [i_4] [i_0 + 2] [i_11]) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_4]))))) || (((/* implicit */_Bool) 18446744073709551611ULL)))) ? (((/* implicit */int) (unsigned short)14489)) : (((/* implicit */int) ((short) var_4)))));
            }
            for (long long int i_13 = 4; i_13 < 18; i_13 += 2) 
            {
                arr_46 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_13 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (short)-21247)) != (var_13)))) : (((/* implicit */int) ((var_13) != (((/* implicit */int) arr_12 [i_0 + 1] [i_4] [i_13 + 1]))))))) ^ (((/* implicit */int) min((arr_24 [i_0 + 1] [i_0 + 2] [i_13 - 3] [i_13 - 1]), (((/* implicit */unsigned short) arr_17 [i_0 + 1] [i_0 - 1] [i_13 - 2] [i_13 - 3])))))));
                var_38 = ((/* implicit */int) arr_31 [i_0] [i_0] [17ULL] [i_0 + 2]);
            }
        }
        /* LoopSeq 2 */
        for (long long int i_14 = 2; i_14 < 17; i_14 += 2) 
        {
            var_39 = ((/* implicit */int) arr_48 [i_0] [13ULL]);
            arr_49 [i_14 + 2] [i_0] [i_0] = var_7;
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) min((min((((long long int) arr_0 [i_14])), (((/* implicit */long long int) arr_35 [(short)16])))), (arr_0 [i_0]))))));
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((unsigned short) min((min((arr_31 [i_0] [i_14] [i_14] [i_0]), (arr_0 [i_0]))), (((/* implicit */long long int) arr_44 [i_0 + 2] [i_14 + 3] [i_0]))))))));
        }
        for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                var_42 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_16] [i_0] [i_0] [i_16])) % (((/* implicit */int) arr_41 [i_0 - 1] [i_0 + 2] [i_0]))));
                var_43 = ((-8469977922178493957LL) | (((/* implicit */long long int) -1543646416)));
            }
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                arr_58 [i_0] [i_15] [i_0] [i_17] = ((/* implicit */short) min((((arr_15 [i_0 + 1] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))))), (((long long int) arr_40 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [3ULL]))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        {
                            arr_64 [i_0 + 2] [i_15] = ((/* implicit */unsigned long long int) arr_39 [i_15]);
                            arr_65 [i_0] [6LL] [i_19] = ((/* implicit */unsigned int) -3752696727153676655LL);
                            var_44 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_56 [i_0])), (var_15)))) ? (arr_4 [i_15] [10U] [i_18] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_0] [i_15] [i_0] [i_18] [i_19])) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [(short)9] [(short)9] [i_18] [i_18])) != (2147483647)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_3))))))))));
                            var_45 = ((/* implicit */long long int) ((unsigned long long int) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_13 [i_19] [i_17] [i_0])))) : (-1112957244454007881LL))));
                            var_46 = ((((/* implicit */_Bool) min((((int) 1700220165615242274LL)), (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [(unsigned short)13] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) * (18446744073709551597ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_0 + 2] [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 2]))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)65)), (18446744073709551611ULL)));
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        {
                            var_48 *= ((/* implicit */unsigned long long int) min((((short) 2001233711U)), (((/* implicit */short) ((((/* implicit */_Bool) 444966660)) || (((/* implicit */_Bool) 1LL)))))));
                            var_49 = max((((long long int) arr_1 [i_0] [i_0 - 1])), (((/* implicit */long long int) min((arr_1 [i_0] [i_0 - 1]), (((/* implicit */signed char) var_4))))));
                            var_50 = ((unsigned long long int) max((8889028770851458403LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) << (((11529591279219157325ULL) - (11529591279219157320ULL))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_5)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (_Bool)1)) >> (((12867614170095286990ULL) - (12867614170095286984ULL)))))));
                arr_73 [i_0] [(unsigned char)14] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_8))) >> (((min((((long long int) var_5)), (max(((-9223372036854775807LL - 1LL)), (arr_28 [i_0] [i_15] [i_22]))))) - (1232949306853217567LL)))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_53 [i_23]) | (arr_53 [i_23])))) ? (arr_43 [i_0] [i_15] [i_0] [i_23]) : (((arr_28 [i_23] [5LL] [i_0]) / (((var_5) << (((((((/* implicit */int) arr_7 [i_15] [i_23] [10ULL] [i_0] [i_15])) + (41))) - (5)))))))));
                var_53 = ((/* implicit */unsigned long long int) arr_35 [i_0 + 1]);
                arr_77 [i_0] [i_0] [i_0 + 2] = max((max((min((((/* implicit */unsigned long long int) var_13)), (1869997510301944580ULL))), (((/* implicit */unsigned long long int) ((int) 12867614170095286990ULL))))), (((unsigned long long int) 1332850798)));
            }
            var_54 ^= 18446744073709551604ULL;
        }
        var_55 = min((min((1700220165615242274LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min(((unsigned char)24), (((/* implicit */unsigned char) (_Bool)1))))));
        var_56 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (1558746423)));
    }
    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
    {
        var_57 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_24] [i_24 - 1] [i_24 - 1])) ? (((/* implicit */int) max(((short)25254), (((/* implicit */short) var_9))))) : (((((/* implicit */_Bool) arr_30 [i_24] [i_24])) ? (1543646415) : (((/* implicit */int) var_10))))))), (((long long int) (signed char)-84)));
        var_58 |= 887071883874314174LL;
    }
}
