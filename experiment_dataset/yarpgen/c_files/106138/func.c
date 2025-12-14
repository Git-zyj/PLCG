/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106138
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (short)10553)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (min((var_0), (((/* implicit */int) var_13))))))) : (min((((/* implicit */unsigned long long int) (short)-16774)), (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))))));
    var_17 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned int) (short)1464);
                    arr_9 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_1 + 2] [i_0 - 3])) : (arr_0 [i_0]))) : (((/* implicit */int) arr_4 [i_2 + 1] [i_1 + 2] [i_0 - 1]))));
                }
            } 
        } 
        var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) arr_1 [0])) : (arr_0 [(unsigned char)6]))))));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [(signed char)6]))) ? ((~(((/* implicit */int) arr_7 [i_0] [(unsigned char)6] [(unsigned char)6] [i_0])))) : (((((/* implicit */int) arr_7 [8] [(_Bool)0] [(_Bool)0] [i_0 + 4])) + (((/* implicit */int) arr_6 [i_0 + 4] [i_0 + 4] [i_0 + 4]))))));
        var_21 |= ((/* implicit */short) arr_0 [(_Bool)1]);
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 4]) || (arr_5 [i_0 + 2] [i_0 + 4] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0 + 2] [i_0 - 3] [i_0 + 4]), (arr_5 [i_0 + 1] [i_0 + 4] [i_0 - 3]))))) : (((var_6) >> (((var_7) + (1782544209)))))));
    }
    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((_Bool) (~(arr_11 [i_3 + 2]))));
        arr_15 [(short)10] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (short)-1489))))) ? (((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3]))) : (arr_11 [(unsigned short)9]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)1484)) + (((/* implicit */int) (unsigned char)183))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3 + 2])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5)))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_11 [i_3 + 2]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))))), (((((/* implicit */_Bool) arr_13 [i_3 + 2])) ? (arr_14 [i_3 + 3] [i_3 + 1]) : (arr_11 [i_3 - 1]))))))));
    }
    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7 - 1] [i_6 + 1] [i_7 - 2] [i_6 + 1])) ? ((+(arr_20 [(unsigned char)16] [i_6]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4] [i_4])))))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5 - 1])) && (((/* implicit */_Bool) var_3))))))) : (((((/* implicit */_Bool) ((arr_25 [0]) / (((/* implicit */int) (unsigned char)202))))) ? (((/* implicit */int) arr_27 [i_7 - 2] [i_6] [i_5 + 1] [i_4])) : (((/* implicit */int) arr_22 [18U] [i_6] [18U]))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_6] [i_6] [i_6])) | (((((/* implicit */int) max(((short)28762), (var_11)))) ^ (((/* implicit */int) arr_23 [i_7 + 1] [i_5 - 1] [10] [i_4 + 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */int) arr_21 [i_6 - 1] [i_5 - 2]);
                        /* LoopSeq 2 */
                        for (int i_9 = 1; i_9 < 16; i_9 += 1) /* same iter space */
                        {
                            var_27 -= ((/* implicit */int) arr_32 [i_9 + 3] [i_8 - 1] [i_8] [i_5 + 1] [i_4]);
                            arr_33 [i_6] [(unsigned short)2] [i_6 + 1] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_31 [i_6]) : (((/* implicit */int) ((var_8) < (((/* implicit */int) (unsigned char)255)))))));
                            var_28 ^= ((/* implicit */unsigned long long int) ((((int) arr_24 [i_9] [i_8] [i_6] [i_4])) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [16LL] [i_5] [i_4]))) <= (arr_26 [i_9] [i_8] [i_6 + 1] [8ULL] [i_4]))))));
                            var_29 = ((/* implicit */signed char) arr_27 [i_8 + 3] [i_8 + 3] [i_6 + 1] [i_4 - 1]);
                        }
                        for (int i_10 = 1; i_10 < 16; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10 - 1] [i_8 + 2] [i_5 + 1] [i_5] [i_5 - 1]))) >= (11004284208676920098ULL))))));
                            var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_10] [i_8] [i_6] [i_4] [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_8 + 2] [i_6] [10LL] [i_5] [3ULL]))))))) < (((((/* implicit */_Bool) (short)1484)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))) : (arr_35 [i_10] [(unsigned char)12] [i_6] [(unsigned char)12] [(unsigned char)12])))));
                        }
                    }
                    for (unsigned short i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        var_32 = min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_30 [i_11 + 4] [i_6] [i_6] [i_6] [i_4]) : (((/* implicit */unsigned int) arr_25 [i_6])))))), ((+(min((((/* implicit */unsigned long long int) (signed char)2)), (arr_35 [i_11] [i_11] [i_5] [i_5] [i_4]))))));
                        var_33 ^= ((/* implicit */_Bool) arr_31 [i_4 + 2]);
                    }
                    for (unsigned int i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        var_34 -= ((/* implicit */signed char) var_11);
                        var_35 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38934)) & (((/* implicit */int) arr_38 [(signed char)6] [i_6] [i_5] [i_5] [(signed char)6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_12] [(_Bool)1] [i_5] [(_Bool)1] [i_4])) ? (1353430843) : (var_7)))) : (((arr_35 [i_4] [i_4] [i_5] [i_4] [i_4]) | (((/* implicit */unsigned long long int) -4304823087480513959LL))))))) ? (((arr_23 [i_12 - 2] [(_Bool)1] [i_12 - 3] [i_6 - 1]) ? (arr_26 [i_12 - 2] [i_12 - 3] [i_6 - 1] [i_4 + 1] [i_4]) : (((/* implicit */unsigned long long int) arr_30 [i_12 + 1] [(unsigned short)6] [i_6] [(unsigned short)6] [i_5 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [0U] [(_Bool)0] [(unsigned char)14] [i_5] [0U]))));
                        var_36 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_40 [i_12 - 3] [i_6] [i_6 + 1] [i_6] [i_4 + 2])) ? (((((/* implicit */_Bool) var_9)) ? (arr_16 [i_12]) : (arr_16 [i_6]))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_37 [i_12] [i_6] [i_5 - 1] [i_5] [i_5] [i_4 - 1])) : (((/* implicit */int) var_13))))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_12] [i_6] [14U] [i_6] [i_6])))))));
                        arr_42 [(unsigned short)4] [i_6 - 1] [(unsigned short)4] [(_Bool)1] [i_4 - 1] [(unsigned short)4] &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_4 + 2])) <= (((/* implicit */int) arr_19 [i_4 + 2]))))) + (((/* implicit */int) ((((/* implicit */int) arr_19 [i_4 + 2])) <= (((/* implicit */int) arr_19 [i_4 - 1])))))));
                        var_37 -= ((/* implicit */unsigned char) ((((arr_17 [i_4 + 1]) || (arr_17 [i_4 + 1]))) ? (((((/* implicit */_Bool) arr_38 [(short)12] [i_12] [i_12 + 1] [i_4] [(short)12])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) ^ (8416526689178376491LL))) : (arr_41 [13LL] [i_6 - 1] [i_4 + 1]))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_21 [16] [i_4 - 1])) ? (((/* implicit */int) arr_27 [i_12 - 1] [i_6] [12] [12])) : (((/* implicit */int) arr_23 [i_12 - 1] [i_6] [i_5] [(unsigned char)8])))), (min((((/* implicit */int) var_10)), (var_8))))))));
                    }
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_6 + 1] [2] [i_6] [i_5] [i_4]))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4])) ? (((/* implicit */long long int) arr_30 [i_6] [i_6] [i_5] [i_6] [i_4 + 1])) : (33550336LL)))) ? (((/* implicit */unsigned int) arr_18 [i_6 - 1] [i_5])) : (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)22584)))))))));
                    arr_43 [i_5] [6U] [6U] [2ULL] &= ((/* implicit */unsigned char) (signed char)2);
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_5 - 2] [i_5] [i_5 + 1] [i_5] [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5 + 1] [i_5] [i_4 + 2] [i_4 + 2] [i_4 + 2]))) : (var_1)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_32 [i_5 - 2] [i_4 + 1] [i_5 - 2] [i_5] [i_4 + 1])) : (((/* implicit */int) arr_32 [i_5 + 1] [i_5 - 1] [i_4] [i_4] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_32 [i_5 - 2] [(unsigned char)12] [i_4 + 1] [(short)18] [i_4 - 1])) ? (((/* implicit */int) arr_32 [i_5 - 2] [i_5 - 1] [i_5 + 1] [16LL] [i_4 - 1])) : (((/* implicit */int) arr_32 [i_5 - 1] [i_4 - 1] [(unsigned char)1] [3LL] [i_4 - 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_13 = 3; i_13 < 17; i_13 += 1) 
        {
            for (int i_14 = 2; i_14 < 15; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 1) 
                {
                    {
                        arr_51 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_14] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) max((max((((/* implicit */short) (signed char)-36)), (var_10))), (((/* implicit */short) arr_47 [i_14 - 2] [i_13 - 3] [i_4 - 1]))))) : (((max((((/* implicit */int) arr_17 [i_15 - 2])), (var_8))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_40 [3ULL] [i_14] [i_14] [i_14] [15])) : (((/* implicit */int) arr_48 [(unsigned char)7] [(_Bool)1] [i_13] [i_4]))))))));
                        var_40 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) ((int) arr_17 [5LL]))) ? (((/* implicit */int) max((arr_32 [i_15 - 1] [i_15 - 1] [i_14] [i_13 - 2] [i_4]), (((/* implicit */unsigned char) arr_19 [16]))))) : ((((_Bool)0) ? (((/* implicit */int) arr_36 [(unsigned char)5] [i_4])) : (((/* implicit */int) (signed char)-7)))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_39 [i_15] [i_13] [i_14] [i_13] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4879)) ? (((/* implicit */int) var_13)) : (arr_18 [i_15 - 2] [i_4])))) : (((((/* implicit */unsigned long long int) var_8)) * (arr_46 [i_14] [i_14] [i_14] [i_4 - 1]))))) - (18446744073709551535ULL)))));
                        arr_52 [i_14] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_44 [i_4]))) ? (((arr_50 [i_14] [i_14 + 4] [i_14] [i_13 + 1] [i_4 + 1]) ? (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) arr_28 [(unsigned short)10] [i_14] [i_14] [i_13] [i_13] [i_4])) : (((/* implicit */int) arr_24 [(unsigned short)5] [(unsigned char)15] [i_4] [i_4])))) : (((/* implicit */int) max(((_Bool)1), (arr_50 [(short)3] [i_14] [i_14] [i_13 + 1] [i_4])))))) : (((((/* implicit */_Bool) arr_18 [i_14 + 1] [i_13 - 3])) ? (arr_18 [i_14 + 4] [i_13 + 2]) : (arr_18 [i_14 + 3] [i_13 + 2])))));
                    }
                } 
            } 
        } 
    }
}
