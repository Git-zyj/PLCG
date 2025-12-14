/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183025
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
    var_19 = ((/* implicit */int) var_4);
    var_20 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) var_3)))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 660304407681290495ULL)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (short)-1))));
                            var_22 = ((/* implicit */short) var_6);
                            var_23 = ((/* implicit */short) arr_7 [i_3] [i_3] [i_2]);
                            var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_7), (var_15)))) ? (var_11) : (var_18)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(((/* implicit */int) min((var_12), (var_12)))))))));
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (((((/* implicit */_Bool) var_1)) ? (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))))))))));
                var_27 = ((/* implicit */unsigned short) var_7);
            }
            for (int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_28 += max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) var_5)))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    var_29 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_31 -= ((/* implicit */long long int) (-(arr_5 [i_7] [i_7] [i_7])));
                    var_32 = max((((/* implicit */unsigned int) max((var_1), (min((var_2), (((/* implicit */int) var_12))))))), (max(((+(var_18))), (((/* implicit */unsigned int) var_13)))));
                    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                }
                for (long long int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    arr_25 [i_5] = ((/* implicit */unsigned int) (~((~(arr_5 [i_0] [i_8 + 1] [i_5])))));
                    arr_26 [i_8 - 2] [i_1] [i_5] [i_5] [i_5] [i_8] |= ((/* implicit */long long int) var_3);
                }
                arr_27 [i_0] [i_1] [i_5] = ((/* implicit */short) (+(1065051279)));
            }
            var_34 = ((/* implicit */int) var_11);
        }
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
        {
            arr_30 [i_0] [i_9] [i_0] = ((/* implicit */int) var_14);
            var_35 = (-(((/* implicit */int) var_8)));
            var_36 -= ((/* implicit */long long int) min(((short)1), ((short)-5)));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_9]))) : (var_15)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3317977705096070479ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_13 [i_0] [i_9] [i_0] [i_0] [i_9] [i_9])) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) (~(var_10)))))) : (((/* implicit */long long int) (~(var_15))))));
        }
        var_38 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0]) : ((+(((/* implicit */int) var_8))))))), (var_7)));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    {
                        arr_41 [i_0] [i_10] [i_11] [i_0] = ((/* implicit */unsigned int) var_9);
                        var_39 += ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_10] [i_11] [i_12] [i_12] [i_11])) ? (min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_11)) : (arr_17 [i_0] [i_0] [i_10] [i_10] [i_11] [i_12]))), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) var_16))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_12] [i_12] [i_11]))) : (var_7))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_0] [i_12]))))))))));
                        arr_42 [i_11] [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) var_0);
                        arr_43 [i_0] [i_0] [i_10] [i_11] [i_12] = ((/* implicit */short) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) arr_33 [i_11])) ? ((+(var_7))) : (min((((/* implicit */unsigned int) var_9)), (var_14)))))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */signed char) var_4);
    }
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned short) min((max((var_4), (((/* implicit */unsigned long long int) arr_45 [i_13])))), (((/* implicit */unsigned long long int) (-(var_0))))));
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_42 = ((/* implicit */short) max((min((var_15), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14)))))));
            var_43 = ((/* implicit */unsigned char) (-(var_7)));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_44 = ((/* implicit */unsigned long long int) (~((+(var_11)))));
            var_45 = ((/* implicit */unsigned short) var_10);
            var_46 = ((/* implicit */unsigned long long int) var_3);
            var_47 = ((/* implicit */int) var_15);
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_50 [i_13] [i_13] [i_13])) ? ((+(var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) arr_51 [i_15])))))));
        }
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                {
                    arr_62 [i_13] [i_17] = ((/* implicit */long long int) arr_57 [i_13] [i_16]);
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) arr_66 [i_13] [i_13] [i_13] [i_13] [i_13]))));
                                arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) max((max((var_6), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_14))));
                                var_50 = var_4;
                                var_51 = ((/* implicit */unsigned short) min((1313115111), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (-1313115111)))));
                            }
                        } 
                    } 
                    var_52 = var_1;
                    /* LoopSeq 3 */
                    for (short i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        var_53 |= ((/* implicit */unsigned int) arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
                        arr_74 [i_13] [i_16] [i_17] [i_16] = var_14;
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_22 = 1; i_22 < 24; i_22 += 4) /* same iter space */
                        {
                            arr_81 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) max((1313115110), (1313115105)));
                            arr_82 [i_13] [i_13] = ((/* implicit */long long int) (-(max((max((((/* implicit */unsigned int) var_10)), (var_18))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_17] [i_17] [i_17]))) : (var_14)))))));
                            var_54 = ((/* implicit */unsigned char) var_4);
                        }
                        for (short i_23 = 1; i_23 < 24; i_23 += 4) /* same iter space */
                        {
                            var_55 = ((/* implicit */unsigned short) arr_68 [i_13] [i_23 + 1] [i_17] [i_21] [i_17] [i_17] [i_16]);
                            var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) arr_75 [i_13] [i_16] [i_16] [i_17] [i_21] [i_23]))));
                            var_57 = (~(max((((/* implicit */unsigned int) arr_68 [i_23] [i_23] [i_23 + 1] [i_23 - 1] [i_23] [i_23 + 1] [i_23])), (var_11))));
                            var_58 &= ((/* implicit */unsigned char) (+(min((var_7), (min((var_15), (var_16)))))));
                        }
                        var_59 = ((/* implicit */unsigned long long int) ((var_5) ? (arr_44 [i_21]) : (var_18)));
                        arr_86 [i_16] [i_16] = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 1 */
                        for (unsigned short i_24 = 0; i_24 < 25; i_24 += 4) 
                        {
                            arr_91 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)17694))))));
                            var_60 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)241))));
                        }
                    }
                    for (int i_25 = 0; i_25 < 25; i_25 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_26 = 0; i_26 < 25; i_26 += 2) 
                        {
                            var_61 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) arr_50 [i_16] [i_17] [i_26])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                            arr_99 [i_16] [i_16] [i_17] [i_25] [i_26] [i_26] |= ((/* implicit */signed char) min(((~(((/* implicit */int) var_3)))), (var_2)));
                            var_62 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_55 [i_13] [i_16] [i_17]), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_1)) : (var_14)))) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_83 [i_17] [i_17]))))) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (var_10) : (((/* implicit */int) arr_85 [i_13] [i_13] [i_16] [i_17] [i_17] [i_25] [i_26]))))))))));
                        }
                        for (short i_27 = 0; i_27 < 25; i_27 += 2) /* same iter space */
                        {
                            var_63 &= ((/* implicit */int) max((max((((/* implicit */long long int) var_3)), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1313115111)) ? (((/* implicit */int) (unsigned short)55420)) : (-1313115118))))));
                            arr_103 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) (+((+(((((/* implicit */_Bool) var_13)) ? (var_15) : (var_18)))))));
                            var_64 = var_11;
                            arr_104 [i_13] [i_16] [i_17] [i_25] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_16] [i_25]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1313115117)) ? (1313115111) : (((/* implicit */int) (unsigned short)38085)))))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_50 [i_16] [i_17] [i_25])) : (arr_79 [i_13] [i_16] [i_17] [i_25] [i_27])))) : (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */long long int) var_1))))))));
                        }
                        for (short i_28 = 0; i_28 < 25; i_28 += 2) /* same iter space */
                        {
                            arr_107 [i_28] [i_25] [i_17] = ((/* implicit */unsigned long long int) arr_95 [i_25] [i_17] [i_16] [i_13]);
                            var_65 = min((((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_45 [i_13])), (var_1)))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1ULL)))) ? (((/* implicit */int) var_3)) : (var_10)))));
                            var_66 = ((/* implicit */int) max((var_66), (max((max((-1917659054), (((/* implicit */int) (short)26228)))), ((~(((/* implicit */int) arr_76 [i_13] [i_16] [i_17] [i_25]))))))));
                        }
                        var_67 &= ((/* implicit */signed char) (-(max(((~(((/* implicit */int) (short)-26229)))), (((/* implicit */int) var_12))))));
                    }
                }
            } 
        } 
    }
}
