/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102569
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = min(((unsigned short)64112), (((/* implicit */unsigned short) arr_2 [i_0])));
        var_13 = ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0 - 3])) > (((/* implicit */int) arr_3 [i_0 - 2] [(short)8]))))) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])));
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_15 -= arr_7 [i_4];
                        arr_14 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) 0U);
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (arr_9 [i_1 - 1] [i_1 - 1]) : (arr_9 [i_1 - 1] [i_1 - 1]))))));
                        var_17 = ((/* implicit */unsigned long long int) (unsigned short)64112);
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1 - 1] [17ULL] [i_1 + 1] [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) (unsigned short)1439))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37580)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
        var_20 = ((/* implicit */int) arr_5 [i_1]);
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */int) (+(arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
        /* LoopSeq 2 */
        for (short i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    for (signed char i_9 = 4; i_9 < 19; i_9 += 1) 
                    {
                        {
                            arr_30 [i_9] [i_9] [(signed char)18] [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_27 [i_6 - 3] [i_7 + 1]))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned short)52931)) ? (arr_10 [i_5] [i_7] [(short)12] [i_5]) : (((/* implicit */int) (signed char)28)))));
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_5] [i_7])) ^ (((/* implicit */int) (unsigned short)255))));
                    arr_33 [(_Bool)1] [i_6] [(short)12] [(unsigned char)14] = ((((/* implicit */_Bool) 7453334006039454854ULL)) ? (arr_32 [i_7 - 1] [(short)9] [i_7] [i_6 + 2] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [8ULL] [i_7 + 2] [i_6 - 3]))));
                    arr_34 [i_6] [(signed char)2] = ((/* implicit */signed char) (~(arr_10 [(short)14] [i_10] [i_7 + 2] [i_6 + 3])));
                    var_24 |= arr_29 [i_5] [i_6] [i_5];
                }
                for (unsigned short i_11 = 4; i_11 < 18; i_11 += 4) 
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_11] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(signed char)10] [i_6] [(short)16] [i_6] [i_6 + 4] [(short)16]))) : (arr_15 [i_7 - 2])));
                    arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)12605)) > (arr_21 [5LL] [3LL] [(unsigned char)10] [i_11 + 1])));
                    arr_39 [i_5] [i_6] [i_7 + 2] [i_11] = ((/* implicit */short) (-(0)));
                    var_26 = ((/* implicit */unsigned short) ((unsigned int) ((int) arr_28 [i_11])));
                }
                for (short i_12 = 2; i_12 < 19; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_48 [i_5] [i_6] [(short)8] [2] [(signed char)2] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-41))));
                        var_27 = ((/* implicit */unsigned short) (+(arr_23 [i_7 - 1])));
                    }
                    var_28 = ((3552213889U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7 + 3] [i_7] [i_12 + 1] [i_12 - 2]))));
                }
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) arr_7 [i_14]);
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 1; i_15 < 18; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */short) arr_32 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 - 2]);
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7 - 1])) ? ((+(((/* implicit */int) arr_25 [i_5] [i_6 - 1] [i_14] [i_15 + 2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [(short)16])) != (arr_32 [i_5] [i_5] [i_7] [i_5] [i_15]))))));
                        var_32 = ((/* implicit */unsigned short) 2480778421U);
                    }
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        arr_55 [i_5] [i_6] [i_7] [11U] [i_14] = ((/* implicit */unsigned int) var_0);
                        arr_56 [(short)19] [i_6] [i_6] [i_6] [i_14] = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_6 + 4])) < (((/* implicit */int) arr_20 [i_6 - 1]))));
                    }
                }
                var_33 = ((/* implicit */unsigned short) arr_51 [10LL] [i_6 + 2]);
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_6 - 2] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_24 [i_6] [i_6 + 2] [i_6] [i_6 + 2] [i_6] [i_6 - 1])) : (882885920)));
                    var_35 = ((/* implicit */short) (~((+(12594853323385575340ULL)))));
                }
            }
            var_36 = (short)(-32767 - 1);
            var_37 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) ((((/* implicit */int) arr_20 [(_Bool)1])) / (((/* implicit */int) arr_27 [13] [i_6]))))));
            var_38 = ((/* implicit */signed char) (_Bool)1);
            var_39 = ((/* implicit */unsigned char) arr_16 [i_6]);
        }
        for (unsigned char i_18 = 1; i_18 < 17; i_18 += 1) 
        {
            var_40 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)230)) < (arr_44 [(_Bool)1] [i_5] [i_5] [i_5] [(_Bool)0] [i_18] [i_18 - 1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5] [i_18 + 2])) ? (((/* implicit */unsigned long long int) var_4)) : (892156913098847619ULL)))) ? ((~(arr_19 [i_18] [(unsigned short)0] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */int) (short)23407)) * (((/* implicit */int) (unsigned short)1426)))) : (((/* implicit */int) max(((unsigned char)212), (((/* implicit */unsigned char) (signed char)-48))))))))));
            var_41 = ((/* implicit */unsigned short) max((arr_11 [(unsigned short)16]), (((/* implicit */unsigned long long int) (unsigned short)1424))));
            var_42 = ((/* implicit */long long int) arr_35 [i_5] [i_5] [(short)5]);
        }
        var_43 = ((/* implicit */unsigned char) (_Bool)0);
    }
    var_44 = var_10;
}
