/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109181
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
    var_16 = ((((/* implicit */_Bool) -4028641350187529409LL)) ? (((max((((/* implicit */long long int) var_3)), (var_13))) ^ (((long long int) var_4)))) : (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)121)))), (((((/* implicit */int) var_11)) * (((/* implicit */int) var_0))))))));
    var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((long long int) (unsigned short)33431));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) (+(arr_5 [i_1 - 1] [i_1 + 2] [i_1])));
            var_19 = ((/* implicit */_Bool) ((long long int) arr_3 [i_1 - 1] [i_1 - 2]));
            arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_4 [(signed char)13]))))) & (arr_1 [i_1 - 1])));
        }
        for (unsigned char i_2 = 4; i_2 < 21; i_2 += 2) 
        {
            arr_11 [i_0] [i_0] [21LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_15) : (arr_5 [i_2 - 2] [i_2] [i_2])));
            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)30971)) && (((/* implicit */_Bool) arr_3 [i_2 - 3] [i_2 - 4]))));
        }
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_18 [2U] [i_3 - 1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 256763770U)))));
                var_21 = (i_4 % 2 == 0) ? (((/* implicit */unsigned long long int) ((arr_14 [i_4]) << (((((/* implicit */int) ((unsigned short) 562106456))) - (4184)))))) : (((/* implicit */unsigned long long int) ((((arr_14 [i_4]) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) 562106456))) - (4184))))));
                var_22 = ((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [13]);
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_13 [5U] [i_3])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13959)))))))));
                arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1])) < (((/* implicit */int) ((var_7) > (var_9))))));
            }
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_0))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0])) * (((/* implicit */int) arr_6 [(_Bool)1]))))) ? ((-(((/* implicit */int) (short)18748)))) : (((/* implicit */int) (unsigned char)224))));
            arr_20 [(_Bool)1] [i_3] [i_0] = (+(((/* implicit */int) arr_16 [i_3 - 2] [(unsigned short)20])));
            /* LoopSeq 2 */
            for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */int) arr_23 [i_0] [(short)15]))))) && (((/* implicit */_Bool) arr_15 [i_6 + 2] [i_6 - 1] [i_7] [i_6 - 1])))))));
                            var_27 &= ((/* implicit */int) ((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_3 - 1] [i_0] [(_Bool)1] [i_0])))));
                            var_28 = ((/* implicit */signed char) ((_Bool) arr_16 [i_3 + 2] [i_7]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    arr_30 [(_Bool)1] [i_3] [i_5 - 1] [i_8] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)7])))))) >= (((arr_15 [i_0] [i_3] [i_8] [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_8])))))));
                    arr_31 [i_5] [(unsigned char)11] [(_Bool)1] [i_5] [i_5 - 3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_3 - 1] [i_5 - 3])) - (((/* implicit */int) (unsigned short)1))));
                    var_29 = ((/* implicit */short) (unsigned short)45999);
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_35 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_0] [i_5 + 1] [(signed char)7] [(unsigned short)20] [i_8] [(short)8]))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_14 [i_8]))))));
                        arr_36 [i_3 + 3] [i_3 - 1] [i_5 + 1] [(signed char)21] [0LL] [i_9] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                    }
                    for (int i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */int) var_10);
                        var_32 = ((/* implicit */signed char) var_9);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        arr_42 [i_8] [i_3 + 3] [(_Bool)1] [i_8] [i_0] [i_0] = ((/* implicit */short) ((((long long int) arr_28 [16LL] [i_3 + 3] [i_8] [i_8])) << (((((/* implicit */int) arr_3 [i_0] [i_3 - 1])) - (34873)))));
                        arr_43 [i_5] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) (unsigned short)45999)));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (((-(arr_41 [i_11] [i_8] [17LL] [i_5] [9LL] [i_0] [i_0]))) - ((-(((/* implicit */int) arr_3 [i_3 + 3] [i_5 - 1])))))))));
                    }
                }
                for (unsigned char i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    arr_46 [i_0] [i_0] [i_0] [i_3] [i_5 + 1] [(unsigned short)18] = ((/* implicit */_Bool) arr_9 [i_3] [i_12]);
                    arr_47 [i_0] [i_3] [i_5] [i_12] = ((/* implicit */short) arr_39 [i_12] [(short)21] [(unsigned char)12] [i_0] [20LL]);
                }
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_15 [i_0] [i_3] [4U] [i_5]) : (arr_15 [i_0] [i_3 + 2] [(unsigned short)18] [i_3 + 2]))))));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_5])) ? (((arr_9 [i_3] [(short)5]) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned char)12] [(unsigned char)12]))))) : (arr_14 [(signed char)14])));
                arr_48 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_3 + 3] [i_5 - 2])) && (((/* implicit */_Bool) arr_32 [i_3 - 2] [i_5 - 3]))));
            }
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_36 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_26 [(unsigned char)5] [i_13] [i_3] [i_0] [i_0]))));
                var_37 &= ((/* implicit */unsigned int) ((((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_34 [13LL] [i_13] [i_13] [i_13] [i_13])) + (2147483647))) << (((((/* implicit */int) arr_4 [i_13])) - (5073))))))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        {
                            arr_57 [i_0] [i_3] [2] [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23))) & (arr_45 [(_Bool)1] [1LL])))));
                            var_38 = ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)0)));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_3 - 2] [i_3 + 2] [i_3 - 2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_13] [i_13]))) : (((arr_12 [i_0]) ? (((/* implicit */unsigned long long int) var_15)) : (arr_53 [i_0] [i_3] [7LL] [i_15])))));
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (-(((((/* implicit */int) arr_22 [i_0] [i_0] [(_Bool)1] [(unsigned short)6])) | (((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */long long int) arr_28 [i_3 + 3] [i_3] [i_3 + 3] [(unsigned char)7]);
            }
        }
        for (short i_16 = 3; i_16 < 21; i_16 += 2) 
        {
            arr_61 [(unsigned short)7] [i_0] [i_16 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32111)) & (((/* implicit */int) arr_29 [i_0] [i_16 + 1] [i_0]))))) : (var_1)));
            var_42 = ((/* implicit */unsigned short) ((long long int) 2147483616));
        }
        arr_62 [(unsigned char)13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_4)))));
        arr_63 [9U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_0] [(unsigned char)14] [(unsigned char)14] [(_Bool)1] [i_0]))))) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_34 [(short)6] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_43 = ((/* implicit */long long int) var_2);
}
