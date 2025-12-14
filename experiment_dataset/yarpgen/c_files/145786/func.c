/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145786
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5601)) ? (((((/* implicit */_Bool) (short)-16296)) ? (((((/* implicit */_Bool) 2212270298396363114LL)) ? (((/* implicit */int) (short)-16296)) : (((/* implicit */int) (short)16283)))) : (((((/* implicit */_Bool) 3200019708248382819ULL)) ? (((/* implicit */int) (short)-16292)) : (-733835602))))) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 4; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((_Bool) ((signed char) arr_9 [i_4])))));
                                var_13 |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_12 [i_4] [i_4 - 2] [i_4] [i_4] [i_4])))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) 4196507586110917022LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5961687578503432488ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (7465618743662145398ULL))))));
                                var_14 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63463))) >= (((((/* implicit */_Bool) arr_2 [(unsigned char)15] [(unsigned char)15])) ? (var_2) : (((/* implicit */long long int) var_0)))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [15])) ? (max((((/* implicit */unsigned long long int) (short)-16269)), (arr_6 [i_4 + 1] [8ULL] [8ULL] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [10U])))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)16296)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(short)12] = ((/* implicit */unsigned short) (short)-13048);
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_18 [(unsigned char)10] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [(_Bool)1] [i_5]))))) && (((((/* implicit */_Bool) arr_5 [i_5] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))));
                    arr_19 [7ULL] [i_1] [i_5] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_5] [i_5] [(short)3]);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) 2630167728U)) || (((/* implicit */_Bool) (unsigned short)2069))));
                        arr_23 [i_0] [i_0] [i_6] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_6])) && (((/* implicit */_Bool) arr_4 [i_5]))))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5] [i_6])) ? (((/* implicit */int) arr_20 [10U] [i_1] [i_6] [i_0])) : (((/* implicit */int) (short)-542))))))) ? (((/* implicit */int) arr_15 [i_0])) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 1664799567U))))), (((((/* implicit */_Bool) arr_7 [12ULL] [i_0] [11ULL])) ? (((/* implicit */int) (unsigned char)185)) : (arr_1 [i_5])))))));
                        arr_24 [(_Bool)1] [9] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 524032ULL)) || ((!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */int) ((long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            arr_31 [i_0] [i_0] [i_0] [(unsigned short)0] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3306910104U)) ? (arr_28 [i_0] [i_1] [i_1] [i_7] [i_8] [i_0] [i_8]) : (arr_28 [0U] [i_1] [0U] [i_7] [i_7] [i_1] [i_5])));
                            arr_32 [i_7] [(signed char)12] [i_5] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0])));
                            arr_33 [i_0] [11] [i_0] [4LL] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 2630167728U)) && (((/* implicit */_Bool) (short)32767)))) && (((/* implicit */_Bool) (unsigned char)0))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)-24544))));
                            var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_36 [(unsigned short)2] [i_1] [i_5] [5] [i_7]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3823))))))));
                            arr_38 [i_0] [i_0] [8ULL] [i_0] [(signed char)8] [9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_7] [i_9])) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) ((signed char) 7342988466388344303ULL)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_10] [i_0] [i_0] [(signed char)8])) && (((/* implicit */_Bool) (short)-10383)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [(unsigned short)9]))))) : (1487366864U)));
                            var_20 -= ((/* implicit */long long int) arr_10 [i_1] [i_1]);
                        }
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            arr_43 [i_0] [i_1] [11] [i_0] [(unsigned char)2] [i_11] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7662674171164080687ULL)) || (((/* implicit */_Bool) arr_26 [i_11] [i_1] [(short)14] [i_5] [i_7] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_5] [i_5] [i_7] [i_5]))))) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_11] [i_7] [i_11] [i_0] [i_0]))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) ((((/* implicit */long long int) 1585202985U)) >= (5951482455667719013LL)))) : (((/* implicit */int) arr_3 [i_0])))))));
                        }
                        arr_44 [i_0] [i_0] [i_0] [(_Bool)0] [i_0] = ((/* implicit */unsigned short) var_5);
                    }
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        arr_47 [i_0] [12U] [i_0] [6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_45 [i_0] [i_0] [i_5]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) arr_12 [i_12] [i_5] [i_5] [i_1] [i_0])) : ((~(((/* implicit */int) arr_46 [i_0] [11LL] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
                        arr_48 [i_12] [13] = ((/* implicit */signed char) arr_29 [15LL] [i_1]);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-2549))))), (1664799567U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(short)13])))));
                        arr_49 [i_0] [i_1] [i_5] [i_5] [i_12] [i_12] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_12] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0])))));
                        arr_50 [i_12] [i_1] [i_5] [i_5] [i_5] [12U] = ((/* implicit */long long int) (~((~(((var_6) << (((arr_1 [(_Bool)1]) - (1767274959)))))))));
                    }
                }
                arr_51 [i_1] [i_1] = ((/* implicit */short) ((arr_40 [i_1] [(_Bool)1] [(signed char)5] [14LL] [14LL] [(signed char)5] [i_1]) || (((/* implicit */_Bool) ((((_Bool) arr_46 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59871)) || (((/* implicit */_Bool) -2080054810))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_40 [i_0] [i_0] [i_0] [i_0] [(signed char)7] [i_0] [4U])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
    {
        for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_7 [i_13] [i_14] [15LL]))))))));
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) min((arr_2 [i_14] [15ULL]), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [(short)4] [i_15])) ? (arr_1 [i_15]) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) arr_21 [i_13] [i_13] [i_13] [i_13])))))));
                    arr_59 [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 8709788460437648813LL)) && (((/* implicit */_Bool) 291193590387677734ULL)))) ? (3179899004361159189LL) : (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_46 [9U] [i_14] [i_14] [i_15])), (1664799554U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_13] [i_14] [i_14] [i_13] [i_15] [i_15])) >= (((/* implicit */int) arr_27 [i_13] [i_13] [(unsigned short)5] [i_14] [i_13] [0ULL] [(unsigned short)15]))))))))));
                }
                for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_17 = 1; i_17 < 11; i_17 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (arr_63 [i_17] [i_17] [i_17 + 3] [(_Bool)1] [(unsigned char)4]) : (arr_1 [i_14])))) && (((/* implicit */_Bool) arr_10 [i_13] [i_17 + 4]))));
                        var_26 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)16300)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) var_1)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 1; i_19 < 14; i_19 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) arr_34 [i_18] [i_14] [15LL] [i_16] [i_19] [i_19]);
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((long long int) (unsigned short)51356)))))))));
                                arr_71 [(_Bool)1] [i_14] [i_16] [9LL] [(_Bool)1] = ((/* implicit */long long int) (unsigned short)11686);
                                arr_72 [i_16] [i_14] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)13))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_61 [(unsigned short)14])) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1664799567U)) ? (var_0) : (((/* implicit */int) arr_61 [i_16])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        for (int i_21 = 1; i_21 < 11; i_21 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) (((((_Bool)1) || (((/* implicit */_Bool) ((short) arr_2 [i_16] [i_20]))))) ? (arr_26 [i_13] [i_13] [i_14] [i_16] [i_20] [i_21]) : (((/* implicit */int) ((signed char) arr_37 [(unsigned char)4] [i_21] [i_21 - 1] [i_21 + 4] [i_21] [i_21 - 1])))));
                                arr_79 [(unsigned short)0] [i_14] = ((/* implicit */short) var_0);
                                var_31 = ((/* implicit */long long int) arr_36 [i_13] [i_13] [(unsigned short)5] [15] [i_21]);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_3 [i_14]))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((signed char) (_Bool)1)))));
}
