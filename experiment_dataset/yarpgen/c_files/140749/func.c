/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140749
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) ((_Bool) 10901507988495125013ULL)))))) : (((unsigned int) ((unsigned char) var_9)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 + 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0 - 2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((int) var_13))) : (arr_7 [i_0 + 2] [i_1] [i_1] [i_2]));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1022385495U)) ? (12257642267909515779ULL) : (6189101805800035811ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] = arr_14 [i_3 - 1] [i_3];
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    arr_20 [i_3] [i_4] [i_4] [i_3] = var_8;
                    arr_21 [i_3] [(short)14] [i_5] [i_3] = ((int) arr_2 [i_3 + 1]);
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        arr_24 [i_3 + 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_14 [i_3 - 2] [i_3 - 2]))));
                        arr_25 [(unsigned short)0] [i_4] [i_4] [i_5] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_6 [i_3 - 1] [i_3] [i_3 + 2])));
                        arr_26 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_16 [i_3 - 2])) : (((/* implicit */int) arr_16 [i_3 - 2]))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_4])))));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        arr_30 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22314))) : (1568340070236200135ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 1]))) : (var_10)));
                        arr_31 [i_3] [i_4] [i_3] [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) (unsigned short)41375)) ? (((/* implicit */unsigned long long int) var_3)) : (6189101805800035836ULL))) : (((/* implicit */unsigned long long int) arr_10 [i_4] [i_5] [i_4] [i_4]))));
                        var_17 = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                    {
                        arr_34 [i_3] [i_4] [i_4] [i_5] [2ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3 - 2])) ? (var_13) : (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned int) var_0))))));
                        var_18 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_4] [i_3] [i_8]))) : (var_12));
                        arr_35 [i_4] [7LL] [(unsigned char)6] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_8] [i_4] [i_3]) : (((/* implicit */unsigned int) arr_22 [i_3] [i_3] [i_5] [i_3]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            arr_40 [i_3] [i_4] [i_4] [(unsigned char)10] [i_4] &= ((/* implicit */signed char) arr_1 [i_4]);
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_39 [2U] [(unsigned char)10] [i_5] [13ULL] [i_9] [i_9])) ? (arr_29 [i_4]) : (((/* implicit */unsigned long long int) var_4))))))));
                        }
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) var_5);
        var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 15; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_10 + 2])) ? (arr_29 [i_10]) : (arr_42 [i_10] [i_11 - 2])));
            arr_48 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [(short)14] [i_11] [i_11 - 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0))))));
            arr_49 [i_10] [i_10] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_10 + 1])) ? (arr_19 [i_10 - 2]) : (4193257332U)));
        }
        arr_50 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_10] [(unsigned char)4] [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
        arr_51 [i_10] = ((/* implicit */unsigned int) var_11);
        arr_52 [i_10] [(short)1] = ((/* implicit */int) ((short) arr_36 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 + 2]));
        arr_53 [i_10 - 2] [i_10] = ((/* implicit */int) ((unsigned int) var_14));
    }
    for (short i_12 = 3; i_12 < 24; i_12 += 4) 
    {
        arr_57 [i_12] = ((/* implicit */int) arr_55 [i_12] [i_12 - 3]);
        arr_58 [i_12 - 2] [i_12] = ((/* implicit */short) var_14);
        var_23 += ((/* implicit */int) arr_55 [18U] [i_12 - 1]);
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (10901507988495124992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_10) : (((/* implicit */long long int) var_13))));
    var_25 = ((/* implicit */int) ((unsigned long long int) ((long long int) var_13)));
}
