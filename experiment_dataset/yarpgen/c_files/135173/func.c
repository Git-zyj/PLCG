/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135173
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_5)))))))));
    var_21 = ((/* implicit */_Bool) min(((signed char)36), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-23641)))))));
    var_22 = max(((~(((/* implicit */int) (unsigned short)32256)))), (max(((-(((/* implicit */int) var_19)))), ((+(((/* implicit */int) var_14)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) (+((+(min((arr_1 [i_0]), (var_11)))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_4 [4] [4] = ((/* implicit */unsigned char) (-(max(((+(((/* implicit */int) var_0)))), ((+(var_15)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2])))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] [14] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_19))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_17))));
                    arr_10 [10U] |= ((/* implicit */long long int) (~((+(arr_1 [i_0])))));
                }
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_26 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_4]))))));
                    arr_13 [0ULL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_6);
                }
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */int) (+((~(arr_11 [i_0] [i_0] [i_0])))));
                            arr_18 [i_6] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */int) arr_15 [5U] [i_1] [i_2 - 3] [i_5]);
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) var_13);
            }
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                var_28 |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max(((unsigned short)60782), (((/* implicit */unsigned short) (short)20547)))))))));
                /* LoopSeq 4 */
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    arr_25 [i_7] [i_8] = (~(min(((~(arr_5 [i_0] [i_1] [i_0] [i_8]))), ((~(var_2))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)22326), ((unsigned short)33301)))))))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7))))));
                    }
                    for (int i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        arr_32 [i_0] [i_1] [i_7] [i_7] [i_10] = ((/* implicit */int) max((min((var_11), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [(signed char)12] [i_1]))))))), (min(((-(arr_1 [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16)))))))));
                        var_30 = ((/* implicit */unsigned short) (+(max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (~(max((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), ((~(arr_21 [i_8]))))))))));
                        arr_33 [11LL] [(unsigned char)0] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2)))))))));
                        arr_34 [i_0] [i_1] [(unsigned short)14] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(var_17)))), (min((var_11), (((/* implicit */unsigned long long int) arr_5 [i_10 + 2] [i_8] [i_1] [7ULL])))))))));
                    }
                    for (unsigned int i_11 = 3; i_11 < 14; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_11]))));
                        arr_39 [i_7] [i_0] [i_11 - 2] &= ((/* implicit */unsigned char) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), ((~(((/* implicit */int) var_14))))))));
                        arr_40 [i_0] [i_1] [i_11] [i_8] [i_8] [(unsigned char)8] [i_8] = min(((-(((/* implicit */int) arr_15 [i_0] [i_7] [i_8] [4])))), ((~(((/* implicit */int) (signed char)-86)))));
                    }
                }
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    arr_44 [i_0] [i_1] [i_7] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                    var_33 ^= ((/* implicit */unsigned short) (+((-(arr_8 [i_0] [i_7] [i_12])))));
                }
                for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        arr_50 [i_1] [i_1] [i_14] [i_7] [i_14] = ((/* implicit */unsigned long long int) arr_45 [i_1] [i_7] [i_13] [i_14]);
                        var_34 = ((/* implicit */signed char) (+((-((~(arr_37 [i_0] [i_14] [i_7] [i_13] [i_14])))))));
                        var_35 = min(((~((~(((/* implicit */int) var_5)))))), ((~(min((var_6), (var_2))))));
                    }
                    for (int i_15 = 3; i_15 < 12; i_15 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(var_3)))), (min((((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_1] [i_13] [i_15 + 2])))), ((+(arr_42 [i_0]))))))))));
                        arr_54 [7] [i_1] [10ULL] = ((/* implicit */int) (~(min(((~(var_3))), (max((var_3), (arr_16 [i_0] [i_0] [i_13] [i_0] [i_1] [i_1] [i_0])))))));
                        arr_55 [10] [i_0] [i_1] [i_7] [(signed char)3] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_38 [i_1] [8LL] [i_0] [i_1]))))))), ((+((~(var_15)))))));
                    }
                    for (int i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        var_37 ^= var_11;
                        var_38 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) (~(arr_8 [i_7] [i_1] [i_0])))), ((-(arr_11 [i_0] [i_0] [i_0])))))));
                        arr_58 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) min((arr_17 [i_0] [i_0] [i_1] [i_7] [i_13] [i_13] [i_16]), (arr_22 [(signed char)4])));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]))))), (max((var_3), (((/* implicit */long long int) arr_45 [i_0] [i_0] [i_16] [7ULL])))))))))));
                    }
                    var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) var_8))));
                    var_41 = ((/* implicit */signed char) max((var_41), (var_9)));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) min((var_2), (var_1))))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) var_9))));
                        var_44 *= ((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1] [i_1] [i_17]), (max((((/* implicit */int) var_12)), (arr_60 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_45 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)32237))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
                    {
                        arr_63 [i_13] [i_13] [i_13] = ((/* implicit */signed char) max((((/* implicit */int) min((min((var_4), (((/* implicit */unsigned char) arr_56 [i_7] [i_1] [i_7] [i_13] [i_18] [i_18])))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14)))))))), (arr_5 [i_18] [i_13] [i_7] [(signed char)6])));
                        arr_64 [i_0] [i_0] [i_0] [12ULL] [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_16)), (arr_26 [i_0] [13ULL] [i_13]))))));
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) var_8))));
                    }
                }
                for (unsigned char i_19 = 3; i_19 < 13; i_19 += 3) 
                {
                    var_47 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_61 [i_0] [i_0] [i_1] [i_0] [i_19] [i_0]))));
                    arr_67 [i_0] [i_1] [i_7] [(unsigned char)2] [i_19 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) var_6)), (arr_43 [i_0] [i_1]))))))));
                    var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (~((+(min((((/* implicit */long long int) var_12)), (arr_16 [i_1] [i_7] [i_7] [i_7] [i_1] [i_0] [i_0]))))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 3; i_21 < 13; i_21 += 3) 
                    {
                        {
                            arr_72 [i_0] [i_0] [i_0] [i_20] [i_0] = ((/* implicit */unsigned short) arr_8 [1ULL] [8ULL] [i_21]);
                            var_49 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                            arr_73 [i_21] [i_21] [i_21] [i_20] [i_7] [i_1] [i_0] = (-(((/* implicit */int) var_5)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_22 = 1; i_22 < 14; i_22 += 2) 
                {
                    for (unsigned long long int i_23 = 1; i_23 < 14; i_23 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_7]))));
                            arr_80 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0] = ((/* implicit */signed char) (~(var_18)));
                            arr_81 [i_23 - 1] [i_23] [i_23] [i_23 - 1] [i_23] [i_23 - 1] [(unsigned char)6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_66 [i_0] [10] [10]))))), (max((min((arr_46 [i_0] [0ULL] [i_7] [i_22]), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (+(var_17))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 3) 
            {
                var_51 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 1; i_25 < 14; i_25 += 3) 
                {
                    for (unsigned char i_26 = 2; i_26 < 11; i_26 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) (~((~(var_6))))))));
                            var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_51 [6] [i_0] [i_1] [i_24] [(_Bool)1] [(_Bool)1] [i_26])))))))));
                        }
                    } 
                } 
            }
        }
        for (int i_27 = 0; i_27 < 15; i_27 += 2) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned short) (~(min(((~(((/* implicit */int) var_13)))), ((+(((/* implicit */int) (unsigned short)4722))))))));
            /* LoopSeq 1 */
            for (long long int i_28 = 2; i_28 < 13; i_28 += 3) 
            {
                var_55 = ((/* implicit */short) var_8);
                /* LoopSeq 2 */
                for (signed char i_29 = 1; i_29 < 14; i_29 += 2) /* same iter space */
                {
                    arr_98 [i_0] = ((/* implicit */unsigned short) (-((+(arr_14 [13] [i_27] [i_28 + 2] [i_27])))));
                    var_56 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-20547))));
                }
                /* vectorizable */
                for (signed char i_30 = 1; i_30 < 14; i_30 += 2) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)20562)))))));
                    arr_102 [i_30] [i_30 - 1] [i_30 - 1] [i_30] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    /* LoopSeq 2 */
                    for (signed char i_31 = 0; i_31 < 15; i_31 += 3) 
                    {
                        var_58 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                        arr_106 [i_0] [i_27] [i_28 - 2] [i_30 + 1] = ((/* implicit */short) (-(((/* implicit */int) var_12))));
                        var_59 += ((/* implicit */short) (+((~(var_3)))));
                        var_60 ^= (~(((/* implicit */int) var_14)));
                    }
                    for (unsigned char i_32 = 1; i_32 < 13; i_32 += 3) 
                    {
                        var_61 &= ((/* implicit */unsigned char) (~(var_11)));
                        arr_109 [(unsigned char)6] [i_27] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_33 = 0; i_33 < 15; i_33 += 3) 
                {
                    for (short i_34 = 0; i_34 < 15; i_34 += 2) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned char)244), (((/* implicit */unsigned char) (signed char)-29)))))));
                            arr_115 [i_0] [i_0] [i_0] [i_0] [(signed char)10] = max((min(((-(((/* implicit */int) arr_79 [i_27] [(unsigned char)12] [5LL] [5LL])))), (((/* implicit */int) arr_71 [i_0] [i_0] [i_28])))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))));
                            var_63 += ((/* implicit */unsigned short) arr_70 [i_0] [i_27] [i_34] [i_27] [i_34] [i_33] [i_33]);
                            var_64 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_19)))))));
                        }
                    } 
                } 
                var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_19)))), (((/* implicit */int) var_4)))))));
            }
        }
        for (int i_35 = 0; i_35 < 15; i_35 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_36 = 0; i_36 < 15; i_36 += 3) 
            {
                for (long long int i_37 = 1; i_37 < 11; i_37 += 3) 
                {
                    {
                        arr_122 [i_37] [i_36] [i_36] = ((/* implicit */int) (-(9223372036854775807LL)));
                        var_66 ^= ((/* implicit */unsigned char) min(((~(min((((/* implicit */long long int) var_19)), (arr_88 [(unsigned char)3] [(unsigned char)3] [i_36]))))), (((/* implicit */long long int) arr_62 [3ULL] [3ULL] [i_36] [i_37] [i_37]))));
                    }
                } 
            } 
            arr_123 [i_0] = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (var_0)));
            var_67 = ((/* implicit */_Bool) min(((unsigned short)36215), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
            /* LoopNest 2 */
            for (long long int i_38 = 1; i_38 < 14; i_38 += 3) 
            {
                for (long long int i_39 = 2; i_39 < 13; i_39 += 3) 
                {
                    {
                        arr_129 [i_35] [i_38] [i_35] = ((/* implicit */int) min((max((arr_53 [(unsigned short)7] [i_35] [i_35] [i_35] [i_39 - 2]), (((/* implicit */long long int) (-(((/* implicit */int) arr_103 [i_0] [i_0] [i_38] [i_38] [i_38]))))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)60784))))), ((~(var_18)))))));
                        arr_130 [i_0] [i_38] [i_0] [i_35] = ((/* implicit */unsigned char) min(((~((-(arr_116 [i_38] [i_35] [13]))))), (((/* implicit */unsigned long long int) arr_93 [(unsigned char)5] [i_39]))));
                        /* LoopSeq 1 */
                        for (short i_40 = 3; i_40 < 13; i_40 += 2) 
                        {
                            arr_135 [i_0] [i_0] [i_0] [i_0] [i_0] [i_38] = ((/* implicit */int) var_19);
                            var_68 *= ((/* implicit */unsigned long long int) var_18);
                        }
                        var_69 = ((/* implicit */short) var_18);
                    }
                } 
            } 
            arr_136 [i_0] [i_35] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_112 [i_35] [i_35] [i_35] [(unsigned char)9] [0LL] [i_0]))))))));
        }
        for (signed char i_41 = 0; i_41 < 15; i_41 += 3) 
        {
            arr_140 [i_41] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))), ((-(arr_87 [(signed char)2] [i_41] [i_41] [(short)7] [i_0] [i_41])))))));
            arr_141 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_12))));
            var_70 = ((/* implicit */unsigned char) var_2);
        }
        arr_142 [i_0] = ((/* implicit */unsigned short) min(((~((+(arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) max((min((((/* implicit */unsigned char) var_19)), (var_5))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_42 = 0; i_42 < 15; i_42 += 3) 
        {
            var_71 -= ((/* implicit */unsigned long long int) arr_69 [i_0] [i_42] [(unsigned char)13] [i_42] [i_42] [i_42]);
            arr_145 [i_42] [i_42] = ((/* implicit */signed char) var_1);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_43 = 0; i_43 < 15; i_43 += 2) 
            {
                arr_148 [i_0] [i_42] [i_42] [(unsigned short)6] = ((/* implicit */_Bool) (+((+(var_11)))));
                /* LoopNest 2 */
                for (int i_44 = 0; i_44 < 15; i_44 += 2) 
                {
                    for (unsigned long long int i_45 = 0; i_45 < 15; i_45 += 3) 
                    {
                        {
                            arr_153 [i_0] [i_42] [i_42] [i_44] [i_45] = ((/* implicit */int) (~(arr_121 [i_0] [i_44] [9U])));
                            var_72 = ((/* implicit */long long int) max((var_72), (((/* implicit */long long int) (~((~(((/* implicit */int) var_13)))))))));
                            var_73 = ((/* implicit */unsigned long long int) min((var_73), (((/* implicit */unsigned long long int) var_8))));
                        }
                    } 
                } 
                var_74 = ((/* implicit */signed char) max((var_74), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
            }
            var_75 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((arr_37 [i_0] [i_42] [i_42] [i_42] [i_42]), (((/* implicit */int) arr_71 [i_0] [i_0] [(signed char)14])))))))));
        }
    }
    for (unsigned char i_46 = 0; i_46 < 15; i_46 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_47 = 3; i_47 < 11; i_47 += 3) 
        {
            for (unsigned long long int i_48 = 0; i_48 < 15; i_48 += 2) 
            {
                for (unsigned long long int i_49 = 1; i_49 < 13; i_49 += 3) 
                {
                    {
                        var_76 = ((/* implicit */signed char) var_1);
                        var_77 = (~((~(arr_37 [i_46] [i_48] [(unsigned short)6] [i_48] [i_49]))));
                        arr_167 [i_49 + 2] = ((/* implicit */int) (+(min(((~(arr_116 [i_46] [i_46] [i_48]))), (((/* implicit */unsigned long long int) min((arr_101 [i_46] [13ULL] [i_46] [(unsigned char)4] [i_46] [i_46]), (((/* implicit */unsigned char) var_7)))))))));
                    }
                } 
            } 
        } 
        var_78 -= var_8;
        arr_168 [i_46] = ((/* implicit */short) min((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))))), (arr_24 [i_46] [i_46] [i_46] [i_46]))), (((/* implicit */unsigned char) arr_157 [i_46] [i_46]))));
    }
}
