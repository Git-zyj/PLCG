/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122546
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
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned short) ((long long int) 4593671619917905920LL));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */short) var_6);
                    arr_9 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [0U] [0U]);
                    var_20 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_0 - 3] [i_1] [i_1 - 3] [i_2])) : (((/* implicit */int) var_16)))) - (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_4))))))));
                }
                for (long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                {
                    var_21 += ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_7 [i_3] [i_3] [(signed char)10] [i_3])), (arr_0 [i_0 - 1])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        arr_16 [i_3] [i_3] [i_3 + 1] [i_0] [i_3 - 1] [4LL] = ((long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)8]))));
                        arr_17 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (((~(arr_13 [i_0] [i_1] [i_3 - 3] [4ULL] [(short)8]))) >> (((((/* implicit */int) arr_5 [i_0 - 4] [i_0] [i_3 - 3] [i_0])) - (189)))))) : (((/* implicit */unsigned long long int) (((~(arr_13 [i_0] [i_1] [i_3 - 3] [4ULL] [(short)8]))) >> (((((((/* implicit */int) arr_5 [i_0 - 4] [i_0] [i_3 - 3] [i_0])) - (189))) + (194))))));
                        arr_18 [i_0 - 1] [i_1] [0LL] |= ((/* implicit */unsigned char) var_11);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3 - 3] [(short)4] [i_3 - 3] [i_0 - 4] [i_0 - 4])) ? (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_7))))) : (((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0] [(_Bool)1] [i_3] [i_4 - 1])))));
                    }
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_3] [i_3] [i_1] [i_0] = min((((/* implicit */long long int) 2656551638U)), (max((arr_15 [i_0] [i_3 - 2] [(signed char)8] [i_0]), (arr_15 [i_0] [i_1 - 1] [i_3 + 1] [i_0]))));
                        var_23 = ((/* implicit */signed char) arr_19 [i_0] [i_1] [(unsigned char)5]);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [6ULL] [6ULL] [11U] [i_0])) ? (((((((/* implicit */_Bool) arr_1 [2LL] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [11U] [(unsigned char)6] [i_3 - 2] [i_0])))) >> (((var_9) - (13430323964791606860ULL))))) : (((/* implicit */int) min((max((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [(signed char)7] [i_0])), (var_17))), (((/* implicit */unsigned short) ((signed char) arr_10 [i_0] [7LL]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned short)4] [i_6] [i_5])) ? (arr_20 [i_6] [i_5] [i_6] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 2656551638U)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [2U] [i_0 - 4])) : (((/* implicit */int) arr_6 [i_5] [i_6])))))))));
                            var_26 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) arr_22 [i_0] [i_1 + 1] [i_3 - 2] [i_5] [i_6])), (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_3] [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 - 2] [0U] [0U])))))))));
                            var_27 = ((/* implicit */short) (~(((/* implicit */int) ((arr_13 [i_0 - 2] [(unsigned char)3] [i_3 + 1] [i_0 - 2] [i_6]) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))))))));
                            arr_25 [i_0] [0U] [i_3] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_3 - 2] [i_5] [i_0]))) * (((((/* implicit */_Bool) arr_23 [i_0] [(short)11] [i_5] [(short)11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)2] [i_5]))) : (var_7)))))), (min((((((/* implicit */_Bool) arr_14 [7LL] [i_3])) ? (arr_14 [9LL] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_0])) || (((/* implicit */_Bool) var_2)))))))));
                        }
                        arr_26 [i_0] = (+(((unsigned int) min((var_14), (var_0)))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_1 + 1] [i_0]))) : (var_11))));
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 4; i_8 < 11; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */short) ((unsigned short) arr_8 [i_8 - 4] [i_7] [i_1 + 1] [i_8 - 4]));
                        var_30 = ((/* implicit */short) (+(arr_13 [i_0] [i_1 - 1] [i_7] [(short)11] [i_8 - 1])));
                        var_31 -= ((/* implicit */long long int) ((unsigned int) arr_22 [i_0 - 2] [i_0 - 2] [i_7] [i_1] [i_7]));
                    }
                    for (unsigned short i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        arr_35 [i_0] = ((/* implicit */short) ((var_3) << (((((arr_30 [i_1] [i_9] [i_7] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 - 2] [i_1] [i_7] [i_9] [i_9 - 2]))))) + (6634260461272689227LL)))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_13 [i_9 - 2] [i_1 - 3] [i_0 - 1] [2LL] [i_0 - 2])));
                        arr_36 [i_0] [i_0] [i_1] [i_7] [i_9] [i_9 - 2] = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_0] [i_7] [(signed char)4] [i_1 - 3] [i_0])) == (((/* implicit */int) arr_34 [i_0] [i_1] [i_1 - 3] [i_1 - 3] [i_0]))));
                        var_33 = var_7;
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_10]))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_10]))) * (2656551638U))))))));
                        var_35 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_10))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_36 = ((unsigned char) (unsigned short)43932);
                            arr_41 [i_0] = ((/* implicit */long long int) ((short) arr_0 [i_0 - 4]));
                            arr_42 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_11] [i_10] [i_7] [i_1])) && (((/* implicit */_Bool) arr_38 [5LL] [9ULL] [i_0] [5LL] [i_1] [3LL]))))) == (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
                        }
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) arr_15 [i_0 - 4] [i_1] [i_1] [i_10]))));
                    }
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) ((_Bool) ((unsigned char) var_6)));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_1 - 1] [i_7])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_1 - 1] [i_7]))));
                    }
                    var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_8 [i_0 - 2] [(unsigned char)3] [11U] [11U]))))) ? (((/* implicit */int) ((var_15) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_39 [i_0 + 1] [(unsigned char)0] [i_7] [10U] [i_0 + 1] [i_1 + 1])))))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0]))) / (arr_38 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_7])));
                }
                for (short i_13 = 2; i_13 < 8; i_13 += 1) 
                {
                    arr_47 [8LL] [(signed char)4] [i_13] [(unsigned short)0] &= ((/* implicit */signed char) var_0);
                    arr_48 [11ULL] [i_0] [i_1] [i_13] = ((/* implicit */unsigned char) ((short) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (arr_14 [i_0 - 3] [(unsigned char)7]))));
                    arr_49 [i_0] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_0] [i_0] [4U] [i_13]))))) ? (((/* implicit */int) min((((unsigned char) arr_28 [i_1 - 1])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_0] [(signed char)1])))))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_0))))))));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((((/* implicit */unsigned long long int) ((max((var_15), (((/* implicit */long long int) var_6)))) << (((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_10)))) + (9421)))))) / (((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (2656551638U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (16386835971629006840ULL)));
    var_44 += ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) min((5253614385456075427LL), (((/* implicit */long long int) (unsigned char)119)))))), (max((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_17))))))));
    var_45 += ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_12))))));
}
