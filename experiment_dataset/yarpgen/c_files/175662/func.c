/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175662
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37250)) ? (4680905956106160236ULL) : (11422911159174564162ULL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(arr_1 [i_0] [i_0])))), (2199023255488ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)24))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))) << (((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 1073741823)) : (-4510177760778498015LL))) + (((/* implicit */long long int) (-2147483647 - 1))))) + (1073741825LL)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_9 [(signed char)2] [i_3] [i_2 - 1] [i_1] [(signed char)2] &= ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_3]);
                        arr_10 [i_0] [(unsigned char)9] [i_0] [i_0] [(signed char)0] [i_3] = ((/* implicit */unsigned char) ((unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_9))), (((/* implicit */unsigned int) max((((/* implicit */short) var_4)), ((short)28672)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_16 = arr_3 [i_0] [i_2 + 1] [i_0];
                        var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_2 + 1])) + (2147483647))) >> (((((/* implicit */int) var_12)) + (23143)))))) + (((((/* implicit */long long int) arr_1 [i_0] [i_0])) / (arr_5 [i_2] [i_0] [i_0])))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 3477846322U)) : (max((var_3), (((/* implicit */unsigned long long int) var_1))))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? ((~(arr_6 [i_0] [i_0] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (7023832914534987453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))), (((/* implicit */int) ((signed char) arr_7 [i_0]))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [(unsigned short)8] [i_2] [i_5] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_5]);
                        arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) (unsigned short)3))));
                        var_19 ^= var_3;
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned int) var_3)), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(signed char)7])))))))) ? (((/* implicit */int) ((signed char) arr_14 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1]))) : (((/* implicit */int) arr_0 [i_5]))));
                            var_21 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) max((var_8), (var_13)))), (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15776))) : (13765838117603391379ULL))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) << (((((/* implicit */int) (short)31711)) - (31701))))) << (((((/* implicit */int) arr_11 [i_2 - 1] [i_6] [i_2 - 2] [i_6] [i_6])) - (2505))))))));
                            arr_22 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 11329462U)) / (((((/* implicit */_Bool) 0ULL)) ? (11975799151238093396ULL) : (var_11))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_2 - 2] [i_0] [i_5])))))));
                            var_22 ^= ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_1] [i_2 - 2] [i_5] [i_6] [(unsigned short)8]);
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (4283637833U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((unsigned int) arr_4 [(short)7] [i_1] [i_1]))));
                            var_23 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((((/* implicit */int) var_13)) >> (((((/* implicit */int) (signed char)-9)) + (18))))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (var_2))))));
                            arr_31 [i_8] [i_8] [i_8] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_12)), (15428464036463662151ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15776))) : (var_9)))))))) > (min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (+(var_9))))))));
                            arr_32 [i_0] [i_0] [i_2] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) var_10));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 4; i_9 < 9; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_7])) <= (((/* implicit */int) arr_35 [i_9] [i_2] [i_2] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_0])))))) : (var_0)));
                            var_25 = ((/* implicit */short) (_Bool)0);
                            arr_36 [i_9] [i_0] [i_7] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3427199065958705592ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            arr_37 [i_2 - 2] [i_0] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_7] [i_7] [i_9])) * (((/* implicit */int) (unsigned short)14028))));
                            arr_38 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_33 [i_0] [i_2 - 1] [(unsigned char)5] [i_0] [i_0]) : (arr_33 [i_0] [i_2 - 2] [i_2 + 1] [i_2] [i_0])));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */unsigned int) var_7)), (var_0))), (((/* implicit */unsigned int) ((signed char) (short)-8582))))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_2 - 2] [i_2 + 1] [i_0])))))));
                            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_2] [i_7] [(short)8])), (((4680905956106160236ULL) & (0ULL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_2 - 2] [2U] [i_7])), (arr_12 [i_7] [(unsigned short)8] [i_2 - 2] [i_2 - 2] [(unsigned short)8] [i_1])))) : (((((/* implicit */int) (short)-1)) - ((+(((/* implicit */int) var_7))))))));
                            arr_42 [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_1] [i_2 - 1] [i_2] [i_10])) | (((/* implicit */int) arr_24 [i_0] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))) ? (((((/* implicit */_Bool) arr_24 [(short)7] [i_2 - 2] [(short)7] [(signed char)1])) ? (((/* implicit */int) arr_3 [i_1] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_3 [i_2] [i_2 - 2] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [i_2] [i_2 - 2] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_2 + 1] [i_0]))))));
                            var_28 = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) (unsigned short)58121)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
                            arr_43 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_41 [i_0] [i_2] [i_0])))));
                        }
                        var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_2 - 1] [i_2 - 1] [(short)4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_41 [i_2 + 1] [i_2 - 2] [4LL]))))) ? (((/* implicit */int) ((unsigned char) arr_41 [i_2 + 1] [i_2 - 2] [(signed char)4]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) arr_34 [i_2 - 1] [i_2 + 1])))))));
                        arr_44 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */short) var_0);
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 2; i_11 < 7; i_11 += 1) 
                        {
                            arr_48 [i_11 - 1] [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42121))) < (3018280037245889438ULL)))), ((+(var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_7)))) < (((((/* implicit */_Bool) 1295760297585792060ULL)) ? (2147483647) : (arr_33 [i_0] [i_0] [i_0] [i_7] [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_11] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_35 [i_1] [i_7] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0]))) : (arr_7 [i_0])))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((11991722362865705442ULL), (11991722362865705442ULL)))) ? (((1423869406) & (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)99))))))) | (((max((((/* implicit */unsigned int) (signed char)31)), (arr_1 [i_0] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))))))))));
                            var_31 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_11 + 1] [i_2 + 1] [i_11 + 1] [i_2 + 1])) ? (arr_46 [(unsigned short)4] [6ULL] [i_2 - 1] [i_7] [i_11] [i_11 - 2]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_25 [i_1] [i_2 + 1]))))))), (((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) (unsigned short)7415)), (911507292U)))))));
                            var_32 &= ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) (unsigned short)51712)))));
                        }
                        var_33 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_1] [i_7] [i_2] [i_1] [i_0]))));
                    }
                    for (signed char i_12 = 1; i_12 < 6; i_12 += 3) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65518)))))));
                        arr_52 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((int) arr_7 [(unsigned short)8]))) >= (max((((/* implicit */unsigned long long int) var_1)), (11642366167999116681ULL))))) ? (max((arr_19 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_0] [i_12] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -286721538)) ? (var_3) : (var_11)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) max((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_11 [i_0] [i_1] [i_1] [i_2] [i_12])))))))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [0ULL] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0)))) ? (min((15019545007750846009ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)77)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)20)) && (((/* implicit */_Bool) (signed char)4)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)1023), (((/* implicit */short) var_4)))))) | (((((/* implicit */_Bool) (signed char)4)) ? (1295760297585792060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(1152921504605798400ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) 54093776)))))) : ((~(arr_19 [i_0] [i_1] [i_0] [i_2] [i_12] [i_13] [9ULL])))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_12] [i_12 + 3] [i_12 + 4] [i_12 + 4] [i_12 + 4] [i_12 + 3])) ? (((/* implicit */int) arr_29 [i_12] [i_12 + 3] [1ULL] [i_12] [i_12 + 4] [i_12 + 4])) : (arr_54 [i_12] [i_12 + 3] [i_12] [i_12] [i_12 + 4] [(unsigned char)7] [i_12 + 1]))))));
                        }
                    }
                    for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) ((unsigned short) max((arr_33 [i_14] [i_0] [i_2] [i_2] [i_0]), (((/* implicit */int) var_1)))));
                        var_39 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_56 [i_2 - 1] [i_1] [(signed char)2] [i_14] [6] [i_2]) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_26 [(unsigned short)0] [i_1] [i_2] [(short)6]))))) : (((/* implicit */int) arr_13 [(signed char)0] [i_14] [i_2 - 1] [i_0] [3] [i_0])))))));
                        var_40 = ((((/* implicit */_Bool) arr_34 [i_0] [(unsigned short)2])) ? (((arr_53 [i_2] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 + 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) / (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))));
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))), (((((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_0] [(unsigned short)8] [2U])) & (((((/* implicit */_Bool) var_8)) ? (17293822569103753219ULL) : (17293822569103753216ULL))))))))));
                    }
                }
            } 
        } 
        var_42 *= ((/* implicit */unsigned short) arr_59 [i_0] [(signed char)4] [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                var_43 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))))) & (max((6ULL), (17293822569103753215ULL)))));
                arr_64 [i_0] = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [i_0]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                var_44 = ((/* implicit */unsigned long long int) (-(((max((((/* implicit */unsigned int) (signed char)-118)), (var_0))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned short)0))))))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_45 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_17] [i_17] [i_15] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((((((/* implicit */_Bool) var_11)) ? (18420009296227802894ULL) : (((/* implicit */unsigned long long int) 1306361611)))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_17] [i_0]))) % (var_11))) - (51157ULL))))));
                var_46 |= ((unsigned short) max((((((/* implicit */_Bool) arr_7 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_15] [i_15] [i_17])))), (((/* implicit */unsigned long long int) var_9))));
                arr_67 [i_0] [i_15] [(unsigned short)8] [(unsigned short)8] &= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (min((((/* implicit */unsigned long long int) var_10)), (1152851135862669312ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((+(((((/* implicit */_Bool) (short)-1)) ? (var_2) : (((/* implicit */int) var_12)))))) : (min((((/* implicit */int) var_13)), (arr_23 [6]))))))));
            }
            arr_68 [(signed char)2] &= ((/* implicit */signed char) min(((~(var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-2147483647 - 1))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                arr_71 [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                var_48 = ((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-125)), (var_12))))) >= (var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) 15907060566756515515ULL)) || (((/* implicit */_Bool) (unsigned short)45702)))), (((((/* implicit */int) arr_0 [i_18])) <= (((/* implicit */int) (short)-12147)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(short)5] [i_15] [i_15] [i_15] [i_15] [i_15]))) & (max((var_3), (var_3))))));
            }
        }
    }
}
