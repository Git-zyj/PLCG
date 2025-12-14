/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10381
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = min((var_5), (arr_0 [i_0]));
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        var_13 = ((/* implicit */int) 908270018U);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4611686018427387902LL) : (((((/* implicit */_Bool) (short)21835)) ? (4611686018427387902LL) : (((/* implicit */long long int) -1))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 7; i_3 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            arr_18 [0] [i_1] [i_2] [i_5] [i_4] [1ULL] = ((/* implicit */short) arr_8 [i_1] [i_2] [i_3] [i_5]);
                            var_14 = arr_13 [i_4] [(unsigned short)7] [i_4] [i_4] [i_4] [(unsigned short)7];
                            arr_19 [i_1] [i_1] [3ULL] [i_3] [6ULL] [i_5] = (!(((/* implicit */_Bool) (unsigned short)44952)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1]))) : (arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_3] [(short)8] [i_6])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_3 - 1] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)3])))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611686018427387917LL)) ? (742214365U) : (1142461204U)))) ? ((~(((/* implicit */int) arr_23 [i_1] [i_2] [i_3])))) : (((/* implicit */int) arr_22 [i_3 + 3] [i_3 + 3] [i_3] [i_6] [i_6] [i_6] [i_6]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [i_1] [i_2] [i_2] [i_4] [9U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 3] [i_3 + 2]))));
                            var_17 = ((/* implicit */unsigned char) var_5);
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                            var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_7] [i_4] [i_4] [i_3 - 2] [i_3 + 1] [i_7])) : (((/* implicit */int) arr_13 [i_1] [6] [i_3] [i_3 + 3] [i_7] [i_3 + 3]))));
                            arr_27 [(_Bool)1] [i_2] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [(_Bool)1] [i_2] [i_3 + 3] [(_Bool)1] [(unsigned short)8] [i_2])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            arr_30 [i_1] [(_Bool)1] [i_3] [i_4] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (arr_1 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_8] [i_8]))))) / (((/* implicit */long long int) arr_25 [i_3 + 3] [i_3 + 3] [i_3 - 1] [3ULL] [i_3 + 1] [i_3 + 1] [i_8]))));
                            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-4611686018427387902LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_3 + 2] [i_8]))) : (arr_17 [i_3 + 3] [i_3] [i_3 - 2] [i_3 + 3] [i_3])));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 - 2]))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1289459358U) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((short) arr_8 [3ULL] [i_3] [i_3] [i_8]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_1])) < (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [1ULL]);
                        arr_32 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_3 - 1])) ? (arr_1 [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        var_23 = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((-4611686018427387902LL) + (4611686018427387931LL)))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_38 [i_1] [i_3 + 1] [i_9] [i_10] = ((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1] [i_1]);
                            var_24 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])) >> (((/* implicit */int) (_Bool)1)))))));
                            arr_39 [i_1] [i_2] = ((/* implicit */unsigned long long int) 4611686018427387891LL);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_2] [i_3 - 1] [i_3] [i_3] [i_3 - 1])) ? (arr_21 [i_2] [i_3 + 2] [(short)0] [i_3] [i_3 + 2]) : (arr_21 [i_3 + 1] [i_3 + 3] [i_3] [i_3] [i_3 - 2])));
                        }
                        arr_40 [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_34 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3 - 1] [i_9]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        arr_43 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_9 [i_1] [i_2] [i_3 + 3] [i_11]))))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 3; i_12 < 8; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_3 + 3] [i_3] [i_3] [i_3 - 2])) ? (((/* implicit */int) arr_15 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) var_0))));
                            var_27 = ((/* implicit */unsigned char) (!(arr_41 [i_1] [i_11] [i_12])));
                        }
                        arr_47 [i_1] [i_2] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35599)) ? (((/* implicit */int) (short)23882)) : (((/* implicit */int) (signed char)61)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_52 [i_1] [i_1] [i_1] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_41 [i_3 + 1] [i_13 - 1] [i_13 - 1])) * (((/* implicit */int) ((signed char) arr_1 [i_1])))));
                            var_28 = ((/* implicit */unsigned long long int) (-(arr_11 [i_2] [i_3 + 3] [i_11] [i_13])));
                            var_29 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_11]))));
                            arr_53 [i_13] = ((/* implicit */unsigned char) (!(arr_9 [i_13 - 1] [i_13 - 1] [i_3 + 3] [i_3 - 1])));
                        }
                        arr_54 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4611686018427387878LL))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((arr_12 [i_1] [i_1] [i_2] [i_14]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_14] [i_3] [i_2])))));
                        var_31 = ((/* implicit */unsigned long long int) ((unsigned int) arr_41 [i_3] [i_3 + 2] [1LL]));
                        arr_58 [i_1] [i_1] [i_3] [i_14] [i_14] [i_1] = ((/* implicit */int) ((4294967291U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_3 - 2] [i_3 + 1] [i_3 + 3] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 2])))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                arr_64 [2U] [9ULL] [i_15] [i_15] [i_16] [i_16] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_48 [i_1] [i_2] [i_3] [(unsigned short)0] [i_15 - 1] [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_50 [i_1] [i_2]))))));
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_1] [7LL] [i_2] [(_Bool)1] [i_3 - 1] [i_15] [(_Bool)1])) ? (((/* implicit */int) arr_42 [5U] [i_2] [5U] [i_16])) : (((/* implicit */int) arr_34 [i_15] [i_3 + 3] [i_3] [i_15 - 1] [i_16] [i_15]))));
                                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_16] [i_15] [i_15] [i_3] [i_2] [i_1])) ? (((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [(_Bool)1] [4ULL] [i_1])) : (((/* implicit */int) ((signed char) arr_29 [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_35 = ((/* implicit */int) 4032U);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 2) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (short i_19 = 4; i_19 < 14; i_19 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        arr_75 [i_17] [i_20] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_70 [i_17] [i_18])), (arr_69 [i_17] [i_17] [i_17])))) >= (arr_65 [i_17 - 1]))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_1 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) var_0)) ? (arr_67 [i_17]) : (arr_66 [i_20]))))))));
                        arr_76 [i_17] [i_18] [i_19] [i_17] = ((/* implicit */unsigned int) ((_Bool) max((arr_0 [i_17 + 2]), (((/* implicit */unsigned short) arr_73 [(short)2] [(short)2] [(short)2] [i_20])))));
                    }
                    for (short i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-32))));
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 2; i_22 < 15; i_22 += 2) 
                        {
                            var_37 = max(((_Bool)1), ((!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))))));
                            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_71 [i_19 - 2] [i_17 + 2] [i_17 + 1]), (arr_71 [i_19 - 2] [i_17 + 1] [i_17 + 1])))) ? (arr_66 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_69 [i_17] [i_18] [i_19])))), ((!(((/* implicit */_Bool) var_0))))))))));
                            var_39 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_17 - 1])) ? (((/* implicit */long long int) 4294967291U)) : (arr_1 [i_17 - 1])))));
                            var_40 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_19] [i_19 - 4] [i_19] [i_19 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_17] [i_18] [i_19] [(_Bool)1]))) : (5U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_78 [i_17] [i_17] [i_21] [i_17])) ? (arr_67 [i_22]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18644)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))))))) : (((long long int) ((((/* implicit */_Bool) arr_67 [i_21])) ? (4004U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_23 = 0; i_23 < 17; i_23 += 1) /* same iter space */
                        {
                            arr_86 [i_17] [i_17] [i_19] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_19] [(_Bool)1] [i_23])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_77 [i_17] [i_17] [i_23] [i_21] [i_21]))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) 985162418487296LL)))))));
                            var_41 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        }
                        for (signed char i_24 = 0; i_24 < 17; i_24 += 1) /* same iter space */
                        {
                            arr_89 [i_24] [7LL] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_4))))))));
                            arr_90 [i_17] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) (((+((-(((/* implicit */int) arr_82 [i_17] [i_18] [i_19] [i_21])))))) / (((/* implicit */int) min((arr_81 [i_19] [i_18] [i_19 - 3] [i_21] [i_24]), (arr_81 [i_24] [i_19 - 2] [i_19 - 2] [(short)5] [i_17]))))));
                        }
                        for (signed char i_25 = 0; i_25 < 17; i_25 += 1) /* same iter space */
                        {
                            arr_93 [i_19] [i_19 - 4] [i_19] [(_Bool)1] [i_17] = (_Bool)1;
                            arr_94 [i_17 + 2] [i_18] [i_19] [i_21] [i_19] [i_17] = ((/* implicit */unsigned long long int) min((((arr_77 [i_17 + 1] [i_17] [i_19] [i_19 - 4] [(signed char)11]) ? (max((arr_67 [i_17]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_92 [i_17 - 1] [i_17] [i_17 + 2] [i_17] [i_19 + 3])) >> (((((/* implicit */int) arr_92 [i_17 + 2] [(_Bool)1] [i_17 + 1] [i_19] [i_19 - 4])) - (172))))))));
                            var_42 = ((/* implicit */short) arr_82 [i_17] [i_18] [i_19 + 2] [i_25]);
                            arr_95 [i_17] [i_17] [i_18] [(unsigned short)9] [i_19 - 3] [i_21] [15LL] = ((/* implicit */unsigned long long int) arr_0 [i_17]);
                        }
                        for (signed char i_26 = 0; i_26 < 17; i_26 += 1) /* same iter space */
                        {
                            var_43 = ((/* implicit */signed char) ((((arr_98 [i_19] [i_19] [i_17] [i_19] [i_19] [i_17]) != (((/* implicit */int) (short)-1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_17]))))) << (((((/* implicit */int) (short)-28613)) + (28618)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1038716068)))) ? (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_88 [i_17 + 1] [i_18] [i_17] [i_21] [i_26] [i_17 + 1] [i_26])))))))));
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_18] [i_19] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_17] [i_21] [i_19] [i_21] [i_26]))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */short) var_3)))))) : (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)31)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_17 - 1] [i_18] [i_21] [i_26])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_73 [i_26] [i_26] [i_26] [16])))))))))))));
                            var_45 -= ((/* implicit */long long int) arr_97 [i_17] [i_17] [i_21] [i_19] [0] [i_21] [0]);
                            arr_100 [i_17] [i_18] [i_19] [i_21] = ((/* implicit */unsigned short) ((arr_87 [i_17 + 2] [i_17 + 2] [i_19] [i_21] [8U] [(_Bool)1] [i_17]) ? (((/* implicit */int) arr_0 [i_17])) : (((/* implicit */int) arr_91 [i_26] [i_21] [i_19] [i_19] [i_17 + 2] [i_17 + 2]))));
                            var_46 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((long long int) var_2)))))));
                        }
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        arr_104 [i_17] [i_18] [i_18] [i_27] = ((/* implicit */unsigned long long int) (((~(0U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)31)))))));
                        var_47 = ((/* implicit */_Bool) (((!(arr_99 [i_17 + 1] [i_18] [i_17 + 1] [i_27]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (short)-4266)) : (((/* implicit */int) arr_85 [i_17 - 1] [i_17] [i_18] [i_17 - 1] [i_27])))))))) : (((/* implicit */int) max(((short)0), (arr_85 [i_17 - 1] [i_17] [i_17 - 1] [i_17 + 2] [i_17]))))));
                    }
                    var_48 = (!(((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_6))))));
                    var_49 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)125))))));
                }
            } 
        } 
    } 
}
