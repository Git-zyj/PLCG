/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157839
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) (_Bool)0);
                            arr_8 [i_0 + 1] [i_0 - 1] [i_1] [i_1] [(signed char)4] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : ((-(749564769119708003ULL)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 1534487231U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            arr_16 [i_4] [(signed char)21] [(_Bool)1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_16)) ? (((((/* implicit */unsigned long long int) var_0)) + (var_13))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_15)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19092)) && ((_Bool)1))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 24; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 -= min((max((((/* implicit */long long int) (+(((/* implicit */int) (short)19092))))), (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_19 [i_4] [i_4] [i_4] [i_4])), (var_9))) << (((/* implicit */int) (!((_Bool)1))))))));
                        var_20 = ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (signed char)108)));
                        var_21 = ((/* implicit */signed char) var_9);
                        arr_24 [i_4] [i_5] [i_6 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (short)-19090)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)12288))) / (-7213467283504202908LL))) : (((((/* implicit */_Bool) arr_22 [i_4] [i_5])) ? (9223372036787666944LL) : (arr_22 [i_4] [i_5])))));
                        arr_25 [i_4] [i_4] [i_4] &= ((/* implicit */long long int) (((~(((((/* implicit */int) (short)-17249)) - (var_12))))) & (((/* implicit */int) (!((!(var_6))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            arr_28 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (short)10692))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                for (int i_10 = 1; i_10 < 23; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            arr_35 [i_4] [i_4] [i_8] [i_4] [(signed char)22] [i_4] [i_11] = ((/* implicit */unsigned long long int) ((int) var_8));
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_12 = 4; i_12 < 23; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    var_23 ^= ((/* implicit */signed char) (+(var_5)));
                    arr_40 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_33 [i_4] [i_8] [i_12 - 2] [i_13] [(signed char)4]))));
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)19081))));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        arr_44 [i_4] [i_8] [i_12 - 4] [i_13] [i_14] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_16)))) ? (arr_43 [i_4] [i_8] [i_12 + 1] [i_13] [i_14] [1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_12] [7])))));
                        arr_45 [20] [i_8] [i_12] [i_12] [i_14] = ((/* implicit */short) 499166551U);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (arr_30 [i_4] [i_8])))));
                        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) ((long long int) (short)9)))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(signed char)24] [i_12])) || (((/* implicit */_Bool) arr_10 [i_12 - 2]))));
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) var_10);
                        arr_49 [i_15] = ((/* implicit */unsigned int) var_11);
                    }
                    for (short i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [(_Bool)1] [i_12 - 1] [i_12 - 4] [i_13]))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_11) : (((/* implicit */long long int) (+(((/* implicit */int) (short)13539))))))))));
                        var_31 = ((/* implicit */long long int) (-(17448980311117403836ULL)));
                        arr_54 [i_8] = ((/* implicit */signed char) arr_53 [i_16] [i_12 - 3] [i_12 - 3] [i_8] [i_4] [i_4]);
                    }
                }
                for (int i_17 = 1; i_17 < 24; i_17 += 2) 
                {
                    var_32 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) 4294967292U))) + (2147483647))) << (((((var_4) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (8426166239337034767LL)))));
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        var_33 ^= (~(arr_59 [i_17 + 1] [i_4] [i_4]));
                        arr_61 [i_4] [i_4] [9LL] [i_4] [i_18] = ((/* implicit */unsigned int) arr_56 [i_4] [(_Bool)1] [i_12 + 1]);
                    }
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), ((!((_Bool)1)))));
                        var_35 ^= (-((+(((/* implicit */int) (signed char)(-127 - 1))))));
                        arr_66 [i_4] = ((/* implicit */int) ((unsigned int) (signed char)0));
                    }
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */unsigned long long int) arr_52 [i_4] [i_4] [i_12] [i_4] [20])) : (7297918061194784317ULL)))) ? ((+(((/* implicit */int) arr_20 [4U])))) : (((/* implicit */int) arr_47 [i_4] [i_4] [i_8] [0LL])))))));
                }
                var_37 = ((arr_26 [i_4] [i_4] [i_12 - 1]) > (arr_43 [i_4] [i_8] [i_12 - 1] [i_12 - 3] [i_8] [i_8]));
                /* LoopNest 2 */
                for (signed char i_20 = 1; i_20 < 23; i_20 += 3) 
                {
                    for (signed char i_21 = 1; i_21 < 24; i_21 += 1) 
                    {
                        {
                            arr_73 [i_20] [i_20] [19U] [i_8] [i_20] = ((signed char) arr_30 [i_4] [i_4]);
                            arr_74 [i_20] = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    for (long long int i_23 = 3; i_23 < 24; i_23 += 1) 
                    {
                        {
                            var_38 -= ((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)(-127 - 1)))))));
                            arr_79 [i_4] [i_8] [i_22] [i_23] = (+(arr_43 [i_4] [i_4] [i_12] [i_23 - 3] [8] [i_12 - 4]));
                            arr_80 [(_Bool)1] [(_Bool)1] [(signed char)4] [i_22] [(signed char)14] = ((/* implicit */signed char) (~(((/* implicit */int) arr_77 [i_4] [i_4] [i_4]))));
                        }
                    } 
                } 
                arr_81 [i_4] [i_8] [i_12] [15] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-19109)) ? (2208293830U) : (3331331548U)))));
            }
            /* LoopNest 2 */
            for (unsigned int i_24 = 2; i_24 < 21; i_24 += 1) 
            {
                for (short i_25 = 2; i_25 < 22; i_25 += 3) 
                {
                    {
                        var_39 *= ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) var_4)));
                        var_40 ^= ((/* implicit */unsigned int) var_0);
                        arr_88 [i_25] [i_8] [i_8] [i_25] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                        arr_89 [i_25] [i_8] [i_25] [i_25 + 3] [(short)5] = ((/* implicit */int) var_13);
                        var_41 = ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
            var_42 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4])) ? (var_0) : (((/* implicit */int) var_2))))));
        }
        for (signed char i_26 = 0; i_26 < 25; i_26 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 1) 
            {
                var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_20 [i_4]))))))));
                var_44 *= ((/* implicit */unsigned int) -8864355981897414081LL);
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 25; i_28 += 3) 
                {
                    for (unsigned int i_29 = 0; i_29 < 25; i_29 += 1) 
                    {
                        {
                            arr_101 [i_28] = ((/* implicit */_Bool) ((arr_41 [i_4]) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) arr_85 [i_4] [i_4] [i_4] [i_4]))));
                            arr_102 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_56 [i_26] [i_26] [i_28])))) ? (4294967295U) : (((/* implicit */unsigned int) (~(var_12))))));
                            var_45 ^= ((/* implicit */int) arr_53 [i_4] [i_4] [i_27] [i_4] [4U] [i_4]);
                        }
                    } 
                } 
            }
            arr_103 [24U] [24U] [i_26] &= ((/* implicit */int) arr_100 [18U]);
        }
        for (signed char i_30 = 0; i_30 < 25; i_30 += 1) 
        {
            var_46 = ((/* implicit */_Bool) (+(arr_11 [i_4])));
            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) min((arr_67 [i_4] [i_30] [i_4]), (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_9 [i_4] [14U])), (var_12)))))))))));
        }
        arr_107 [i_4] = ((max((((((/* implicit */int) (signed char)60)) | (((/* implicit */int) (signed char)-61)))), (arr_99 [i_4] [i_4] [i_4] [i_4] [i_4]))) >> (((((/* implicit */int) var_7)) + (44))));
    }
}
