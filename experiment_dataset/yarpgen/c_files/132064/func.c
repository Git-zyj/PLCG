/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132064
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
    var_19 -= ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_14))))) ^ (min((var_2), (((/* implicit */long long int) (signed char)-16)))))) / (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)56160))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) + (var_10)))) ? (min((((/* implicit */long long int) var_7)), (arr_7 [i_0] [i_1] [i_2] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_2] [i_3] [i_4])) ^ (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_9))));
                                arr_17 [i_2] [i_1] [i_1] [i_1] [i_1] = arr_5 [i_1] [i_1] [i_2];
                                arr_18 [i_0] [i_0] [i_2] [i_2] [i_0] [(signed char)19] = ((/* implicit */short) arr_6 [i_2] [i_1]);
                                arr_19 [i_2] [i_0] [i_1] [i_2] [i_3] [i_4] = (+(min((((/* implicit */unsigned long long int) (signed char)-16)), (18446744073709551615ULL))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) & (-10567789)))) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2])))));
                    var_20 -= ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1171059941147981367LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27619))) : (0LL)))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) ((signed char) (signed char)-2)))));
                                arr_28 [i_0] [i_2] [i_2] [i_5] [i_6] = ((((/* implicit */_Bool) ((min((var_5), (var_3))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] [i_5])) & (((/* implicit */int) (short)32756)))))))) ? (((unsigned long long int) ((unsigned char) var_6))) : (((/* implicit */unsigned long long int) min(((+(arr_8 [i_0] [(unsigned char)1] [i_2] [i_5]))), (((/* implicit */unsigned int) ((unsigned short) arr_26 [i_0] [i_1] [i_6 - 1] [i_6 - 1] [i_1] [i_5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)508))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_1))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 8; i_12 += 3) 
            {
                for (signed char i_13 = 3; i_13 < 6; i_13 += 2) 
                {
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned int) arr_21 [i_10] [i_11] [i_12] [i_12 - 2] [i_13 - 1])))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_10] [i_12 - 1] [i_13 - 1] [i_13])) ? (arr_4 [i_10] [i_12 - 1] [i_13 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [i_12 - 1] [i_13 - 1] [i_13 + 1])))));
                        var_26 &= ((/* implicit */long long int) (~(arr_8 [i_13 + 4] [i_11] [i_12 + 1] [i_13 + 2])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned short) arr_29 [i_10] [i_10] [i_11]);
                        var_28 ^= ((/* implicit */_Bool) (~(arr_4 [i_11] [i_14] [i_15])));
                        var_29 |= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) / (402653184U));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_17] [i_10])) ? (((/* implicit */int) arr_33 [i_11] [i_16])) : (((/* implicit */int) arr_33 [i_10] [i_17]))));
                        var_31 = ((/* implicit */unsigned char) ((arr_24 [(_Bool)1] [i_11]) - (((/* implicit */unsigned int) ((((/* implicit */int) (short)-27620)) - (((/* implicit */int) arr_11 [i_17] [i_11] [i_11] [i_10] [i_10])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((var_5) ^ (((/* implicit */long long int) arr_9 [i_10] [i_18] [i_19] [i_20] [i_19] [i_19 + 1]))))));
                        /* LoopSeq 3 */
                        for (short i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            arr_63 [i_19] [i_18] [i_19] [i_21] = ((/* implicit */unsigned short) ((unsigned long long int) arr_13 [i_19 + 1] [i_19] [i_19 + 1] [i_19] [i_21]));
                            var_33 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_50 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_21] [i_19 + 1] [i_10])))))));
                        }
                        for (unsigned short i_22 = 4; i_22 < 9; i_22 += 1) 
                        {
                            var_34 = ((/* implicit */int) (unsigned short)65529);
                            arr_66 [(_Bool)1] [i_19] [i_18] [i_19 + 1] [8] [i_20] [(unsigned short)7] = ((/* implicit */unsigned int) ((long long int) 267386880U));
                            var_35 ^= ((/* implicit */unsigned short) arr_5 [i_19 + 1] [i_19] [i_19]);
                        }
                        for (unsigned int i_23 = 0; i_23 < 10; i_23 += 3) 
                        {
                            var_36 = ((/* implicit */signed char) arr_26 [i_10] [i_18] [i_19] [i_19] [i_20] [(unsigned short)3]);
                            arr_70 [i_19] [i_19] [i_19] [i_20] [i_23] [i_18] = ((/* implicit */long long int) ((unsigned long long int) var_5));
                            var_37 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)20249)) ? (arr_13 [i_10] [i_18] [i_19] [i_19] [i_23]) : (((/* implicit */long long int) 2147418112))))));
                            var_38 *= ((/* implicit */_Bool) (+(var_12)));
                        }
                        arr_71 [i_20] [i_19] [i_19] [i_10] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_7)) ? (arr_40 [i_20] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15524))))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((arr_26 [i_18] [i_18] [i_10] [i_10] [i_10] [i_10]) / (arr_26 [i_10] [i_18] [i_18] [i_18] [i_10] [i_10]))))));
            var_40 |= ((/* implicit */signed char) (-(arr_30 [i_10])));
            var_41 = ((/* implicit */_Bool) ((arr_9 [i_10] [i_10] [i_10] [i_18] [i_18] [i_18]) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3U))))));
            /* LoopSeq 2 */
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                var_42 = ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) -10567789)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (short)-27619)))) : (((/* implicit */int) (signed char)-82)));
                var_43 = ((/* implicit */short) ((long long int) arr_7 [i_10] [i_18] [i_24] [i_18]));
                /* LoopNest 2 */
                for (short i_25 = 4; i_25 < 9; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_80 [i_10] [i_26] [i_24] [i_10] [i_26] = ((/* implicit */short) ((unsigned short) ((unsigned long long int) var_0)));
                            var_44 *= 0LL;
                            var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_26] [i_25 - 2] [i_24 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 1; i_27 < 8; i_27 += 4) 
                {
                    for (long long int i_28 = 3; i_28 < 8; i_28 += 4) 
                    {
                        {
                            arr_88 [i_10] = ((/* implicit */int) arr_72 [i_27] [i_18] [i_27 + 1] [i_24 + 1]);
                            arr_89 [i_10] [i_18] [i_24] [i_27] [i_27] [i_28] = ((/* implicit */long long int) var_15);
                            var_46 = ((/* implicit */unsigned int) (unsigned short)65534);
                        }
                    } 
                } 
            }
            for (signed char i_29 = 3; i_29 < 8; i_29 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 10; i_30 += 2) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 1) 
                    {
                        {
                            arr_99 [i_10] [i_10] [i_29] [i_29] [i_31] = ((/* implicit */_Bool) var_12);
                            arr_100 [i_10] [0U] [i_29] [i_29] [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) ((long long int) -4876481962466981115LL)))));
                            var_47 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_67 [i_29 - 3])) - (((/* implicit */int) arr_67 [i_29 - 3]))));
                        }
                    } 
                } 
                var_48 = ((_Bool) arr_14 [i_29] [i_29 + 2] [i_29 - 3] [i_29 + 2] [i_29 + 2]);
                var_49 = ((/* implicit */unsigned long long int) arr_96 [i_29] [i_29] [i_29 - 3] [i_29 + 1] [i_29] [i_29] [i_18]);
            }
        }
    }
    for (long long int i_32 = 1; i_32 < 19; i_32 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_33 = 1; i_33 < 18; i_33 += 4) 
        {
            for (long long int i_34 = 2; i_34 < 19; i_34 += 2) 
            {
                for (unsigned int i_35 = 0; i_35 < 20; i_35 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_36 = 0; i_36 < 20; i_36 += 4) 
                        {
                            arr_117 [i_36] [i_33] [i_34] [i_34 + 1] [i_33] [i_32] = ((/* implicit */int) arr_24 [i_32] [(signed char)14]);
                            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (_Bool)1)), (var_5))), (((/* implicit */long long int) arr_0 [i_32 - 1]))))) ? (min((0), (((/* implicit */int) (short)27618)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_105 [i_33])) || (((/* implicit */_Bool) arr_105 [i_33])))))));
                            var_51 = ((/* implicit */long long int) arr_9 [14ULL] [i_36] [i_35] [i_34 - 1] [i_33] [i_32]);
                            var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_26 [17ULL] [i_33] [i_33] [i_35] [i_36] [i_34 + 1]), ((((_Bool)0) ? (((/* implicit */int) (short)-27620)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) -965390618)) : ((+(((((/* implicit */long long int) 3391043184U)) ^ (-6173641586586981559LL))))))))));
                            var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_111 [i_34] [i_32 - 1] [i_34 - 2] [i_35]), (((/* implicit */unsigned int) (unsigned char)0))))) ? (((((/* implicit */unsigned long long int) arr_24 [i_32 - 1] [i_33 - 1])) / (arr_112 [i_36] [i_36] [i_33 - 1] [i_36]))) : (((/* implicit */unsigned long long int) arr_111 [i_34] [i_32 + 1] [i_34 + 1] [i_35])))))));
                        }
                        for (unsigned short i_37 = 2; i_37 < 19; i_37 += 4) 
                        {
                            arr_121 [i_33] = ((/* implicit */signed char) (_Bool)0);
                            var_54 = ((/* implicit */unsigned long long int) min((var_54), (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */long long int) var_4)) / (arr_115 [18ULL] [i_33] [i_34 - 1] [i_34] [6ULL] [i_35] [i_37])))))) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) 4294967290U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) : (((((/* implicit */_Bool) var_10)) ? (1369553669U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))))));
                        }
                        for (unsigned int i_38 = 0; i_38 < 20; i_38 += 2) 
                        {
                            var_55 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24))))), ((+(((/* implicit */int) arr_107 [i_33] [(short)16] [i_38] [(short)16]))))));
                            var_56 = ((/* implicit */_Bool) arr_116 [i_32] [i_33] [8]);
                        }
                        for (unsigned int i_39 = 0; i_39 < 20; i_39 += 2) 
                        {
                            var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)14793))) / (arr_13 [i_32 - 1] [i_34] [i_33] [i_34] [i_39]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))))));
                            var_58 = ((/* implicit */_Bool) ((short) (unsigned short)1));
                            var_59 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_110 [i_32 + 1] [i_33] [i_34] [i_34] [i_35] [i_39]))));
                        }
                        arr_128 [i_35] [i_33] [2U] [i_33] [(_Bool)1] = var_17;
                        arr_129 [i_32] [i_33] [i_33] [i_35] = arr_115 [i_32] [i_32] [i_34 - 1] [i_35] [(unsigned char)19] [i_32] [i_32];
                        var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))) ^ (arr_13 [i_35] [i_35] [i_33] [i_35] [i_32]))))));
                    }
                } 
            } 
        } 
        var_61 = ((/* implicit */unsigned char) max((var_61), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [16ULL] [i_32 + 1] [i_32] [i_32 + 1] [16ULL]))) ^ (var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-32320)))))))))))));
    }
}
