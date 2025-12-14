/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152050
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 |= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((17038242887117531952ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24)))))), (((unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [(unsigned char)0])) : ((-2147483647 - 1)))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) (!(arr_1 [i_0])))), (var_3)))) >= (((/* implicit */int) (unsigned short)21303))));
        arr_3 [i_0] |= var_5;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned char) (((-2147483647 - 1)) <= (268435452)));
                    arr_11 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (1912507249) : (((/* implicit */int) ((unsigned short) 4294967295U)))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_10)) < (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)25)))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((2147483647) >= ((~(((/* implicit */int) (unsigned short)56830)))))))));
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) (short)-19370);
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_4 [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [(unsigned char)5]))) ? (((/* implicit */int) ((short) -7353382058742266266LL))) : (arr_13 [i_5 - 1]))))));
                        arr_21 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_13 [i_4])) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_17 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        {
                            arr_28 [i_1] [i_8] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)0)) ? (17038242887117531968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) | ((-(arr_16 [i_8] [i_8] [i_7])))));
                            arr_29 [i_1] [i_1] [i_7] [i_8] [i_9] [i_7] = ((/* implicit */signed char) 17038242887117531952ULL);
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) var_2);
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_7] [i_7] [i_7] [i_1] [i_1]))) != (7353382058742266265LL)))) >> (((((/* implicit */int) arr_5 [i_4])) - (133)))));
            }
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
        {
            var_28 += ((/* implicit */long long int) ((unsigned char) (unsigned char)89));
            arr_34 [(_Bool)0] [i_1] = ((/* implicit */unsigned int) -3054857460187446480LL);
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
                    {
                        var_29 -= var_13;
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned char) arr_42 [i_1] [i_11])))));
                        var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_42 [i_14] [i_14]))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((var_2) ? (arr_39 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_33 = (+(((/* implicit */int) (unsigned char)29)));
                        var_34 = ((/* implicit */unsigned short) (-(arr_40 [i_1] [i_12])));
                        var_35 = ((/* implicit */signed char) (short)29748);
                        var_36 ^= ((/* implicit */short) arr_0 [i_1]);
                    }
                    for (unsigned int i_16 = 3; i_16 < 10; i_16 += 4) 
                    {
                        var_37 &= ((/* implicit */int) ((unsigned char) var_3));
                        arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_27 [i_12] [i_12] [(unsigned char)10] [i_1])) + (arr_4 [i_1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_44 [i_11] [i_16 - 2] [i_16] [i_16 - 1] [i_16 + 1]))));
                        arr_52 [i_1] [(signed char)8] [(signed char)8] [i_13] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((523776) | (((/* implicit */int) var_10))))));
                    }
                    arr_53 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)36060))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
                {
                    arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((-3471677300454651981LL) >= (((/* implicit */long long int) var_15)))))));
                    var_38 = ((/* implicit */_Bool) arr_9 [i_17]);
                    var_39 = ((/* implicit */short) ((arr_33 [i_11] [9U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_11] [i_12])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (-1))))));
                        arr_59 [i_1] [i_1] [i_1] [11] [(unsigned char)4] = ((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1]);
                        arr_60 [i_1] [i_11] [i_18] = ((/* implicit */int) arr_7 [i_1] [i_1]);
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        var_41 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-19360)) : (var_6))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_2)) >= (-20))))));
                        var_42 += ((/* implicit */unsigned char) var_10);
                        var_43 = ((/* implicit */unsigned int) arr_43 [i_20] [i_11] [i_12] [i_11] [i_12]);
                    }
                    var_44 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) arr_55 [i_1] [i_1] [i_1])) : (arr_37 [i_1])))));
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) 730613918026403596ULL)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (_Bool)1))));
                }
                var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((((/* implicit */int) (short)-16657)) + (2147483647))) >> (((((/* implicit */int) var_12)) - (5507))))))));
                var_48 = ((((/* implicit */unsigned int) ((arr_15 [i_12] [i_11] [i_1]) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_13))))) >= (arr_19 [i_1] [i_12] [i_12] [i_11]));
                arr_67 [i_12] [i_11] = ((/* implicit */_Bool) (~(var_15)));
            }
            for (int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
            {
                var_49 ^= ((/* implicit */int) arr_20 [i_1] [i_11] [i_11] [i_21]);
                /* LoopNest 2 */
                for (signed char i_22 = 1; i_22 < 10; i_22 += 2) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_22 + 1])) & (((/* implicit */int) arr_31 [i_22 + 1]))));
                            var_51 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_24 = 1; i_24 < 9; i_24 += 4) 
                {
                    var_52 = ((/* implicit */int) ((arr_8 [i_1] [i_24 + 2] [i_21]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        arr_82 [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44791)) ? (((/* implicit */int) arr_18 [(signed char)7] [(signed char)7] [i_21])) : ((~(var_6)))));
                        var_53 |= ((/* implicit */int) var_16);
                        arr_83 [i_25] [i_11] [i_11] [i_25] [i_25] = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_24 + 1] [i_24 + 1] [i_25] [i_24 + 3]))));
                    }
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19360)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7353382058742266265LL)));
                    arr_84 [i_24] [i_11] = ((/* implicit */unsigned char) arr_23 [i_21]);
                }
                for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                {
                    arr_87 [6U] [6U] [i_26 + 1] = ((/* implicit */_Bool) 1732667106);
                    arr_88 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_11] [i_26 + 1] [i_11])) ? (((long long int) arr_7 [5LL] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_26] [i_26 + 1] [i_26] [i_26])))));
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_65 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 + 1])) % (((arr_79 [i_1] [i_11] [i_11] [i_1] [i_1] [i_11] [i_11]) ? (((/* implicit */int) arr_80 [i_1] [i_11] [i_21] [i_26 + 1])) : (((/* implicit */int) arr_26 [i_1] [i_1] [i_11] [i_11] [i_1] [i_26] [i_26 + 1]))))));
                }
            }
            for (int i_27 = 0; i_27 < 12; i_27 += 2) /* same iter space */
            {
                var_56 -= ((/* implicit */unsigned int) ((int) arr_78 [5U] [i_11] [i_27] [i_1] [i_11]));
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 2; i_28 < 8; i_28 += 3) 
                {
                    for (int i_29 = 2; i_29 < 9; i_29 += 1) 
                    {
                        {
                            var_57 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_72 [i_28] [i_28] [i_28 + 4] [i_29 + 1])) : (((/* implicit */int) arr_72 [i_1] [i_1] [i_28 + 3] [i_29 - 1]))));
                            var_58 = ((/* implicit */int) min((var_58), (var_6)));
                            var_59 ^= ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) ((var_1) >> (((var_6) + (1510268902))))))));
            }
            /* LoopNest 3 */
            for (unsigned short i_30 = 3; i_30 < 9; i_30 += 4) 
            {
                for (unsigned char i_31 = 1; i_31 < 11; i_31 += 1) 
                {
                    for (unsigned long long int i_32 = 1; i_32 < 10; i_32 += 1) 
                    {
                        {
                            var_61 &= ((/* implicit */unsigned char) (~(((var_11) ? (7353382058742266255LL) : (((/* implicit */long long int) 0))))));
                            arr_106 [i_1] [i_30] [i_30 - 3] [i_30 - 3] [i_32] = ((/* implicit */_Bool) var_1);
                            var_62 = ((/* implicit */_Bool) (-(arr_19 [i_32] [i_30] [i_30] [i_30 - 2])));
                        }
                    } 
                } 
            } 
            var_63 *= ((/* implicit */unsigned char) var_5);
            arr_107 [i_1] = ((/* implicit */short) var_15);
            var_64 = var_14;
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_33 = 1; i_33 < 12; i_33 += 4) 
    {
        for (long long int i_34 = 0; i_34 < 13; i_34 += 2) 
        {
            for (short i_35 = 1; i_35 < 9; i_35 += 4) 
            {
                {
                    arr_116 [i_34] [i_35] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_35]))))), (max((((/* implicit */unsigned long long int) arr_110 [i_33 - 1])), (min((var_1), (0ULL)))))));
                    var_65 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_112 [i_33]))) % (min((var_16), (((/* implicit */long long int) var_8))))));
                    var_66 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((332418911), (((/* implicit */int) arr_114 [i_35 - 1] [i_34] [i_34] [i_33]))))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) (short)28726))))))) ? (max((var_16), (((/* implicit */long long int) ((signed char) arr_2 [i_33] [i_34]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_117 [i_35] = arr_113 [i_33 + 1] [i_33 + 1];
                }
            } 
        } 
    } 
    var_67 = max((max((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_11)))))), (((/* implicit */int) var_3)));
    var_68 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 20)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((max((var_4), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) 2147483647))))));
}
