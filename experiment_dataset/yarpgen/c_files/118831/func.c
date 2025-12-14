/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118831
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
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) arr_5 [i_2 + 2] [7] [7]);
                        var_19 = ((/* implicit */int) max((var_19), (var_1)));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            arr_15 [(unsigned short)8] [i_1] [(unsigned short)8] [i_3] [i_3] = ((((/* implicit */_Bool) 1598575317)) ? (245760LL) : (245760LL));
                            var_20 = ((/* implicit */long long int) var_14);
                        }
                        for (unsigned char i_5 = 3; i_5 < 17; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_17 [i_5] [11LL] [i_5] [2] [i_5] [2] [i_1]))));
                            var_22 = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (var_10) : (arr_9 [i_5 - 1] [i_1] [i_1] [i_0]));
                        }
                        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */int) var_9);
                            arr_22 [i_1] [i_6 - 3] [i_3] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3 + 2] [i_6 - 3] [i_3 - 2]);
                            arr_23 [i_6] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_1] [i_3 - 1] [i_3 + 2] [i_3 - 3] [i_3 - 1]) : (arr_12 [i_1] [i_3 - 1] [i_3 + 2] [i_3 - 3] [i_3 - 1])));
                        }
                    }
                } 
            } 
        } 
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [4LL] [4LL] [i_0] [i_0] [4LL])))));
    }
    for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) var_16);
        /* LoopNest 3 */
        for (int i_8 = 4; i_8 < 15; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_11 = 3; i_11 < 16; i_11 += 3) 
                        {
                            var_25 = ((((/* implicit */_Bool) arr_17 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_17 [i_11] [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_9] [i_8] [i_7])) : (((/* implicit */int) arr_17 [i_11 - 2] [i_11 - 1] [i_11] [i_11 + 1] [i_11] [i_11] [i_8 + 2])));
                            arr_36 [i_8] [i_10] [i_9] [i_10] = ((((/* implicit */_Bool) arr_30 [i_8 - 3] [i_11 - 1] [i_11])) ? (var_8) : (((/* implicit */int) arr_30 [i_8 + 1] [i_10] [i_10])));
                            var_26 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [i_11] [i_10] [i_8] [i_9] [i_8] [13] [13])) : (var_10)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_20 [i_7 - 1] [i_8] [i_9] [i_10] [i_10] [i_11] [i_7 - 1])) : (arr_34 [i_7] [i_7] [i_8] [i_9] [i_10] [i_7]))) : (arr_18 [(unsigned short)17] [i_7] [i_7] [i_7 - 1] [i_8 + 1]));
                        }
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            arr_39 [i_7] [i_8 - 1] [i_10] [i_10] [i_12] [i_7] = ((/* implicit */unsigned short) arr_19 [i_7] [i_9] [i_9] [16] [i_12] [i_10]);
                            arr_40 [i_7] [i_7] = ((/* implicit */int) arr_17 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8]);
                            var_27 *= ((/* implicit */unsigned short) arr_6 [i_8] [i_9] [i_8] [i_12]);
                        }
                        for (int i_13 = 1; i_13 < 16; i_13 += 2) 
                        {
                            arr_43 [1LL] [i_13] [i_8 - 2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_12 [i_13] [i_8] [i_8 + 1] [i_8 + 2] [i_8])) ? (arr_12 [i_13] [i_13] [i_8 - 2] [i_13] [i_8]) : (arr_12 [i_13] [(unsigned char)0] [i_8 - 3] [i_13] [i_8]))), (max((arr_12 [i_13] [i_8] [i_8 - 1] [i_8] [(unsigned char)9]), (arr_12 [i_13] [i_8 - 2] [i_8 + 2] [i_8] [i_8])))));
                            arr_44 [i_13] [i_9] [i_9] [i_13] [i_9] [i_9] [(unsigned char)14] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_13] [i_8 - 2] [5] [i_8 - 2])), (((((/* implicit */_Bool) arr_16 [i_7] [i_10] [i_13] [i_13] [i_8 - 4] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [14] [9] [9] [i_9] [i_10] [i_13] [i_13]))) : (var_2)))))) ? (min((((((/* implicit */_Bool) arr_18 [5LL] [i_10] [i_10] [i_10] [i_13])) ? (arr_12 [i_13] [i_8] [i_9] [i_10] [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_10] [10] [i_13] [i_10] [i_10] [i_10]))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_11 [i_13] [i_7] [i_13])), (var_14)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_13 + 1] [i_10] [i_13] [i_13] [i_8 - 4] [10LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) ? (min((arr_37 [i_7] [i_7]), (((/* implicit */int) var_14)))) : (min((((/* implicit */int) arr_29 [(unsigned short)9] [i_8] [i_13 - 1])), (var_3))))))));
                            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) arr_32 [13] [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (max((arr_18 [i_7] [i_7] [i_7] [i_10] [i_13 + 1]), (arr_18 [i_13 - 1] [i_8] [i_13 - 1] [i_10] [i_13 - 1]))) : (((/* implicit */int) arr_30 [i_7 - 1] [i_8] [i_8]))))));
                        }
                        var_29 = ((/* implicit */unsigned char) arr_5 [i_7] [i_7] [i_9]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_14] [i_7 - 1] [i_7] [i_7])) ? (arr_32 [i_7] [i_7 - 1] [i_7] [i_7]) : (arr_32 [i_7] [i_7 - 1] [i_7] [i_7])));
            var_31 = ((/* implicit */int) arr_38 [i_7] [i_7] [i_7 - 1] [1LL] [i_7 - 1] [i_7] [i_7]);
        }
        var_32 = ((/* implicit */int) min((var_32), (min((((((/* implicit */_Bool) arr_0 [i_7 + 1])) ? (((/* implicit */int) arr_0 [i_7 - 1])) : (((/* implicit */int) arr_0 [i_7 + 1])))), (((/* implicit */int) max((arr_0 [i_7 - 1]), (arr_0 [i_7 + 1]))))))));
    }
    for (int i_15 = 2; i_15 < 7; i_15 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            arr_53 [i_16] [i_15] [i_15] = ((/* implicit */unsigned char) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_15] [i_16] [i_15 + 4])) ? (((/* implicit */int) arr_30 [i_16] [i_16] [i_15 - 2])) : (((/* implicit */int) arr_0 [i_15 + 2])))))));
            var_33 = ((((/* implicit */_Bool) arr_28 [i_15 - 2] [i_15 - 2])) ? (max((arr_28 [i_15 - 2] [i_15 + 1]), (arr_28 [i_15 - 2] [i_15 - 2]))) : (max((arr_28 [i_15 - 2] [i_15 + 4]), (arr_14 [i_15 - 2] [i_15 - 1] [i_15] [i_15 - 1] [i_15]))));
        }
        var_34 = ((/* implicit */int) arr_25 [10] [i_15]);
        var_35 = ((/* implicit */int) max((var_35), (max((((/* implicit */int) arr_45 [i_15] [i_15 + 3] [(unsigned char)13])), (arr_28 [i_15 + 4] [i_15 + 2])))));
    }
    for (int i_17 = 2; i_17 < 10; i_17 += 3) 
    {
        var_36 += ((/* implicit */int) min((((((/* implicit */_Bool) 245762LL)) ? (-5259956446261853058LL) : (((/* implicit */long long int) 1980456446)))), (((/* implicit */long long int) max((arr_0 [i_17 + 1]), (arr_0 [i_17 + 2]))))));
        arr_57 [i_17] [i_17] = ((/* implicit */int) min((arr_2 [i_17] [(unsigned short)12] [i_17]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (unsigned char)81)) : (-1312537003))))));
        var_37 = ((/* implicit */long long int) min((arr_6 [i_17] [i_17 - 2] [(unsigned char)5] [i_17 + 2]), (min((var_6), (arr_6 [i_17] [i_17 - 2] [i_17 - 1] [i_17])))));
    }
    var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)255)) ? (-2105370904) : (((/* implicit */int) (unsigned short)40150))))))));
}
