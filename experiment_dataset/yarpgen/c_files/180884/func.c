/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180884
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((arr_1 [15U]), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))) / ((-(18446744073709551615ULL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (~((~(arr_3 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) >= (arr_3 [i_1] [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_4] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_1] [i_4] [i_4])) == (((/* implicit */int) arr_15 [i_1] [i_1] [i_3] [i_4]))));
                        arr_17 [i_1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4]);
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_20 [i_3] [i_3] |= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))));
                            arr_21 [i_5] [(short)10] [i_3] [i_2] [i_3] [i_2] [i_1] &= ((/* implicit */int) var_10);
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */_Bool) arr_1 [i_6]);
            var_25 = (~(arr_7 [i_1] [i_6]));
        }
        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                arr_30 [i_1] [i_1] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < ((-(((/* implicit */int) (_Bool)1))))));
                var_26 = ((/* implicit */_Bool) ((unsigned int) ((arr_8 [i_7]) ? (arr_2 [i_7 - 1] [i_1]) : (((/* implicit */unsigned long long int) arr_10 [i_7])))));
            }
            for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_29 [i_7] [i_1]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_28 |= ((/* implicit */int) arr_31 [i_7]);
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1] [i_10] [i_11])) < (var_1))))) >= ((-(arr_18 [i_7] [16ULL] [i_11]))))))));
                        var_30 = ((short) ((_Bool) (_Bool)1));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */short) ((unsigned long long int) arr_22 [i_1] [(unsigned short)0]));
                        var_32 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_40 [i_12] [i_10] [i_9] [i_1])) : (arr_7 [i_7 - 1] [i_7 + 1])));
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        var_33 += ((/* implicit */int) (_Bool)1);
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_1))));
                    }
                    for (short i_14 = 4; i_14 < 18; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) arr_26 [i_1])) == (arr_35 [i_1] [i_7 + 2] [i_9] [8U] [i_10] [i_14])))));
                        var_36 = ((/* implicit */short) (-(((/* implicit */int) arr_15 [(_Bool)1] [i_1] [(_Bool)1] [i_14 - 3]))));
                        var_37 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8565))) : (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */long long int) arr_22 [(short)18] [i_9])) : (arr_28 [14U] [14U] [i_1])))));
                        var_38 = ((/* implicit */signed char) arr_6 [i_1]);
                    }
                    arr_45 [i_1] [i_1] [i_1] [i_9] [i_10] [i_10] = ((((/* implicit */_Bool) (-(arr_7 [i_7] [13LL])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)1544)) : (((/* implicit */int) var_7)))));
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (((+(((/* implicit */int) var_4)))) < (((/* implicit */int) (short)-3847)))))));
                    arr_46 [i_7 + 2] [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-16))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    arr_49 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-11)) ? (arr_7 [i_1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_15] [i_15] [i_1] [(_Bool)1] [1ULL])))));
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [2] [i_7 + 2] [i_7 + 1] [i_9] [i_7 + 1])) ? (((/* implicit */int) arr_0 [i_7 + 2] [i_7 + 2])) : (((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1] [i_9] [i_9] [i_1] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63991))))));
                }
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    arr_52 [i_1] = ((/* implicit */unsigned char) (+(arr_7 [i_7 + 3] [i_9])));
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 2; i_17 < 16; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1]))))) >= (arr_35 [i_1] [(_Bool)1] [2U] [i_1] [i_1] [i_7])));
                        var_42 *= arr_38 [i_9] [i_16] [i_9] [(unsigned char)12] [i_1];
                        arr_55 [i_7] [i_9] [i_7] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */short) (-(arr_33 [i_9] [i_17 + 2] [i_9])));
                        arr_56 [i_1] [i_7 + 2] [i_16] [i_1] [i_7 + 2] = ((/* implicit */_Bool) arr_19 [i_1] [17LL] [i_1]);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        var_43 = ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)));
                        arr_60 [i_1] = ((/* implicit */unsigned char) ((arr_32 [i_18] [i_9]) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        var_44 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (arr_48 [i_18] [i_9] [i_18] [i_18]))))));
                        arr_61 [i_1] [i_18] [i_1] [(_Bool)1] [i_18] [i_18] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_1] [i_1] [(signed char)13] [i_7] [i_7 + 3] [i_7]))) >= (arr_11 [i_1] [i_7 + 2] [i_16 + 1] [i_18]))));
                    }
                }
                for (unsigned short i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    var_45 = ((/* implicit */long long int) var_13);
                    var_46 = ((short) ((arr_12 [i_1] [i_7 - 1] [i_7]) < (((/* implicit */unsigned long long int) arr_32 [i_1] [i_19]))));
                    arr_65 [i_1] [i_1] = var_2;
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 19; i_21 += 1) 
                {
                    {
                        var_47 = ((/* implicit */short) arr_66 [i_20]);
                        var_48 = 1356274192;
                    }
                } 
            } 
        }
        for (unsigned long long int i_22 = 2; i_22 < 17; i_22 += 4) 
        {
            var_49 = ((/* implicit */short) arr_41 [i_22 + 1] [i_1] [i_22] [i_22] [i_1] [i_1] [(_Bool)0]);
            var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_1)) < (1110675127U)));
        }
        var_51 |= ((/* implicit */_Bool) arr_72 [i_1] [i_1] [1ULL]);
    }
    for (unsigned long long int i_23 = 1; i_23 < 17; i_23 += 2) 
    {
        arr_76 [7] = ((/* implicit */unsigned short) var_11);
        var_52 = ((/* implicit */int) arr_2 [i_23 - 1] [i_23]);
    }
    var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) var_15))));
}
