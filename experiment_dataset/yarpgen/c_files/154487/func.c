/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154487
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1] [i_3])) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 559828075U)) ? (((/* implicit */int) (short)11416)) : (((/* implicit */int) arr_2 [i_3]))))) || (((/* implicit */_Bool) (short)-23657)))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned long long int) (((+(((/* implicit */int) var_10)))) >= (((((/* implicit */_Bool) -322810294)) ? (((/* implicit */int) (signed char)100)) : (1559562317)))))))));
                                var_18 = arr_8 [i_0] [i_1 - 3] [0LL] [0LL];
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) arr_1 [i_0] [i_0]);
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) var_12);
                    var_21 -= ((short) min((((787155789U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [16LL] [i_0] [i_0] [i_1] [(short)1] [i_5 + 1]))))), (((/* implicit */unsigned int) arr_2 [i_0]))));
                    arr_14 [i_0] = ((/* implicit */int) arr_12 [i_5 + 3] [15U]);
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_19 [i_6] [i_0] [i_1] [i_0] [i_6] = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_0] [i_6]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_22 = arr_16 [i_0] [(short)13] [i_6] [(signed char)15];
                            var_23 &= ((/* implicit */unsigned long long int) var_2);
                        }
                        for (unsigned short i_8 = 3; i_8 < 15; i_8 += 1) 
                        {
                            arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_13 [(_Bool)1] [i_6] [i_8 + 2]))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((((/* implicit */_Bool) 1559562317)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_14)))))))));
                            var_24 = ((/* implicit */int) ((unsigned char) (~(((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (888542342667302731ULL))))));
                            var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_5] [i_5] [i_6] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25509))) | (var_9))) : (((/* implicit */unsigned long long int) ((unsigned int) -322810315))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -746481116065352436LL)) && (((/* implicit */_Bool) var_13))))) > (((((/* implicit */_Bool) arr_24 [i_0] [i_5] [13LL] [i_5] [i_8] [i_1])) ? (arr_26 [(signed char)0] [i_1] [(unsigned short)2] [i_1] [(signed char)7]) : (((/* implicit */int) arr_20 [i_6] [(unsigned char)14] [(signed char)1] [i_0])))))))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 14; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_18 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_5] [i_5] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_6] [i_6]) - (((/* implicit */int) arr_22 [i_0] [(unsigned char)9] [i_5] [(unsigned short)6] [i_9 + 1]))))) || (((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_6] [i_6])))))));
                            arr_32 [i_6] [i_1] [i_5 + 1] [i_6] [i_6] = ((/* implicit */signed char) ((short) 105071610248022352ULL));
                            var_27 = ((/* implicit */int) ((var_11) + (((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 4] [i_5] [i_5]))));
                        }
                        for (long long int i_10 = 1; i_10 < 13; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */int) (~(2967064984388086381LL)));
                            arr_35 [i_6] [12ULL] [i_6] [i_6] [i_10] = ((/* implicit */signed char) ((18341672463461529263ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22311)))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_9)))) ? (((((/* implicit */int) arr_22 [i_6] [i_6] [i_5] [i_6] [i_10])) % (((/* implicit */int) (signed char)-31)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -431655898)))))))) ? (min((arr_16 [i_0] [i_0] [i_5] [i_6]), (arr_16 [8U] [i_1 - 1] [i_5] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_10] [i_0] [i_1 - 1] [i_0])))))))));
                            arr_36 [i_0] [i_0] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_1] [i_5 + 2] [i_5 + 2] [i_10])))) : (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (arr_1 [i_5] [i_10 + 3]))), (((((/* implicit */int) var_10)) & (((/* implicit */int) arr_34 [i_10]))))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            arr_40 [i_11] [i_6] [i_5 - 1] [i_6] [16ULL] [i_1] [(short)2] = (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [11U])))));
                            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (var_8))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_5] [i_6]))));
                            arr_41 [(signed char)8] [(signed char)8] [i_0] [i_5] [i_11] |= ((/* implicit */signed char) arr_9 [i_5 + 3] [i_1 - 1] [i_1 - 1] [i_1 - 3]);
                            arr_42 [i_6] [i_1] [i_5] [3LL] [i_11] = (short)-6484;
                        }
                        for (short i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) ((((arr_17 [i_6] [i_12]) >> (((/* implicit */int) var_14)))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -2104944205)), (1131936769U))))));
                            var_32 ^= ((/* implicit */unsigned char) max((-933649984384947124LL), (((/* implicit */long long int) (short)-22312))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_24 [i_12] [4LL] [i_5] [i_1] [i_1] [i_0]))));
                            arr_45 [i_6] [i_5] [i_1] [i_6] = ((/* implicit */short) ((int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_5 + 2])) : (arr_1 [i_1] [i_6])))));
                        }
                        /* vectorizable */
                        for (short i_13 = 2; i_13 < 16; i_13 += 4) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((unsigned long long int) arr_25 [i_13] [i_0] [i_5] [i_5] [i_1 - 1] [i_0])) >> (((arr_44 [i_13] [i_6] [i_5] [i_1] [i_1] [(unsigned char)3]) - (4814301629449887841LL)))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_17 [i_13] [i_5]))));
                            var_36 = arr_49 [i_1];
                        }
                        var_37 = ((/* implicit */_Bool) ((arr_44 [i_1] [i_1] [i_5 + 1] [i_6] [i_6] [i_1 - 4]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_49 [i_1])) >= (((322810293) - (((/* implicit */int) var_3))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_15 = 1; i_15 < 16; i_15 += 4) 
                        {
                            var_38 ^= ((/* implicit */unsigned char) 3524834191U);
                            var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_34 [i_0]))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((int) arr_39 [i_0] [12U] [i_0] [i_0] [i_0] [i_0])))));
                            arr_57 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) arr_12 [(short)0] [10]);
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_31 [15U] [i_14] [i_5] [i_1 + 1] [i_1 - 4] [i_0]))) ? (arr_17 [i_16] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [7LL]))))))));
                            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-63))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_53 [i_0] [i_1] [i_1] [i_5 + 1] [i_14] [i_16]))))) : (5548380367638242705ULL)));
                        }
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29693))) == (3001561709U)));
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((unsigned int) var_12))) : (arr_46 [i_0] [(unsigned short)12] [14LL] [i_17])));
                        }
                        arr_60 [i_14] [i_1] [i_1] [i_0] = ((unsigned long long int) arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 9112691157264805216ULL)) || (((/* implicit */_Bool) ((unsigned char) -1355554900)))))) < (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 322810293)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_19] [i_18] [i_5 + 1] [i_1] [(signed char)1]))))))))))));
                                var_46 = ((/* implicit */unsigned char) arr_24 [i_0] [i_1] [i_5] [i_18] [i_19] [i_19]);
                                arr_67 [i_1 - 1] [i_1 - 1] [i_18] [i_5] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16131163016449792290ULL)) ? (arr_56 [(short)11] [i_1] [i_5] [i_18] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_1] [i_5] [i_19]), (((/* implicit */unsigned char) arr_5 [i_19] [i_18]))))))))) : ((-(((((/* implicit */_Bool) var_14)) ? (arr_9 [(unsigned char)14] [i_1 - 4] [16U] [i_18]) : (((/* implicit */unsigned long long int) arr_7 [i_1]))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_20 = 4; i_20 < 16; i_20 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        for (unsigned int i_22 = 4; i_22 < 16; i_22 += 4) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) arr_31 [i_0] [i_1] [i_20] [i_21] [i_21] [i_21]))));
                                var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((arr_53 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_21] [i_22 - 3]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-22332)) && (((/* implicit */_Bool) var_0)))))) : (arr_56 [i_22 - 4] [i_1 - 3] [i_1] [i_1] [i_1]))))));
                                var_49 = ((/* implicit */unsigned int) arr_44 [i_0] [i_1] [i_0] [i_21] [(unsigned short)4] [i_0]);
                                var_50 = ((/* implicit */signed char) ((((arr_23 [i_22 - 2] [(unsigned short)12] [i_20] [i_21] [i_21]) << (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) - (239))))) | (((/* implicit */int) arr_0 [i_0] [i_22 - 2]))));
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (short)-19830)) : (((/* implicit */int) arr_29 [i_20] [i_0] [i_0])))));
                    arr_76 [i_0] = ((/* implicit */unsigned short) arr_66 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_20 + 1]);
                }
                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) 165799253773415719ULL)) ? (((/* implicit */unsigned long long int) -322810309)) : (7059819294883732138ULL))))));
            }
        } 
    } 
    var_53 = (short)-22311;
    var_54 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
}
