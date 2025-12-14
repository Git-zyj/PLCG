/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182690
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_3]))))), (arr_8 [i_0] [i_0 + 4] [i_0] [i_0]))) == (((/* implicit */unsigned int) min((((/* implicit */int) min((arr_2 [12U]), (arr_2 [i_2])))), ((~(((/* implicit */int) arr_2 [i_0])))))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(max((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) arr_9 [i_0 + 1] [(_Bool)1] [i_2] [i_3])))))))))));
                        arr_11 [i_0] [1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_4 [i_0])))))))));
                        var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_10 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned short) arr_2 [i_2])))))))), (((unsigned int) (-(((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2])))))));
                        var_20 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_3]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_2 [i_1]);
                        var_22 = ((/* implicit */_Bool) arr_4 [i_2]);
                        arr_15 [i_0] [i_1] [i_0] = ((/* implicit */short) (((~((~(((/* implicit */int) arr_6 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [i_4])))))) - ((+(((int) arr_1 [i_1]))))));
                        arr_16 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0]))))) / (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_14 [i_1] [i_1]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_5 [i_0]))))) / (max((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_1]))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_0]))) * (max((arr_3 [i_2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_4])))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_24 += ((unsigned char) (~(((/* implicit */int) min((((/* implicit */short) arr_7 [i_2] [i_5])), (arr_6 [i_2] [i_2] [i_1] [i_0]))))));
                        var_25 = ((/* implicit */unsigned char) max(((~(min((arr_0 [6]), (arr_0 [i_0]))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_13 [i_5] [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_2 [i_5]))))))));
                        arr_19 [i_0] [i_1] = ((/* implicit */unsigned int) ((((unsigned int) ((unsigned int) arr_13 [(unsigned short)10] [(unsigned short)10] [i_2] [i_2]))) >= (((min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_5 [i_5])))) >> (((min((((/* implicit */long long int) arr_5 [i_0])), (arr_0 [(signed char)10]))) - (63LL)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_7])) && (((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_2] [i_6])), (arr_20 [(unsigned char)4] [2] [2] [i_6] [i_6]))))))), (min((max((arr_8 [i_0 + 2] [i_1] [i_2] [i_0 + 2]), (arr_8 [i_6] [i_6] [i_1] [(_Bool)1]))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_6] [i_2] [i_1] [i_0])), (arr_20 [i_0 + 2] [i_0] [i_0] [i_0 + 3] [i_0]))))))))));
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_7]))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_17 [i_6] [i_0])))))), ((+(((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0 + 3] [i_1]))))))))));
                        }
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (~(((/* implicit */int) min((((short) arr_7 [i_6] [i_0])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))))));
                        var_30 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_17 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_2]))))))), (((unsigned long long int) arr_1 [i_2]))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */short) (+(((/* implicit */int) arr_9 [8ULL] [i_8] [8ULL] [i_0]))));
                                var_32 += ((int) arr_28 [i_9] [i_8] [i_2] [3] [i_0]);
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_3 [i_0])))) != (arr_14 [i_2] [i_2]))))) == ((-(min((arr_29 [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_1]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) (((~(arr_26 [i_0 + 3] [i_1] [i_1] [i_10]))) ^ (((/* implicit */int) arr_6 [i_0 + 4] [i_0 + 4] [i_2] [i_10]))));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((_Bool) ((int) arr_6 [(unsigned short)3] [i_1] [i_2] [i_10]))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        var_36 -= ((/* implicit */unsigned char) arr_14 [i_11] [(unsigned char)4]);
                        var_37 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) < (arr_0 [i_11])))), (min((arr_4 [i_11]), (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))))));
                    }
                    arr_36 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [(short)10])), (arr_0 [i_0]))))), (max((((/* implicit */unsigned long long int) (-(arr_33 [i_2] [i_1] [i_0] [4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) - (arr_32 [i_0] [i_0] [i_1] [7U] [i_0] [7U])))))));
                    var_38 = max((((/* implicit */unsigned int) (+(max((arr_4 [i_1]), (((/* implicit */int) arr_13 [i_2] [i_1] [i_0] [i_0]))))))), (max((max((arr_31 [i_0]), (arr_3 [5ULL]))), (((arr_8 [i_0] [i_1] [12] [i_2]) ^ (((/* implicit */unsigned int) arr_4 [0U])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_39 = ((short) (!(((/* implicit */_Bool) ((long long int) arr_37 [i_12])))));
        arr_39 [i_12 + 1] = ((/* implicit */short) min((((((((/* implicit */int) arr_38 [i_12])) - (((/* implicit */int) arr_38 [i_12 + 1])))) - (((/* implicit */int) arr_38 [4])))), (((/* implicit */int) arr_38 [i_12]))));
        arr_40 [i_12] [i_12] = ((/* implicit */unsigned int) ((arr_37 [i_12]) + (min((min((((/* implicit */unsigned long long int) arr_38 [(_Bool)1])), (arr_37 [i_12]))), (((/* implicit */unsigned long long int) arr_38 [i_12]))))));
    }
    for (short i_13 = 2; i_13 < 9; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_14 = 4; i_14 < 10; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    {
                        var_40 ^= ((min((min((arr_44 [i_16] [(unsigned short)2] [i_13]), (arr_8 [i_16] [i_15] [i_14] [(_Bool)1]))), (min((((/* implicit */unsigned int) arr_9 [i_15] [(unsigned short)9] [(_Bool)1] [i_15])), (arr_33 [i_16] [(short)1] [i_14] [(_Bool)1]))))) < ((~(((unsigned int) arr_30 [i_13] [i_14] [i_15] [9ULL])))));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (!((!(((/* implicit */_Bool) max((arr_12 [i_13] [i_14] [i_15]), (((/* implicit */unsigned long long int) arr_31 [i_13]))))))))))));
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) min((min((((arr_34 [i_13]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_13 + 1] [i_14] [(signed char)3] [i_16]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_14] [i_14]))))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_21 [i_15] [i_16]))))))))))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_14] [i_16]))))) * ((+(arr_32 [i_13] [i_14] [i_15] [i_16] [i_15] [i_15]))))) & ((+((-(arr_42 [i_14 + 3])))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 13; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    {
                        arr_59 [i_13] [i_13] [i_17] [i_18] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) ((short) arr_38 [(short)3]))), (((arr_44 [i_14 + 2] [i_14 + 2] [i_17]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_18] [i_18] [i_18] [i_18])))))))));
                        var_44 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_50 [i_13] [i_17]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_13])))))) >= ((-(arr_42 [i_13])))))), (arr_23 [i_18] [i_14] [i_17] [i_17] [i_17])));
                    }
                } 
            } 
        }
        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) max((arr_51 [i_13] [i_13]), (((/* implicit */unsigned int) arr_25 [i_13 + 4] [i_13] [i_13] [i_13] [i_13])))))))))));
    }
    var_46 = ((/* implicit */long long int) (-(min((max((var_7), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_13)), (var_9))))))));
}
