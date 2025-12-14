/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100831
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)151)))))));
                            var_11 = arr_1 [i_0];
                            arr_14 [i_0] [i_1] [i_2 + 3] [i_2 + 3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [6U] [i_1] [6U] [6U])) << (((((/* implicit */int) var_8)) - (32363)))));
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) <= (arr_7 [i_0 + 1] [i_3] [i_2 - 2] [i_4])))) >= (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 3] [i_4])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)201)) == (((/* implicit */int) (signed char)-19))));
                            var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1433519589U)) ? (arr_5 [i_0]) : (arr_5 [i_0 - 1])));
                        }
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */_Bool) (+((~((-9223372036854775807LL - 1LL))))));
                            arr_22 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((arr_11 [i_0] [i_1] [i_0 - 1] [i_3]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */long long int) 1699363721U)) : (arr_10 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) 8256281121844887916LL)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) | (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((max((((arr_5 [i_2]) + (arr_0 [i_1]))), (((/* implicit */long long int) 1254157312U)))) <= (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_6])), (6U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) - (((/* implicit */int) (unsigned short)29719)))))))))))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 8; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) arr_7 [i_7 - 3] [i_0] [i_7 - 2] [i_7 - 3]))), (min((((((/* implicit */_Bool) var_0)) ? (3284655827U) : (var_7))), (var_0)))));
                            var_16 = ((/* implicit */unsigned long long int) min(((~(arr_10 [i_0 - 1] [i_0]))), (((((/* implicit */long long int) (~(3357153851U)))) ^ (((((/* implicit */long long int) var_7)) | (164257822439938972LL)))))));
                            var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((2097151LL) / (9223372036854775804LL))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_0 + 1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_8);
                            var_18 = (unsigned short)15;
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 1) 
                        {
                            var_19 = (~(min((((/* implicit */unsigned int) arr_13 [i_0 + 1] [i_1] [i_2 - 2] [i_9 - 2] [i_9])), (2128415009U))));
                            arr_35 [i_0] [i_3] [i_3] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_21 [i_9 - 1] [i_9] [i_9 - 3] [i_9 + 1] [i_9] [i_3] [i_9]);
                            arr_36 [i_3] &= ((/* implicit */unsigned int) arr_13 [i_9] [i_2] [i_2 + 3] [i_1] [i_0 + 1]);
                            arr_37 [i_9 - 2] [i_9] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_0] [i_0] [i_9] [i_0 - 1])), (min((arr_11 [i_0] [i_0] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned char)7)))))) : (((/* implicit */unsigned long long int) ((max((3537832248U), (((/* implicit */unsigned int) arr_25 [i_0] [i_3] [i_1] [i_1] [i_0])))) & (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_3] [7ULL]))) : (arr_3 [i_2 + 3] [i_2 + 3]))))))));
                        }
                        arr_38 [i_3] [i_0] [i_2 + 2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 4) 
                    {
                        var_20 = ((/* implicit */int) (((_Bool)1) ? (-8359634429446128748LL) : (((/* implicit */long long int) ((/* implicit */int) ((8646911284551352320LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) 
                        {
                            arr_45 [i_10] [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -8330098195603634246LL)) : (18446744073709551615ULL)));
                            arr_46 [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_10 - 3])) ? (((/* implicit */int) arr_42 [i_0])) : (((/* implicit */int) arr_29 [i_2 - 1] [i_2] [i_10 - 1] [i_11 + 1] [i_11 + 1]))));
                            var_21 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_11 - 1])) / (-220149393304052582LL)));
                            arr_47 [i_0] [i_1] [i_2] [i_0] [i_10] [i_1] = ((/* implicit */unsigned int) (unsigned char)255);
                            arr_48 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) >= (((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_0] [(signed char)7] [(signed char)7] [2U] [i_11]))))));
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) arr_43 [i_0] [i_1] [i_0 - 1] [i_12] [i_2 + 1] [i_1])), (8302904739767556790ULL)))));
                        arr_51 [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */int) ((((0ULL) * (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)169)) ^ (((/* implicit */int) (signed char)65)))))))));
                        var_23 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_0])) ? (((/* implicit */int) arr_50 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 3])) : (((/* implicit */int) arr_50 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_2 + 3]))))) : (((long long int) arr_50 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_2 + 3]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            var_24 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (signed char)4)))));
                            var_25 |= ((/* implicit */signed char) arr_49 [i_0] [i_1] [i_2 + 3] [i_13] [i_12] [i_13]);
                        }
                        for (long long int i_14 = 1; i_14 < 9; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (max((((unsigned int) var_7)), (((/* implicit */unsigned int) ((unsigned short) arr_8 [i_2 + 1] [i_12] [i_2] [i_2 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (max((((/* implicit */long long int) 20U)), (9223372036854775807LL))))))))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (unsigned short)65535))));
                        }
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_56 [i_0] [i_0]))));
                            var_29 |= ((/* implicit */unsigned long long int) 3248921382U);
                        }
                    }
                    for (unsigned int i_16 = 2; i_16 < 9; i_16 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) (unsigned char)0);
                        /* LoopSeq 4 */
                        for (int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
                        {
                            arr_64 [i_0] = ((/* implicit */unsigned short) 4051190064U);
                            var_31 = ((/* implicit */unsigned long long int) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_49 [i_0] [i_1] [(unsigned char)8] [i_16] [i_1] [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_2] [2U])))))) : (arr_58 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_16])))), (arr_62 [i_0] [i_1] [i_2] [i_0]))))));
                        }
                        for (int i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
                        {
                            arr_67 [i_18] [i_0] = ((/* implicit */unsigned char) (+(1329665111U)));
                            arr_68 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)114);
                            var_33 = ((/* implicit */unsigned long long int) ((min((min((0LL), (((/* implicit */long long int) (unsigned short)51329)))), (((/* implicit */long long int) var_6)))) * (((/* implicit */long long int) max((((var_0) | (var_1))), (((/* implicit */unsigned int) arr_15 [i_0] [i_0 - 1] [5] [i_0 + 1] [i_0])))))));
                        }
                        for (int i_19 = 0; i_19 < 11; i_19 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (min((max((var_9), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_2])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [i_0] [i_0 - 1] [(_Bool)0] [i_0 + 1] [i_1])))))))));
                            arr_71 [i_0] [i_0] = ((/* implicit */long long int) (+((-(arr_59 [i_16 + 1] [i_16] [i_16 - 2] [i_0] [i_16 + 2] [(unsigned char)8])))));
                            var_35 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)82)) ? (14987998717972413538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))))));
                            var_36 += ((/* implicit */unsigned int) (_Bool)0);
                        }
                        for (int i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
                        {
                            arr_76 [i_0] [i_0] [i_2 - 2] [i_16] [i_0] [i_16] [i_2] = min((((/* implicit */long long int) ((unsigned int) -514486244))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967295U)))));
                            var_37 = ((/* implicit */signed char) (+(((((long long int) arr_15 [i_0] [i_0] [i_2] [i_16] [i_20])) + (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_8)))))))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967287U)) ? (3837664089U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222)))))) * (8765174537012597119ULL)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)30453)), (9141523336506313831ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) <= (4294967290U)))))));
                            var_39 = ((/* implicit */_Bool) max((var_39), ((!(((/* implicit */_Bool) ((long long int) (_Bool)0)))))));
                        }
                        var_40 |= ((/* implicit */unsigned short) arr_33 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_16]);
                    }
                    var_41 ^= min((67108856U), (3113032668U));
                    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (805909238U) : (4294967295U)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3401216591U))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                        {
                            {
                                arr_84 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((-4898775660874696485LL), (((/* implicit */long long int) (unsigned char)12))));
                                var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min(((-(4121561485U))), ((~(var_6)))))) * ((((!(((/* implicit */_Bool) arr_79 [i_0] [i_0] [i_2] [i_21] [i_22] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) var_1)) : (1215680939985759414ULL))))))));
                            }
                        } 
                    } 
                    arr_85 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) 1872592503U);
                }
            } 
        } 
    } 
    var_44 = ((/* implicit */unsigned int) var_4);
    var_45 = max((((((((/* implicit */_Bool) (unsigned char)247)) ? (946781489U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_4))))))), ((((!(((/* implicit */_Bool) var_1)))) ? (min((0U), (((/* implicit */unsigned int) (unsigned char)0)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (var_1))))));
}
