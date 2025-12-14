/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16619
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
    var_18 = ((/* implicit */int) ((unsigned long long int) var_14));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
            {
                var_19 |= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 359423449U)))) - ((-((-(var_8))))));
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_20 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((arr_2 [i_0] [i_2]) - (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_3]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)31))))));
                    var_21 = ((unsigned short) var_12);
                }
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-((+(-22310584)))));
                    arr_14 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_16)), ((+(0U)))));
                }
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) (unsigned short)12382)) % (arr_15 [i_1] [i_1] [i_2] [i_5]))))));
                    var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_2 + 2]))) ? (arr_10 [i_1] [i_2 + 1] [i_1]) : (arr_10 [i_5] [i_2 + 1] [i_1])));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_3))));
                        arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] [i_2 - 2] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_6]);
                    }
                }
                var_25 &= ((/* implicit */int) (~(((unsigned int) ((unsigned char) arr_8 [i_0])))));
            }
            for (unsigned char i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
            {
                var_26 += ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 3935543846U)) + (arr_12 [6] [i_7 - 2] [i_1 - 1]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_7 + 2] [i_1 - 2]))))))));
                arr_26 [i_0] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned short) ((arr_20 [i_7 - 1] [i_1] [i_7] [i_7] [i_7 + 2] [i_7] [i_7]) - ((+(((/* implicit */int) arr_9 [i_7 - 1] [i_1] [4LL] [i_0] [i_1 - 2]))))));
            }
            for (unsigned char i_8 = 2; i_8 < 8; i_8 += 1) /* same iter space */
            {
                arr_31 [i_1] |= ((/* implicit */long long int) (+((-(((((/* implicit */int) (short)50)) | (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                var_27 = ((var_8) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65513)) * (((/* implicit */int) arr_9 [i_8] [i_1 - 2] [i_1] [i_8 + 1] [i_1 + 1]))))));
                arr_32 [i_0] [i_0] = var_13;
                arr_33 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */long long int) ((int) (+(((/* implicit */int) var_15)))));
                var_28 ^= ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) arr_21 [i_0] [i_1 - 2] [i_1] [i_8] [i_1 + 1] [i_0] [i_0])))));
            }
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_0] [i_0]);
        }
        /* LoopSeq 3 */
        for (short i_9 = 1; i_9 < 7; i_9 += 2) 
        {
            var_29 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_10), ((unsigned short)12382))))) | (arr_30 [i_0] [i_0] [i_9 + 2] [i_0])))) ? (arr_18 [i_9 + 1] [i_9] [i_0] [i_9] [i_0] [i_9 + 2] [i_0]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (arr_30 [i_0] [i_0] [(unsigned char)2] [i_9 - 1]))))));
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                arr_41 [i_0] [i_9 + 2] [i_0] [i_10] = ((/* implicit */unsigned short) (~(arr_29 [i_0] [i_9 + 2] [i_10])));
                arr_42 [i_0] [i_9] [i_0] [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) arr_40 [i_0] [i_9] [(signed char)5]));
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_30 = (((!(((/* implicit */_Bool) (unsigned short)12382)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_44 [i_9 - 1] [i_9] [i_11])));
                arr_46 [i_11] [i_11] [i_0] = ((/* implicit */unsigned char) (~(arr_10 [i_0] [i_0] [i_0])));
            }
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_13 = 4; i_13 < 8; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_14 = 4; i_14 < 8; i_14 += 2) 
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((short) (+(1231923706)))))));
                    var_32 &= ((((/* implicit */int) arr_24 [i_13 - 4] [i_13] [i_14 - 3])) & (((/* implicit */int) arr_45 [i_14 + 2])));
                }
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((-218635513470198308LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))))))));
                    var_34 ^= ((/* implicit */long long int) arr_56 [i_0] [9LL] [i_13 + 2] [i_13 + 2] [i_0]);
                    arr_57 [i_12] [i_12] [i_0] = ((/* implicit */long long int) 5U);
                }
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    arr_61 [i_0] [i_12] [i_0] [i_12] = ((/* implicit */unsigned int) (~(arr_38 [i_0])));
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) var_0))));
                }
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (~((-(1U))))))));
            }
            for (short i_17 = 4; i_17 < 8; i_17 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) var_0))));
                /* LoopSeq 2 */
                for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    var_38 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)28760))));
                    arr_67 [i_0] [i_0] [i_17] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))));
                    arr_68 [i_12] [i_0] [i_0] [i_18] = arr_3 [i_12] [i_12];
                }
                for (int i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    arr_71 [i_0] [i_12] [i_17 - 4] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2335119452U))))), (2335119452U)));
                    var_39 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)-54))))));
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((_Bool) 965226323)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_15))))) : (((((((arr_18 [i_17] [i_12] [i_17] [i_17 + 1] [i_19] [i_19] [i_0]) + (9223372036854775807LL))) << (((arr_30 [i_0] [i_12] [i_17] [i_19]) - (329158721U))))) << (((max((2764221973U), (arr_64 [i_0] [i_0] [i_0]))) - (2764221970U))))))))));
                }
                /* LoopSeq 2 */
                for (long long int i_20 = 2; i_20 < 9; i_20 += 1) 
                {
                    arr_74 [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 1401491731U))));
                    arr_75 [i_0] [i_20 - 1] = ((/* implicit */unsigned char) var_9);
                }
                for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    arr_78 [i_0] [i_12] [i_17] [i_21] [i_0] = ((/* implicit */unsigned char) var_5);
                    var_41 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
                    var_42 ^= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_77 [i_0] [i_0] [i_12] [i_17] [i_21]))))));
                }
                var_43 = ((/* implicit */_Bool) arr_28 [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        var_44 = ((/* implicit */_Bool) max((var_44), ((!((!((!(((/* implicit */_Bool) 2335119466U))))))))));
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_12] [i_12]))))))))));
                    }
                    for (signed char i_24 = 0; i_24 < 10; i_24 += 4) 
                    {
                        var_46 |= ((/* implicit */long long int) arr_2 [i_22 + 1] [(_Bool)1]);
                        arr_86 [4U] [4U] [i_17] [i_22] [i_0] = ((/* implicit */int) arr_79 [i_0]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_25 = 1; i_25 < 7; i_25 += 3) 
                    {
                        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((unsigned int) (+(arr_12 [i_12] [i_17 - 3] [i_25])))))));
                        var_48 = min(((~(arr_38 [i_0]))), (((/* implicit */long long int) (+((~(((/* implicit */int) (short)54))))))));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)186)))))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_17 - 2])) : ((~(((/* implicit */int) arr_88 [i_0] [i_12] [i_17] [i_22 + 1]))))));
                    }
                    for (long long int i_26 = 0; i_26 < 10; i_26 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) var_9))));
                        var_51 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-9)))))));
                    }
                    for (signed char i_27 = 3; i_27 < 6; i_27 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) 4294967286U)) && (((/* implicit */_Bool) var_6))))) == (((/* implicit */int) max((var_9), ((short)-8)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_77 [i_0] [i_12] [i_17] [i_22 + 1] [i_27])) - (((/* implicit */int) min((var_3), (var_3))))))))))));
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) (~((~(max((((/* implicit */unsigned int) arr_3 [i_0] [i_12])), (2335119466U))))))))));
                        var_54 = ((/* implicit */unsigned long long int) (~(var_7)));
                        arr_95 [i_0] [i_12] [i_0] [i_12] [i_22] = ((/* implicit */int) min((var_6), (((unsigned short) (+(2676077074854732260ULL))))));
                    }
                }
                for (unsigned short i_28 = 4; i_28 < 7; i_28 += 4) 
                {
                    var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) max((((/* implicit */long long int) var_9)), (max((((/* implicit */long long int) arr_50 [i_0] [i_12])), (((-1333483552784975342LL) - (((/* implicit */long long int) 359423451U)))))))))));
                    var_56 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned short) var_9))))), (min((((/* implicit */unsigned long long int) (unsigned char)188)), (18446744073709551615ULL))))))));
                    arr_98 [i_0] [i_12] [i_17 - 4] [i_28] = ((/* implicit */signed char) (short)53);
                }
            }
            for (unsigned short i_29 = 3; i_29 < 8; i_29 += 1) 
            {
                var_57 = ((/* implicit */unsigned char) arr_38 [i_0]);
                var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12380)))))));
                var_59 = ((/* implicit */unsigned long long int) var_15);
                var_60 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_12] [i_29]))))) & (((/* implicit */int) arr_25 [i_0] [i_12] [i_29 - 2]))))), (((unsigned long long int) var_16))));
            }
            for (unsigned long long int i_30 = 1; i_30 < 9; i_30 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_31 = 0; i_31 < 10; i_31 += 4) 
                {
                    var_61 = ((/* implicit */int) (+((~(15770666998854819361ULL)))));
                    /* LoopSeq 4 */
                    for (long long int i_32 = 0; i_32 < 10; i_32 += 1) 
                    {
                        arr_108 [i_0] [i_0] [i_30] [i_31] [i_30] [i_30] = ((/* implicit */unsigned long long int) min((arr_80 [i_30] [i_30] [i_30] [i_0]), (((/* implicit */int) arr_103 [i_0] [i_12] [i_30] [i_0]))));
                        var_62 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                        var_63 = ((/* implicit */long long int) max((var_63), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_66 [i_0] [i_30 + 1] [i_0] [i_12])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)50))))), (((/* implicit */unsigned long long int) arr_66 [i_30] [i_30 + 1] [i_32] [i_12])))))));
                    }
                    for (int i_33 = 1; i_33 < 6; i_33 += 4) 
                    {
                        var_64 = ((/* implicit */unsigned int) var_11);
                        var_65 = ((/* implicit */unsigned char) max((var_65), (((/* implicit */unsigned char) ((short) (+(arr_65 [i_30] [i_30] [i_30 - 1] [i_12])))))));
                    }
                    for (unsigned short i_34 = 0; i_34 < 10; i_34 += 4) 
                    {
                        var_66 += ((/* implicit */long long int) ((unsigned int) arr_12 [i_0] [i_0] [i_30]));
                        arr_113 [i_34] [(unsigned short)8] [i_0] [i_30] [i_34] [2U] = ((/* implicit */unsigned int) arr_6 [i_0] [i_12] [i_12]);
                        var_67 = ((/* implicit */unsigned int) min((var_67), (((/* implicit */unsigned int) var_3))));
                        var_68 = ((/* implicit */unsigned int) max((var_68), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_16)), (arr_87 [i_12] [(short)6])))))))))));
                        arr_114 [i_12] [i_0] [i_30 + 1] [i_31] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)58463)), (12031416535774192136ULL)));
                    }
                    for (unsigned int i_35 = 0; i_35 < 10; i_35 += 4) 
                    {
                        var_69 = ((/* implicit */signed char) ((4294967282U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-51)))));
                        arr_117 [i_0] [i_30 + 1] [i_31] [i_35] [i_0] [i_35] [i_35] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_9))))))), (((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) arr_106 [i_12] [i_30] [i_31] [i_35])))) - (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    }
                }
                for (long long int i_36 = 2; i_36 < 6; i_36 += 2) 
                {
                    arr_120 [i_0] [i_0] [i_30 + 1] [i_30] [i_12] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_109 [i_0] [i_0] [i_30] [i_36] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_12] [i_0] [i_36])) : (((/* implicit */int) arr_105 [i_0] [i_12] [i_12] [(signed char)7] [(signed char)7])))))), ((((-(((/* implicit */int) arr_53 [4ULL] [8ULL] [i_30] [i_36] [i_0] [i_30])))) - ((-(((/* implicit */int) arr_102 [i_0]))))))));
                    /* LoopSeq 2 */
                    for (long long int i_37 = 0; i_37 < 10; i_37 += 4) 
                    {
                        arr_125 [i_0] [i_12] [i_30] [i_36] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)50))));
                        var_70 = ((/* implicit */unsigned short) ((8853944914261342932ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)47)))));
                        var_71 -= ((/* implicit */long long int) var_2);
                        var_72 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_17)))));
                    }
                    for (unsigned short i_38 = 0; i_38 < 10; i_38 += 4) 
                    {
                        arr_128 [i_0] [4LL] [i_36] [4U] [i_12] &= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_36 - 2] [i_12] [i_30 - 1] [i_36] [(_Bool)1] [i_12] [i_12])))))));
                        arr_129 [i_0] [i_12] [i_12] [i_0] [i_12] [i_36] [i_38] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) << ((((+(((/* implicit */int) ((unsigned char) arr_127 [i_0] [i_12] [i_30 - 1] [i_36] [i_38]))))) - (105)))));
                        arr_130 [i_0] [i_12] [i_0] [i_30] [i_36] [i_38] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_116 [i_0] [i_12] [i_30 + 1] [i_12] [i_38] [i_30 + 1] [i_12])))) - (max((max((((/* implicit */long long int) arr_39 [i_38] [i_12] [i_38] [i_36 + 4])), (var_4))), (((/* implicit */long long int) ((int) var_0))))));
                        var_73 = ((/* implicit */signed char) min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)15027))))) : (arr_30 [i_38] [i_12] [i_30] [i_36]))))));
                    }
                }
                for (signed char i_39 = 0; i_39 < 10; i_39 += 2) 
                {
                    var_74 |= ((/* implicit */long long int) var_3);
                    var_75 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                    arr_134 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) var_12));
                    var_76 += ((/* implicit */unsigned short) 3935543847U);
                }
                var_77 = ((/* implicit */long long int) ((arr_106 [i_0] [i_12] [2U] [i_12]) - (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_12])) && (((/* implicit */_Bool) arr_8 [i_0])))))));
            }
            var_78 += ((/* implicit */_Bool) 3935543842U);
            var_79 = ((/* implicit */signed char) max((var_79), (((/* implicit */signed char) var_7))));
            arr_135 [i_0] = ((/* implicit */unsigned short) var_2);
        }
        for (unsigned long long int i_40 = 2; i_40 < 6; i_40 += 1) 
        {
            var_80 = ((/* implicit */int) ((long long int) arr_70 [i_40] [i_40 + 4] [i_40] [i_40]));
            var_81 |= arr_51 [i_0] [i_40 + 4] [i_0] [(unsigned short)2];
        }
        var_82 = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_12 [i_0] [i_0] [i_0]))))))), (var_10)));
        arr_140 [i_0] [i_0] = max(((~(arr_1 [9] [9]))), ((-(((/* implicit */int) max((((/* implicit */short) arr_25 [i_0] [i_0] [i_0])), (var_5)))))));
    }
    var_83 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
    var_84 |= ((/* implicit */unsigned char) var_13);
    var_85 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_9))))));
}
