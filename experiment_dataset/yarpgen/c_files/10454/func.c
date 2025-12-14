/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10454
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_0))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_2 + 1] [i_2 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) var_5);
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((arr_7 [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0]))))));
                    }
                    arr_11 [i_0] [i_0] [i_0] [i_1] = arr_1 [i_1] [i_1];
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [i_4 + 1]);
        /* LoopSeq 2 */
        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])), ((-((~(((/* implicit */int) arr_14 [i_4]))))))));
            arr_18 [i_4] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */int) arr_1 [i_5 - 2] [i_5 - 2])), ((~(((/* implicit */int) (unsigned char)21)))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_13 [4U] [i_5]))))));
            var_15 = max((((/* implicit */unsigned int) var_0)), (((unsigned int) arr_5 [i_5 - 3] [i_5 - 2] [i_5 - 1] [i_5 - 2])));
        }
        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 2) /* same iter space */
        {
            var_16 = min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_6] [i_4]))))), (arr_21 [i_4] [i_6]));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_17 &= arr_7 [i_4] [i_8];
                    var_18 += ((/* implicit */_Bool) ((unsigned char) min((max((((/* implicit */unsigned int) (_Bool)0)), (arr_22 [i_4] [i_4 + 1] [i_4 + 1] [i_4]))), (((/* implicit */unsigned int) arr_12 [(_Bool)1] [(_Bool)1])))));
                    var_19 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(4294967295U)))) ? (max((arr_17 [i_4] [i_4]), (((/* implicit */unsigned int) arr_20 [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                    arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((max((min((arr_21 [i_4] [i_6 - 1]), (((/* implicit */unsigned int) arr_23 [i_8] [i_6])))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (var_1)))))), (((/* implicit */unsigned int) max((arr_8 [i_4] [i_6 - 3] [i_6 - 1] [i_6 - 2] [i_6 - 2]), (arr_3 [i_4 + 1]))))));
                    var_20 = ((/* implicit */unsigned char) max((arr_17 [i_4] [i_6]), (((/* implicit */unsigned int) ((_Bool) arr_12 [i_4] [i_4])))));
                }
                arr_29 [i_4] [i_4] [i_4] = min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)218));
                arr_30 [i_4] [i_4] [i_7] = ((/* implicit */_Bool) min((max((((/* implicit */int) ((_Bool) (_Bool)0))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_7])) : (((/* implicit */int) arr_15 [i_4] [i_6] [i_6])))))), (max((((/* implicit */int) arr_12 [i_4] [i_4])), ((~(((/* implicit */int) arr_23 [i_7] [i_6]))))))));
            }
        }
        var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned int) 32767U)))))));
    }
    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 3) 
    {
        arr_34 [i_9] [i_9] = var_9;
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) var_3);
        var_22 = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
        {
            var_23 = var_0;
            /* LoopSeq 4 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
            {
                arr_44 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_39 [i_10])))) ? ((-(arr_39 [i_10]))) : (((((/* implicit */_Bool) arr_39 [i_11])) ? (arr_39 [i_10]) : (arr_39 [i_10])))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 2; i_14 < 15; i_14 += 1) 
                    {
                        {
                            var_24 *= (~(((unsigned int) arr_49 [i_12] [i_14] [i_14 - 1] [i_14] [i_14 - 2] [i_14])));
                            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? ((~(((/* implicit */int) arr_0 [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_15 = 2; i_15 < 12; i_15 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((max((arr_38 [i_11] [i_15]), (((_Bool) arr_40 [(_Bool)0])))), (((_Bool) (+(((/* implicit */int) arr_8 [(unsigned char)14] [(unsigned char)14] [i_12] [i_12] [i_12]))))))))));
                    var_27 = (-(((max((((/* implicit */unsigned int) arr_46 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])), (8388607U))) / (min((((/* implicit */unsigned int) arr_4 [i_11] [i_11] [i_11])), (arr_36 [i_15] [i_15]))))));
                    var_28 ^= ((/* implicit */_Bool) max((max((arr_47 [i_15] [i_15] [i_15 - 2] [i_15 + 3]), (((/* implicit */unsigned int) arr_8 [(unsigned char)14] [i_15] [i_15 - 1] [i_15 - 1] [i_15 + 2])))), (((/* implicit */unsigned int) ((unsigned char) arr_41 [i_10] [i_15 + 3] [i_12] [i_11])))));
                    arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_8 [i_11] [i_11] [i_15] [i_15] [i_15 + 4])) - (((/* implicit */int) arr_4 [i_11] [i_11] [i_10]))))));
                }
            }
            for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)246))))) && (((_Bool) arr_38 [i_17] [i_11]))));
                    arr_60 [i_10] [i_10] [i_11] = min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) (_Bool)1)));
                    var_30 = max((max((max((arr_39 [i_10]), (((/* implicit */unsigned int) arr_5 [i_10] [i_11] [i_16] [i_17])))), (arr_47 [i_17] [i_16] [i_11] [i_10]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_11]))))));
                    var_31 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((arr_40 [i_11]), (((/* implicit */unsigned int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_51 [i_11] [i_16] [i_16] [i_11] [i_11])))) : (((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)14)))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)23)) && ((_Bool)0))))))));
                }
                var_32 ^= ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_45 [0U] [i_11] [i_11]))))));
                /* LoopSeq 2 */
                for (unsigned char i_18 = 1; i_18 < 13; i_18 += 2) 
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((unsigned int) arr_62 [i_18] [i_18] [i_18] [i_18 + 3])))));
                    var_34 = ((/* implicit */_Bool) arr_0 [i_18]);
                    var_35 = min(((!(((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_11])))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_16] [i_18]))))))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) var_5))));
                }
                for (unsigned int i_19 = 3; i_19 < 13; i_19 += 1) 
                {
                    arr_67 [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)24)))), (((/* implicit */int) ((unsigned char) max((arr_63 [i_10] [i_19] [i_19] [i_19] [i_11]), (var_8)))))));
                    var_37 *= arr_8 [8U] [i_11] [i_11] [i_16] [i_19];
                    arr_68 [i_11] [i_11] = ((/* implicit */_Bool) max((max((arr_4 [i_11] [i_11] [i_19 - 1]), (arr_4 [i_11] [i_11] [i_19 + 2]))), (min((arr_63 [i_10] [i_11] [i_11] [i_19 + 1] [i_11]), (arr_4 [i_11] [i_11] [i_19 - 3])))));
                    arr_69 [i_10] [(unsigned char)4] [i_16] [i_19 - 3] &= ((/* implicit */unsigned char) max((min((((((/* implicit */int) arr_0 [i_11])) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_65 [0U] [i_16] [i_11] [0U])) * (((/* implicit */int) arr_57 [i_10] [i_10] [i_10] [i_10] [i_10])))))), (((/* implicit */int) arr_38 [i_10] [i_10]))));
                }
                arr_70 [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) arr_56 [i_10] [i_10] [i_10] [i_10]);
                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((arr_53 [i_10] [i_10] [i_11]) >> (((arr_36 [i_11] [i_11]) - (3328423216U))))), (((/* implicit */unsigned int) (unsigned char)18)))))));
            }
            for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 32767U))));
                var_40 = ((/* implicit */_Bool) min((var_40), ((((!(((/* implicit */_Bool) arr_65 [(unsigned char)10] [i_11] [i_20] [i_10])))) || (((/* implicit */_Bool) max(((+(((/* implicit */int) arr_5 [i_20] [i_11] [i_11] [i_10])))), (((/* implicit */int) (!(var_7)))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_21 = 1; i_21 < 15; i_21 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 2; i_22 < 13; i_22 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned char) max(((_Bool)1), (arr_38 [i_20] [i_20])));
                        var_42 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_54 [i_10])))))), (max((var_8), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (arr_74 [i_20] [i_11] [i_20]))))))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        arr_83 [i_23] [i_11] [i_21] [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (16U))))));
                        arr_84 [i_23] [i_11] [i_20] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) ((unsigned char) arr_65 [i_11] [i_21 - 1] [i_21 - 1] [i_21]));
                    }
                    arr_85 [i_10] [i_11] [i_10] [i_10] [i_10] = (!(((/* implicit */_Bool) (+(arr_76 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 1; i_24 < 13; i_24 += 1) 
                    {
                        var_43 = arr_3 [i_21 - 1];
                        arr_90 [i_10] [i_10] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_48 [i_11])))));
                    }
                }
                for (unsigned char i_25 = 1; i_25 < 15; i_25 += 1) /* same iter space */
                {
                    arr_95 [i_25] [i_20] [i_11] [i_10] [i_10] = max((arr_3 [i_25 - 1]), (((_Bool) arr_51 [i_11] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 - 1])));
                    var_44 = ((unsigned char) (unsigned char)115);
                }
            }
            for (unsigned int i_26 = 1; i_26 < 14; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 16; i_27 += 1) 
                {
                    for (unsigned char i_28 = 1; i_28 < 15; i_28 += 3) 
                    {
                        {
                            arr_104 [i_11] = var_0;
                            arr_105 [i_10] [i_11] [i_11] [i_27] [i_28] [i_27] [i_28] = ((/* implicit */_Bool) min((((unsigned int) max(((_Bool)1), ((_Bool)1)))), (((unsigned int) arr_81 [i_28] [i_28] [i_27] [i_26] [i_11] [i_10]))));
                        }
                    } 
                } 
                arr_106 [i_10] [i_10] [i_11] [i_10] = ((unsigned int) (+(((/* implicit */int) ((unsigned char) arr_53 [i_11] [i_11] [i_11])))));
                /* LoopSeq 2 */
                for (unsigned int i_29 = 0; i_29 < 16; i_29 += 4) 
                {
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) arr_39 [i_26 + 2]))));
                    arr_109 [i_11] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_4 [i_11] [i_26] [i_26 - 1])))));
                    var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                }
                for (unsigned int i_30 = 2; i_30 < 13; i_30 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_31 = 1; i_31 < 14; i_31 += 3) 
                    {
                        arr_117 [i_11] = ((/* implicit */unsigned char) ((unsigned int) ((arr_103 [i_10] [i_10] [i_11] [i_30] [i_31] [i_10]) ? (((/* implicit */int) ((unsigned char) arr_116 [i_11] [i_11]))) : (((((/* implicit */_Bool) 4253824356U)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1)))))));
                        var_47 = ((/* implicit */unsigned int) arr_43 [i_11] [i_26] [i_30] [i_31]);
                        arr_118 [i_10] [i_11] [i_11] [i_11] [i_10] [i_10] [i_26] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        arr_119 [i_11] [i_10] [i_11] [i_10] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_78 [i_26 + 1] [i_26 + 1] [i_26 + 1]))));
                    }
                    for (unsigned int i_32 = 4; i_32 < 13; i_32 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((unsigned int) min((arr_99 [i_10] [i_26 + 1] [i_10] [i_30 + 3]), (arr_99 [i_10] [i_26 + 2] [i_26] [i_30 + 2])))))));
                        var_49 *= ((/* implicit */unsigned char) max((arr_86 [i_32 - 1] [i_32 + 3] [i_32 - 2] [(_Bool)1] [i_32 + 3] [i_32 + 3]), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_93 [i_32] [i_10] [i_26 - 1] [i_11] [i_10] [i_10])) || (arr_54 [i_10])))))));
                        var_50 &= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_107 [4U]))))));
                    }
                    arr_122 [i_10] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned char)241), ((unsigned char)26))))));
                }
                var_51 = ((((((/* implicit */_Bool) arr_36 [i_26 + 1] [i_26 + 1])) ? (arr_36 [i_26 + 1] [i_26 + 1]) : (arr_36 [i_26 + 2] [i_26 + 1]))) + (((/* implicit */unsigned int) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
            }
            arr_123 [i_11] = ((((max((arr_89 [i_11] [i_10] [i_10]), (arr_5 [i_10] [i_11] [i_10] [i_11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((~(arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_78 [i_11] [i_11] [i_11])))));
        }
        for (unsigned char i_33 = 0; i_33 < 16; i_33 += 1) /* same iter space */
        {
            arr_126 [i_33] = ((unsigned char) max((((/* implicit */unsigned char) (_Bool)1)), (min(((unsigned char)199), ((unsigned char)246)))));
            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((arr_41 [i_33] [i_33] [i_33] [i_33]) * (((unsigned int) arr_5 [i_10] [i_10] [i_10] [i_10])))))));
            var_53 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_116 [i_33] [i_33])))), ((+(((/* implicit */int) var_3))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_94 [i_34] [i_10]))));
            var_55 = ((unsigned int) arr_43 [i_10] [i_34] [i_10] [i_10]);
        }
        for (unsigned int i_35 = 0; i_35 < 16; i_35 += 1) 
        {
            arr_133 [i_10] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_38 [i_10] [i_35])), ((-(((/* implicit */int) ((unsigned char) arr_73 [i_10] [i_10] [i_10])))))));
            arr_134 [i_10] = ((/* implicit */unsigned int) arr_81 [i_10] [i_10] [i_35] [i_35] [i_35] [i_10]);
        }
        arr_135 [i_10] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))));
        arr_136 [i_10] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_101 [i_10] [i_10] [i_10] [i_10])))), ((~(((/* implicit */int) arr_1 [i_10] [i_10]))))));
    }
}
