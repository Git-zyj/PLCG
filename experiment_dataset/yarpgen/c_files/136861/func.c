/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136861
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((max((max((((/* implicit */int) (unsigned short)65535)), (15872))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (arr_2 [i_0]) : (arr_5 [(short)2]))))), (((/* implicit */int) (!(max((arr_3 [i_0] [i_1 + 2]), (arr_1 [(_Bool)1] [i_1 + 1])))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_16 = ((((/* implicit */int) arr_1 [i_0] [i_3])) >= (arr_5 [i_0]));
                                arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1]))));
                            }
                            var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1))));
                            var_18 = (~(((((/* implicit */int) arr_8 [i_2] [i_1 + 2] [i_2])) - (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) arr_12 [i_0] [i_5]);
                    var_20 = ((/* implicit */int) max(((!(arr_3 [i_0] [i_5]))), ((!(arr_3 [i_0] [i_0])))));
                    var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) (((((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))) + (2147483647))) << (((((max((arr_5 [4]), (arr_7 [i_1 + 2]))) + (1430872752))) - (13))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (~((-(((arr_3 [i_6] [i_6]) ? (((/* implicit */int) arr_4 [i_1] [i_6] [i_7])) : (arr_5 [i_0])))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_1 - 1] [i_1 - 1] [i_5] [i_7])), (max((arr_18 [i_7] [i_6] [i_1] [i_0]), (((/* implicit */long long int) arr_1 [i_7] [i_1]))))))) ? (max((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((~(((/* implicit */int) (signed char)86)))))) : (((((/* implicit */_Bool) arr_6 [i_5] [i_1] [i_0])) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_5])))) : (((/* implicit */int) max((arr_6 [i_0] [i_1] [i_5]), (((/* implicit */signed char) arr_10 [i_0] [i_1] [i_5] [i_6]))))))))))));
                                arr_22 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned short) max(((+(max((((/* implicit */int) arr_13 [i_0])), (1726308617))))), (((((/* implicit */int) arr_11 [i_0] [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_7])) | (((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1]))))));
                                arr_23 [i_0] [i_0] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_6 [i_1 + 1] [i_1 + 2] [i_1 + 2])))));
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                {
                    var_24 *= ((/* implicit */unsigned short) (+(((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1 - 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 + 2])) ? (arr_12 [i_1] [i_1]) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 + 2]))));
                        arr_32 [i_0] = ((/* implicit */unsigned short) ((((arr_26 [i_1]) ? (((/* implicit */int) arr_16 [i_8] [i_8] [i_1])) : (arr_21 [i_0] [i_1 + 1] [i_8]))) <= (((/* implicit */int) arr_25 [i_0] [i_1 - 1] [i_8] [i_8]))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                {
                    var_25 ^= ((/* implicit */long long int) ((max((max((((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_10] [i_10])), (arr_5 [(unsigned short)10]))), (arr_17 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1 + 2]))));
                    var_26 = ((/* implicit */int) max((arr_24 [i_0] [i_1 + 1] [i_1 + 2]), (max((arr_24 [i_10] [i_1 + 2] [i_1 + 1]), (arr_24 [i_0] [i_1 - 1] [i_1 - 1])))));
                }
                arr_35 [i_0] = max((((/* implicit */int) max((arr_24 [i_1 + 1] [i_1 - 1] [i_1]), (((/* implicit */short) arr_30 [i_1] [i_0] [i_0] [i_1 - 1] [i_1] [i_1 + 1]))))), ((-(((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 2] [i_1 + 1])))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (short i_13 = 3; i_13 < 17; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_11] [i_11] [2LL] [i_11]))))) ? (arr_43 [i_11] [i_12 + 1] [i_12 + 1] [i_13 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                            var_29 = ((/* implicit */long long int) arr_45 [i_11] [i_11] [i_11] [i_11] [i_11]);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_13 - 1])) ? (((/* implicit */int) arr_39 [i_13 + 1])) : (((/* implicit */int) arr_36 [i_12 + 1] [i_13 - 3]))));
                            arr_49 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_13 - 2])) ? (arr_38 [i_11]) : (arr_38 [i_13 + 1])));
                        }
                    } 
                } 
            } 
            var_31 *= ((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_11] [i_12 + 1] [i_12 + 1] [i_11] [i_12 + 1])) + (((/* implicit */int) arr_45 [i_11] [i_12 + 1] [i_11] [i_12] [i_11]))));
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_12 + 1] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */long long int) ((int) arr_42 [i_11] [i_11] [i_11]))) : (((long long int) arr_41 [i_11] [i_11] [i_11] [i_11])))))));
            var_33 = ((/* implicit */_Bool) arr_48 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1]);
        }
        var_34 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_36 [i_11] [i_11]), (arr_36 [i_11] [i_11])))) / (((/* implicit */int) arr_36 [i_11] [i_11]))));
        arr_50 [i_11] [i_11] = ((/* implicit */short) max(((+(((/* implicit */int) (_Bool)1)))), (685498667)));
        arr_51 [i_11] = ((/* implicit */int) ((_Bool) ((_Bool) (+(arr_37 [i_11] [i_11])))));
    }
    for (int i_16 = 3; i_16 < 12; i_16 += 3) 
    {
        var_35 = ((/* implicit */long long int) max(((-(arr_19 [i_16 - 3] [i_16] [i_16 - 2] [i_16 - 3]))), (((/* implicit */int) ((_Bool) arr_19 [i_16 - 3] [i_16 - 1] [i_16 - 3] [i_16 + 1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_17 = 3; i_17 < 13; i_17 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_18 = 2; i_18 < 13; i_18 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    var_36 = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_16 + 1] [i_18 - 2] [i_18]))));
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (((_Bool)1) ? (-685498666) : (((/* implicit */int) (_Bool)1)))))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_16] [i_17 - 2])) ? (((/* implicit */int) (!(arr_3 [i_19] [i_20])))) : (((((/* implicit */_Bool) arr_48 [i_20] [i_19] [i_18] [i_17] [i_16])) ? (((/* implicit */int) arr_54 [i_20])) : (((/* implicit */int) arr_25 [(unsigned short)0] [i_17] [i_18] [i_17])))))))));
                        arr_64 [i_17] [i_17] [i_18] [i_19] [i_16] = (+(((/* implicit */int) arr_58 [i_17] [i_17] [i_17])));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_39 = ((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_17 + 1] [i_16 - 3]))));
                        arr_67 [i_17] [i_17] [i_18 + 1] [i_19] [i_21] = ((/* implicit */signed char) ((((/* implicit */int) arr_62 [i_17] [i_18] [i_18 - 2] [i_18 - 2] [i_17] [i_18 - 2] [i_18 + 1])) ^ ((((_Bool)0) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (signed char)-63))))));
                    }
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        arr_71 [i_16 - 3] [i_17 - 3] [i_16 - 3] [i_18] [i_17] [i_17] [i_22] = ((signed char) (~(((/* implicit */int) arr_26 [i_16]))));
                        var_40 += ((/* implicit */_Bool) ((signed char) arr_69 [i_19] [i_18] [i_18 - 2] [i_18 - 2] [i_17]));
                        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)47))));
                        arr_72 [i_17] = ((/* implicit */short) (+(((arr_46 [i_22 - 1] [i_17] [i_17] [i_16]) ? (((/* implicit */int) arr_11 [i_16] [i_17 - 1] [i_18] [i_19] [i_17 - 1] [i_22 - 1])) : (((/* implicit */int) arr_44 [i_16] [i_17]))))));
                    }
                }
                for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
                {
                    var_42 *= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_16] [i_16] [i_23]))))) > ((~(((/* implicit */int) (unsigned short)37405)))));
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_43 += ((/* implicit */long long int) ((int) arr_60 [i_16 - 2] [i_16 - 3] [i_23]));
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (((+(arr_7 [i_23]))) / ((~(((/* implicit */int) arr_3 [i_24] [i_23])))))))));
                        var_45 = ((/* implicit */_Bool) arr_15 [i_17 - 3] [i_18]);
                        var_46 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_16 - 1] [i_18 + 1] [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) arr_27 [i_16 - 2] [i_18 - 1] [i_24] [i_24])) : (((/* implicit */int) arr_34 [i_16] [i_17 - 2] [i_16 + 1] [i_23]))));
                    }
                }
                arr_79 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */short) (+(((/* implicit */int) arr_70 [i_18 + 1] [i_18 + 1]))));
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    for (int i_26 = 0; i_26 < 14; i_26 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_17] [i_25]))))) ? (((/* implicit */int) arr_28 [i_17 + 1] [i_16 - 1] [i_18 - 2] [i_25])) : ((~(arr_38 [i_26])))));
                            arr_86 [i_26] [i_25] [i_17] [i_17] [i_16 - 1] [i_16 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (880746391) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (_Bool)1)) : (-15872))) : ((+(((/* implicit */int) (short)24415))))));
                            var_48 = ((/* implicit */short) (~(((/* implicit */int) arr_74 [i_16 - 1] [i_16] [i_17] [i_16 - 1] [i_16 - 2] [i_16 - 3]))));
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28130)))))));
                        }
                    } 
                } 
                var_50 += ((/* implicit */long long int) ((short) arr_39 [i_16]));
            }
            /* LoopNest 3 */
            for (unsigned short i_27 = 0; i_27 < 14; i_27 += 1) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        {
                            var_51 += arr_4 [i_17] [i_27] [i_28];
                            var_52 = ((/* implicit */_Bool) ((((_Bool) arr_61 [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_60 [i_17 + 1] [i_17 - 3] [i_17])) : (((arr_44 [i_27] [i_27]) ? (((/* implicit */int) arr_83 [i_16] [i_16 + 1] [i_17] [i_16] [i_16] [i_16])) : (arr_81 [i_17])))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_30 = 3; i_30 < 13; i_30 += 2) /* same iter space */
        {
            var_53 ^= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_39 [i_16 - 2]))))));
            arr_97 [i_30] = ((/* implicit */signed char) max((((((/* implicit */int) min((arr_65 [i_16] [i_30] [i_30] [i_30] [i_30]), (((/* implicit */short) arr_90 [i_16] [i_30]))))) - ((+(((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */int) arr_1 [i_30] [i_30 - 2])) != (((/* implicit */int) arr_89 [i_16 - 1] [i_30] [i_30 - 3] [i_30])))) ? (max((arr_7 [i_30 - 2]), (((/* implicit */int) arr_73 [i_16 - 3] [i_16] [i_30] [i_30 - 2] [i_30] [i_30])))) : (((/* implicit */int) min((arr_40 [i_16] [i_16]), (arr_45 [i_16] [i_16] [i_16] [i_30] [i_30]))))))));
        }
        for (long long int i_31 = 3; i_31 < 13; i_31 += 2) /* same iter space */
        {
            var_54 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_36 [i_31 + 1] [i_16 - 1])) ? (((/* implicit */int) arr_36 [i_31 - 1] [i_16 - 2])) : (((/* implicit */int) arr_36 [i_31 - 3] [i_16 - 3])))), (((((/* implicit */_Bool) arr_36 [i_31 - 2] [i_16 - 2])) ? (((/* implicit */int) arr_36 [i_31 - 3] [i_16 + 2])) : (((/* implicit */int) arr_36 [i_31 + 1] [i_16 - 2]))))));
            var_55 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_0 [i_16]), (arr_53 [i_31 - 3])))), (max((arr_2 [i_16]), (arr_7 [i_16]))))))));
            arr_101 [i_31] [i_31 + 1] = min((((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_16 - 1] [i_31 + 1] [i_16 - 3])), (arr_76 [i_31 - 3] [i_31 - 3] [i_31 - 1] [i_31 + 1] [i_31] [i_31 + 1] [i_31])))) ? (min((arr_18 [i_16] [i_16] [i_16] [i_16]), (arr_68 [i_31 - 3] [i_31] [i_31 - 2] [i_16 - 2] [i_16 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_94 [i_16] [i_16] [i_16] [i_16 + 1] [i_31] [i_31 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_41 [i_16] [i_16 + 1] [i_31 + 1] [i_31 - 2]), (((/* implicit */signed char) arr_47 [i_16 - 3] [i_16 + 2] [i_16] [i_31] [i_16]))))) ? ((~(arr_81 [i_31]))) : (((arr_19 [i_16 - 3] [i_16 - 1] [i_31] [i_31 - 2]) << (((((/* implicit */int) arr_36 [i_16] [i_16])) - (22561)))))))));
            var_56 = ((/* implicit */unsigned short) (-(((arr_13 [i_16 - 2]) ? (((/* implicit */int) arr_42 [i_31 - 1] [i_16 + 1] [i_31])) : (((/* implicit */int) arr_13 [i_16 - 1]))))));
        }
        /* LoopNest 2 */
        for (short i_32 = 1; i_32 < 13; i_32 += 1) 
        {
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                {
                    var_57 = ((/* implicit */int) arr_70 [i_16 - 3] [i_16 - 2]);
                    arr_106 [i_32] [i_32 - 1] [i_33] = (~(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_37 [i_32] [i_33])))), ((!(((/* implicit */_Bool) arr_27 [i_32] [i_32] [i_33] [i_16 - 3]))))))));
                    var_58 ^= ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), ((+((+(((/* implicit */int) (signed char)57))))))));
                }
            } 
        } 
        arr_107 [i_16] [i_16 - 2] = ((max((((/* implicit */long long int) max((arr_4 [i_16] [i_16] [i_16]), (arr_1 [(_Bool)1] [i_16])))), (((arr_18 [i_16] [i_16 - 1] [i_16 - 1] [i_16]) / (arr_37 [i_16 - 2] [i_16]))))) << ((((~(((/* implicit */int) (_Bool)1)))) + (19))));
    }
}
