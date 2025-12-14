/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174943
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
    var_10 = ((/* implicit */long long int) (+((+(var_1)))));
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2] [i_2 + 2] [i_2 - 1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_2 + 3] [i_2])))))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_2 + 2]), (arr_4 [i_0] [i_0] [i_2 - 3])));
                }
                for (int i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    arr_11 [(signed char)10] [i_1] [9U] [i_1] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)62110))))));
                    arr_12 [i_1] [5ULL] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(short)8] [i_3 - 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_3]))))) : (max((3476702040U), (3476702040U))))))));
                }
                for (int i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            arr_21 [(signed char)3] [i_1] [(unsigned short)17] [i_1] [i_6 + 1] [3ULL] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_17 [i_0] [i_1] [i_4] [i_5] [i_6])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 3] [i_6 - 2])) ? (((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 3] [i_6 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) : ((-(arr_13 [i_4 + 1] [i_1] [i_4 + 1])))));
                            arr_22 [(unsigned char)18] [i_1] [i_5] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((((!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_4 + 1] [i_5] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_14 [i_0] [i_1] [i_5] [i_6]))) : (((/* implicit */unsigned int) arr_17 [(short)4] [i_1] [i_4 + 1] [i_4 + 1] [1U]))));
                        }
                        var_14 = ((/* implicit */unsigned long long int) (+((-(arr_17 [i_0] [i_0] [i_0] [15LL] [i_0])))));
                        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_4 + 1] [i_4 + 1])), (arr_13 [i_4] [i_1] [i_5])))))))));
                        var_16 = ((/* implicit */unsigned long long int) arr_14 [i_0] [3U] [i_0] [i_0]);
                        arr_23 [i_1] [(unsigned short)1] [i_1] = ((/* implicit */int) arr_0 [i_4 + 1]);
                    }
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_4] [i_7] [(unsigned short)0]);
                            var_18 = ((/* implicit */unsigned long long int) arr_14 [(unsigned char)5] [i_4] [i_7] [i_8]);
                            arr_28 [i_1] [i_4] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_9 [i_0] [i_8] [i_1])));
                            arr_29 [i_0] [i_1] [i_4] [i_7] [i_8] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_4 + 1] [i_7] [i_8]))))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_0] [i_7] [8ULL])) ? (((/* implicit */int) arr_5 [i_0] [i_4 + 1] [i_1])) : (arr_17 [i_0] [i_1] [i_4] [i_7] [i_8]))) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])));
                            arr_30 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) min((arr_16 [i_4 + 1] [i_1] [i_1] [i_7] [i_8] [(unsigned char)17]), (arr_16 [i_4 - 1] [i_4] [i_4] [i_7] [i_8] [(unsigned short)5])))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_27 [6LL] [i_1] [i_4] [i_7] [i_8] [i_7] [i_4 + 1])), (arr_20 [19LL] [i_1] [i_4] [i_7] [i_8])))) ? (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_4] [i_7])) : (((((/* implicit */_Bool) 9059134803444786207LL)) ? (((/* implicit */long long int) 1782696017U)) : (-9059134803444786207LL)))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7]))) : ((-(arr_14 [i_0] [i_1] [i_4] [i_4 - 1])))));
                            arr_34 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) arr_2 [i_0] [i_0]);
                            var_20 = ((/* implicit */unsigned int) arr_16 [i_9] [i_7] [i_4] [i_4] [i_1] [i_0]);
                        }
                        arr_35 [i_7] [i_1] [i_1] [19LL] = min((((/* implicit */long long int) min(((-(arr_17 [(short)18] [i_7] [14ULL] [i_7] [8ULL]))), (((/* implicit */int) arr_19 [i_1] [i_1] [i_4 + 1] [i_7] [(signed char)7]))))), (arr_20 [i_4] [i_4 + 1] [i_4] [(short)7] [i_4]));
                    }
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_27 [i_0] [i_1] [i_4] [i_1] [i_4 + 1] [i_1] [i_1]), (arr_27 [i_0] [i_1] [i_4] [i_4] [i_4 + 1] [i_0] [i_0]))))));
                    arr_36 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_18 [i_1] [19ULL] [i_1] [19ULL] [i_1]);
                }
                var_22 = ((/* implicit */unsigned short) (+((-(min((((/* implicit */int) arr_10 [i_0] [i_1])), (arr_33 [8LL])))))));
                var_23 = arr_20 [i_0] [i_1] [13] [i_1] [i_1];
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        arr_39 [(signed char)15] = ((/* implicit */signed char) arr_31 [i_10] [i_10] [(_Bool)1] [i_10] [i_10]);
        arr_40 [i_10] = arr_20 [i_10] [(unsigned short)14] [i_10] [i_10] [i_10];
    }
    for (int i_11 = 4; i_11 < 14; i_11 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (unsigned int i_13 = 4; i_13 < 13; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) arr_42 [i_14]);
                        arr_51 [i_11] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) (~(arr_26 [i_11] [i_11])));
                    }
                } 
            } 
        } 
        arr_52 [i_11] = ((/* implicit */int) arr_42 [i_11]);
        var_25 = ((/* implicit */unsigned short) arr_37 [i_11] [i_11]);
        var_26 = ((/* implicit */signed char) arr_49 [(unsigned short)8] [i_11] [i_11]);
    }
    for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
    {
        var_27 = ((/* implicit */signed char) min(((+(arr_42 [i_15]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_15] [i_15] [i_15] [i_15] [i_15])))))));
        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_15] [0ULL] [i_15] [(signed char)13] [i_15]))));
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            arr_59 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_15])) ? (((/* implicit */int) arr_9 [i_15] [i_15] [i_15])) : ((-(((/* implicit */int) arr_5 [i_15] [i_16] [i_15]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [i_16 + 1] [i_15]))))) : ((-(((/* implicit */int) arr_25 [i_16 + 1] [i_16] [i_16 + 1] [(signed char)11] [i_16 + 1] [i_16 + 1]))))));
            arr_60 [(short)4] [i_15] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_15] [i_15] [i_16] [i_16 + 1]))))), (arr_14 [(short)9] [(signed char)12] [i_16 + 1] [i_15])))));
        }
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 16; i_17 += 1) 
    {
        arr_63 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_17] [14U] [8ULL])) ? (((((/* implicit */_Bool) arr_19 [16LL] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_6 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_16 [i_17] [i_17] [i_17] [(unsigned char)8] [i_17] [i_17])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [2ULL] [(signed char)8] [(signed char)8] [i_17] [(signed char)8])))))));
        arr_64 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_17] [10] [i_17] [i_17])) ? (arr_50 [i_17] [14LL] [i_17] [i_17]) : (arr_50 [i_17] [(unsigned char)10] [(short)4] [i_17])));
        /* LoopNest 2 */
        for (signed char i_18 = 1; i_18 < 14; i_18 += 2) 
        {
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                {
                    arr_70 [i_18] [i_19] = arr_68 [i_19] [i_18 + 2] [i_19];
                    arr_71 [i_19] = ((/* implicit */unsigned short) arr_15 [i_17] [i_17] [i_17] [i_17] [i_19] [i_19]);
                    arr_72 [i_19] [1] [1] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_18] [i_18 + 2]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 2) 
                        {
                            var_29 = ((arr_38 [i_18 + 1] [i_20]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_21] [i_18] [i_17] [i_20] [i_20])))))) : (arr_32 [15] [15] [i_19] [i_20] [i_20] [i_21]));
                            arr_80 [i_18] [13LL] [i_21] = ((/* implicit */long long int) (-(arr_79 [(unsigned char)9] [i_20] [i_20] [i_19] [i_18] [i_17])));
                            arr_81 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) arr_50 [i_17] [i_19] [i_20] [i_21]);
                        }
                        for (short i_22 = 0; i_22 < 16; i_22 += 1) 
                        {
                            var_30 = arr_82 [i_20] [i_20] [i_20] [9] [i_22];
                            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_49 [i_19] [i_20] [i_22]))));
                        }
                        var_32 = ((/* implicit */unsigned char) arr_14 [i_17] [i_18 + 2] [i_19] [1LL]);
                        var_33 = ((/* implicit */unsigned short) arr_66 [i_20] [i_19] [i_18]);
                        arr_85 [i_17] [i_18 - 1] [i_17] [(signed char)10] = ((/* implicit */_Bool) ((arr_46 [i_18 - 1] [i_18 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_18 + 2] [i_18 + 2]))) : (arr_47 [i_18 + 2] [i_18 - 1] [i_18 - 1] [i_18 + 2])));
                        /* LoopSeq 1 */
                        for (long long int i_23 = 0; i_23 < 16; i_23 += 3) 
                        {
                            arr_88 [i_18] [i_23] [i_18] [i_18 + 2] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4447959330614567848ULL))));
                            var_34 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_73 [(signed char)0] [(signed char)0] [i_19] [i_23])) ? (arr_32 [i_17] [i_18] [i_19] [i_17] [5ULL] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_87 [(_Bool)1] [i_17] [i_17] [13LL] [i_17] [i_17])))))));
                        }
                    }
                    var_35 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_18 - 1] [i_18] [i_19]))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) arr_62 [i_17]);
    }
}
