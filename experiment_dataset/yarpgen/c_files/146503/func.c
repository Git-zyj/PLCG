/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146503
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
    var_18 = ((/* implicit */long long int) var_14);
    var_19 = ((/* implicit */unsigned int) ((var_12) | (((/* implicit */long long int) var_10))));
    var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25873))) | (var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_12)))) && (((/* implicit */_Bool) ((unsigned short) var_14))))))) : (2115029461862456722LL)));
    var_21 = var_12;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            var_22 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >= (min((((((/* implicit */_Bool) (unsigned char)240)) ? (var_8) : (((/* implicit */int) var_15)))), (((/* implicit */int) arr_2 [i_1]))))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(max((arr_1 [i_0] [i_1 - 2]), (((/* implicit */unsigned long long int) var_12)))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)39663)), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) & (var_0)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_1 [(_Bool)1] [(signed char)13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [4LL]))) : (arr_3 [i_2]))))))));
            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) >> (((arr_3 [i_0]) - (7333022282060881479LL)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                var_26 ^= ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2] [(unsigned char)4]);
                var_27 = ((/* implicit */unsigned char) ((long long int) var_12));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((var_8) >= (((/* implicit */int) arr_5 [i_3 + 2])))))));
            }
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (((/* implicit */int) arr_2 [i_5 - 1])) : (((/* implicit */int) arr_2 [i_5 + 1]))));
                    var_30 = arr_3 [i_0];
                    var_31 = arr_11 [i_0] [i_0] [i_2] [i_4] [i_5 - 1];
                }
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    arr_15 [i_0] [i_0] [i_4] [i_6] = ((/* implicit */int) (-(arr_11 [16] [i_2] [i_6 + 2] [2U] [i_2])));
                    /* LoopSeq 4 */
                    for (long long int i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((long long int) ((_Bool) (unsigned short)39659)));
                        arr_19 [i_0] [19U] [15LL] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1])) ? (arr_16 [i_0] [i_2] [i_6 + 2] [i_6] [i_7] [i_7 + 1]) : (arr_16 [i_7 - 1] [i_0] [i_4] [i_4] [i_2] [i_0])));
                        var_32 += ((/* implicit */signed char) -103393216244460813LL);
                    }
                    for (int i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        arr_22 [17] [19] [i_4] [i_6] = ((/* implicit */_Bool) (+(arr_11 [i_4] [i_0] [i_4] [i_4] [(unsigned short)2])));
                        var_33 = ((/* implicit */unsigned int) arr_1 [i_6] [i_6]);
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        var_34 = arr_4 [i_0] [i_2] [i_4];
                        arr_25 [11U] [i_2] [(unsigned char)9] [i_6] [i_9] = ((/* implicit */unsigned long long int) arr_2 [(unsigned char)8]);
                        var_35 ^= ((/* implicit */int) var_5);
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9]))) : (arr_0 [i_9] [i_4])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (arr_23 [i_2] [i_4] [i_6]))) : (((/* implicit */unsigned int) arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_9 + 1])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_28 [i_0] [i_2] [i_2] [(signed char)13] [i_4] [i_6] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(unsigned short)4] [i_2] [i_4] [i_6 + 1] [i_10])) ? (((/* implicit */unsigned int) var_2)) : (arr_11 [i_0] [i_0] [i_10] [i_6] [i_2])));
                        var_37 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_12)))));
                        var_38 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_10])) ? (arr_21 [i_0] [i_0] [i_4] [i_6 + 2] [i_10]) : (((/* implicit */unsigned int) 239913714))))));
                        var_39 = arr_5 [i_2];
                        var_40 = ((long long int) arr_1 [i_0] [i_6]);
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_32 [i_11] [i_11] [i_4] [i_2] [0U] [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_8 [(unsigned char)13] [4U] [i_4] [17ULL]))) ? (((/* implicit */long long int) arr_8 [i_0] [i_2] [i_4] [i_11])) : (((var_0) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_41 = ((/* implicit */long long int) (unsigned char)241);
                }
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                arr_35 [i_2] = ((/* implicit */int) (-(max((((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)6] [i_2] [i_12])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)69)))))))));
                var_42 = ((/* implicit */int) ((0ULL) & (((/* implicit */unsigned long long int) (-(min((var_14), (var_4))))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                for (long long int i_14 = 1; i_14 < 16; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        {
                            arr_44 [i_0] = ((/* implicit */long long int) arr_23 [i_0] [i_2] [i_2]);
                            arr_45 [i_0] [i_0] [10U] [i_14 + 2] [i_15] = ((/* implicit */long long int) var_1);
                            arr_46 [i_2] [(unsigned char)11] [i_2] [10] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)123))));
                            var_43 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(arr_24 [i_2] [i_13 + 1] [i_15])))), (((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            arr_47 [i_0] [i_2] [i_13] [i_2] [i_2] = ((/* implicit */unsigned char) (-(arr_23 [i_15] [i_14] [(_Bool)1])));
                        }
                    } 
                } 
            } 
            var_44 = ((/* implicit */unsigned long long int) (unsigned char)0);
        }
        arr_48 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_45 = ((/* implicit */int) var_10);
        arr_49 [i_0] = ((/* implicit */int) arr_41 [7U] [7U] [7U] [i_0] [(unsigned char)9] [i_0]);
        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_0] [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [5])))))));
    }
    for (int i_16 = 0; i_16 < 19; i_16 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_17 = 2; i_17 < 17; i_17 += 1) 
        {
            var_47 = ((/* implicit */unsigned short) (-((+((-(arr_1 [i_16] [(unsigned short)6])))))));
            var_48 = ((/* implicit */unsigned int) arr_29 [i_16] [i_17] [i_16] [i_17]);
        }
        arr_56 [i_16] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) arr_3 [i_16])) ? (arr_12 [(signed char)13] [i_16]) : (arr_12 [i_16] [i_16]))));
    }
}
