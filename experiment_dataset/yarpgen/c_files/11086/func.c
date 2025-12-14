/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11086
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29731))) : (18446744073709551604ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [11U] [22LL] [i_1])))))));
            arr_7 [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [(signed char)2]);
        }
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_6 [i_0]), (arr_6 [i_0])))), (((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) arr_6 [i_0]))))));
        var_17 |= arr_3 [i_0] [i_0] [i_0];
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-64))))), (min((((/* implicit */short) var_5)), ((short)29726))))))));
        arr_13 [i_2] [(signed char)14] = 13045358256310528957ULL;
        arr_14 [i_2] = ((/* implicit */int) var_0);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) (unsigned char)236)) ? (131040) : (((/* implicit */int) (signed char)9))))));
            var_19 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)241))))));
        }
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_19 [2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21758)) % (((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_2))))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) min((((((/* implicit */_Bool) arr_8 [i_4])) && (((/* implicit */_Bool) (unsigned char)249)))), (((((/* implicit */_Bool) (unsigned char)16)) && (((/* implicit */_Bool) 13045358256310528954ULL)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_20 += ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned short)48124))))), (var_12))) >= (((/* implicit */unsigned long long int) (-(var_13))))));
                    var_21 = ((/* implicit */unsigned long long int) ((max(((-(var_0))), (((/* implicit */unsigned int) (signed char)58)))) >> ((((+(((/* implicit */int) ((unsigned short) 16806604442762014003ULL))))) - (60712)))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (unsigned short)21774)) : (((/* implicit */int) (unsigned short)23))));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        arr_35 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)13)), (((((/* implicit */_Bool) (short)-37)) ? (((/* implicit */int) (_Bool)1)) : (-826865787)))));
                        arr_36 [i_4] [i_5] [(signed char)2] [i_6] [(signed char)10] [i_8] [i_6] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) % (1640139630947537595ULL)))) ? ((+(((/* implicit */int) (short)-29727)))) : (((/* implicit */int) (short)-28))))) > (min((((/* implicit */unsigned long long int) (signed char)4)), (14630479510506302122ULL)))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_34 [i_8] [i_8 + 1] [i_8 + 1] [i_6] [i_8 + 1]))));
                    }
                    for (signed char i_10 = 3; i_10 < 11; i_10 += 1) 
                    {
                        arr_39 [8LL] [i_5] [8LL] [i_8] [i_8] [i_8] |= ((/* implicit */signed char) (~(((/* implicit */int) max((((signed char) arr_26 [11U] [11U] [i_6])), ((signed char)(-127 - 1)))))));
                        var_24 = ((((unsigned long long int) (unsigned char)216)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)51786))))))));
                    }
                    for (unsigned short i_11 = 4; i_11 < 11; i_11 += 1) 
                    {
                        arr_43 [i_4] [i_5] [i_6] [i_8] [(_Bool)1] = ((unsigned short) 4294967287U);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) 967940446)))))));
                        var_26 = ((/* implicit */unsigned long long int) 826865799);
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5401385817399022672ULL)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)-5))))) ? (((((/* implicit */_Bool) 826865763)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_32 [8LL] [i_11] [i_8] [i_6] [9LL] [8LL]))));
                    }
                    arr_44 [i_4] [(unsigned short)7] [5] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6]))) ^ (3213328817U)))));
                }
                for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        var_28 |= ((/* implicit */_Bool) var_13);
                        var_29 = ((/* implicit */short) (+(((arr_15 [(signed char)19] [i_5] [(_Bool)1]) ? (((/* implicit */int) arr_15 [i_5] [(unsigned char)23] [(unsigned char)14])) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_6]))))));
                        arr_52 [i_4] [i_13] [i_12] [(_Bool)1] [i_5] [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4] [i_6] [i_13])) ^ (((/* implicit */int) arr_32 [(signed char)5] [(signed char)5] [(signed char)5] [0LL] [0LL] [i_6]))))) != (((((/* implicit */_Bool) -906565817)) ? (var_10) : (3331785784U))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */long long int) arr_25 [i_4] [(short)7] [i_4] [i_4])), (arr_33 [i_4] [i_4] [(_Bool)1] [0U] [i_13 - 1])))));
                        var_30 = ((/* implicit */unsigned char) arr_30 [i_12] [i_12]);
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_57 [7] [i_5] [(signed char)1] [(unsigned short)10] [i_4] [(unsigned short)4] = ((/* implicit */int) ((((long long int) arr_17 [i_4])) >= (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4])))));
                        var_31 ^= ((/* implicit */_Bool) var_4);
                    }
                    var_32 ^= ((/* implicit */unsigned short) (signed char)125);
                    var_33 ^= ((/* implicit */unsigned long long int) ((_Bool) ((13) % (((/* implicit */int) (_Bool)1)))));
                    arr_58 [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)87)), ((unsigned short)21681)))), (((((/* implicit */_Bool) (+(var_12)))) ? (((unsigned long long int) (short)32760)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_13)) < (var_6)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (unsigned short)11))));
                        arr_61 [i_4] [(short)8] [i_4] [(signed char)1] [i_15] = ((/* implicit */int) arr_24 [i_4] [(signed char)2]);
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    arr_64 [i_6] [i_6] [i_4] [11U] [i_6] [7U] = ((/* implicit */unsigned long long int) (signed char)-75);
                    var_35 += ((/* implicit */unsigned long long int) var_5);
                    arr_65 [(unsigned char)6] [i_6] [(short)4] [i_6] [i_6] [i_16] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)113)) ? ((+(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))));
                }
                var_36 = ((/* implicit */short) var_2);
            }
            for (long long int i_17 = 2; i_17 < 9; i_17 += 1) 
            {
                var_37 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_17] [i_17])))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)48397))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14238000854349865403ULL)) && (((/* implicit */_Bool) (short)-23)))))) : (arr_5 [i_4] [(_Bool)1])))));
                var_38 ^= (+(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_13))))) ? (((unsigned long long int) (short)29)) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)11)), (3858932803U)))))));
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) -1930711828)), (arr_5 [(signed char)7] [i_4]))))) ? ((~(((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (arr_24 [i_5] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_4] [i_4] [8LL] [8LL] [8LL] [i_17]))))))));
                var_40 |= ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_48 [i_4] [i_5] [i_5] [i_5] [(signed char)2] [(short)8] [i_4])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) (signed char)8)) >> (((var_12) - (2243042715202114584ULL))))))))));
                arr_69 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_14) : (((/* implicit */int) ((_Bool) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-4019)))))))));
            }
            /* vectorizable */
            for (unsigned int i_18 = 4; i_18 < 10; i_18 += 3) 
            {
                var_41 = ((unsigned short) ((unsigned char) (signed char)67));
                /* LoopSeq 2 */
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    var_42 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_4] [(_Bool)1])) ? ((-(((/* implicit */int) arr_51 [i_18] [i_18] [(unsigned short)4] [(unsigned char)10] [i_5] [8] [(signed char)4])))) : (((/* implicit */int) arr_22 [i_18 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) 3684495393196430843ULL)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (unsigned short)1)))))));
                        arr_77 [i_19] [5ULL] [i_19] [i_19] [i_4] [5ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-46))));
                        var_44 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29))) >= (13765680912915369109ULL))))));
                    }
                    for (signed char i_21 = 2; i_21 < 9; i_21 += 4) 
                    {
                        arr_80 [i_4] [i_5] [i_5] [i_4] [i_5] [i_19] [(_Bool)0] = ((/* implicit */_Bool) var_6);
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_18] [i_18 + 1] [i_21 - 1])) ? (((/* implicit */int) arr_63 [i_18] [i_18 - 2] [i_21 + 2])) : (((/* implicit */int) arr_63 [i_4] [i_18 - 1] [i_21 - 2]))));
                    }
                    var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) var_1))));
                    var_47 ^= ((/* implicit */unsigned short) (signed char)-110);
                }
                for (int i_22 = 2; i_22 < 10; i_22 += 1) 
                {
                    var_48 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_72 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4] [i_5] [i_4] [i_18] [11]))) : (9223372036854775801LL))));
                    var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) -961013288))));
                    var_50 |= ((/* implicit */unsigned long long int) arr_29 [i_5] [i_22] [i_5] [i_5] [i_5] [i_5]);
                }
            }
            arr_84 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_40 [i_5] [i_5] [i_5] [i_5] [i_5])))) % (1921035524)));
            /* LoopSeq 4 */
            for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                arr_87 [i_4] [i_5] [i_4] [10] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(arr_74 [i_5] [(short)4] [(short)4] [(_Bool)0] [i_5])))) ? (((((/* implicit */int) (short)31)) - (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_18 [i_5] [i_5]))))));
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-63))))) * (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) : (3U)))))) ? (((((/* implicit */_Bool) ((2153342558932076855ULL) & (((/* implicit */unsigned long long int) arr_74 [i_4] [i_4] [i_23] [(signed char)8] [i_23]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) : (((unsigned int) var_12)))) : (var_11)));
                var_52 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_82 [7] [i_23] [7] [7] [7] [i_4])) <= ((-(((/* implicit */int) arr_78 [(signed char)11] [i_5] [i_5] [i_4])))))))));
            }
            /* vectorizable */
            for (unsigned int i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
            {
                var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) (signed char)105))));
                arr_91 [(signed char)7] [i_5] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 12; i_25 += 2) 
                {
                    for (signed char i_26 = 1; i_26 < 11; i_26 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)108)))))));
                            var_55 += ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_3)) + (-1921035505))));
                        }
                    } 
                } 
                var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-1)))))));
            }
            for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_28 = 0; i_28 < 12; i_28 += 1) 
                {
                    var_57 = ((/* implicit */short) arr_83 [i_4] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_4]);
                    arr_102 [i_4] [i_4] [i_27] [i_27] = ((/* implicit */int) ((long long int) min(((unsigned short)36797), (((/* implicit */unsigned short) (signed char)-110)))));
                }
                arr_103 [(short)0] [i_5] [i_27] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) + (1050767986438651846LL)));
                var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)5))));
            }
            /* vectorizable */
            for (unsigned int i_29 = 1; i_29 < 8; i_29 += 2) 
            {
                var_59 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */unsigned long long int) arr_54 [i_4] [(unsigned char)10] [i_4] [9LL] [(signed char)5] [(_Bool)1])) : (var_12))))));
                var_60 |= ((/* implicit */unsigned int) var_13);
                arr_108 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_4] [i_4] [6U] [6U] [i_4])) + (((/* implicit */int) arr_40 [i_4] [(unsigned short)9] [i_29] [i_29 + 2] [i_29 + 2]))));
                var_61 = ((/* implicit */short) ((unsigned int) ((4294967295U) << (((((/* implicit */int) (signed char)127)) - (97))))));
                var_62 *= ((/* implicit */_Bool) ((short) arr_31 [8ULL] [(signed char)4] [i_5] [(_Bool)1]));
            }
            var_63 ^= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_66 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_66 [i_5] [(short)7] [(short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_107 [i_4]))))))))));
        }
        for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 1) 
        {
            var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) 11U))));
            var_65 = ((/* implicit */signed char) (~(((unsigned long long int) arr_101 [i_30] [i_4] [i_4] [0U]))));
            var_66 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(14U)))) ? (1838451654834156264ULL) : (8344685090081129426ULL)));
            var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1365747391)))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [11] [i_30] [1ULL] [1ULL] [i_4] [(_Bool)1] [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_4] [(signed char)1] [i_4] [i_4]))) : (17793105302985271599ULL)))) && (((/* implicit */_Bool) (+(var_10))))))));
        }
    }
    var_68 += ((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_8)))))))));
}
