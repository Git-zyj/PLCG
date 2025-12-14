/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101108
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((long long int) arr_3 [i_0] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8447570252996224100ULL)) && (((/* implicit */_Bool) (unsigned char)254))))))));
                    var_14 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2]))))) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_2]))));
                    var_15 = arr_8 [i_0] [i_0] [i_2] [i_2];
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_16 |= ((/* implicit */signed char) arr_1 [i_2]);
                                var_17 = min((((arr_3 [(signed char)11] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_4]))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_1] [7LL] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_3 [1] [i_3])) ? (((/* implicit */int) arr_6 [11ULL] [i_2] [i_4])) : (((/* implicit */int) arr_2 [(unsigned short)13]))))))));
                                var_18 -= ((/* implicit */int) min((arr_10 [8ULL] [i_2] [i_4] [i_4]), (((((/* implicit */_Bool) (+(arr_11 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [4U] [(unsigned char)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)9] [i_3] [i_4]))) : (arr_11 [i_0] [6ULL] [i_2] [i_4] [14ULL] [i_4]))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4])) ? (((/* implicit */long long int) arr_9 [0] [i_1] [i_2] [i_3])) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3])))))));
                                arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) ((int) arr_3 [i_3] [i_4]))) : (((long long int) arr_6 [i_0] [i_2] [i_4]))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    var_19 -= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */int) arr_14 [i_0] [i_0] [2LL] [i_6] [i_7]);
                                var_21 = ((/* implicit */long long int) arr_20 [i_0] [i_1] [i_5] [i_6] [i_7]);
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */unsigned int) arr_18 [i_0] [(short)9] [5U] [i_5] [i_5]);
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [7U] [3U] [i_1] [i_5] [i_5] [i_5])) ? (((/* implicit */int) ((signed char) arr_9 [i_0] [i_1] [i_1] [i_5]))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)13])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_5] [i_1] [i_5])))))))));
                }
                for (int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_1] [i_8] [i_8]);
                    var_25 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1] [i_1]);
                    arr_26 [i_0] [11] [i_1] [(unsigned short)9] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [2LL] [i_1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(short)9] [i_8]))) : (arr_17 [i_0] [i_1] [10] [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_8] [i_8])) ? (arr_0 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (arr_4 [10]) : (((long long int) arr_8 [i_0] [i_1] [i_0] [i_8])));
                    arr_27 [i_0] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_8] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [5LL] [4LL])) : (((/* implicit */int) arr_2 [4]))))) ? (((/* implicit */int) arr_25 [i_0])) : (((((/* implicit */_Bool) arr_5 [4U])) ? (((/* implicit */int) arr_7 [i_0] [10LL] [i_8])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_8]))))))), (max((-298658905791210339LL), (-5726770385728824264LL)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) arr_19 [i_0] [1U] [i_0]);
                                arr_35 [i_0] [i_0] [i_9] = ((/* implicit */unsigned long long int) ((signed char) arr_18 [(unsigned char)4] [i_1] [i_8] [i_9] [i_10]));
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_17 [i_0] [i_8] [i_9] [i_10]))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) 4294967295U)), (4476830854291060164LL)))));
                                var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(101833015)))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_14 [i_0] [(unsigned char)9] [i_11] [i_12] [i_13])) ^ (((/* implicit */int) arr_25 [i_11])))))) : ((-(arr_33 [i_0] [(short)1] [i_11] [i_12] [i_13])))));
                                var_30 = ((/* implicit */unsigned int) max((var_30), (((unsigned int) ((arr_32 [i_0] [i_1] [(unsigned char)3] [i_11] [(signed char)0] [i_13]) & (((/* implicit */int) ((_Bool) arr_32 [(signed char)5] [(signed char)5] [i_11] [i_12] [(signed char)5] [i_13]))))))));
                                arr_42 [i_0] [i_1] [4ULL] [i_12] [i_13] = ((/* implicit */unsigned int) arr_32 [i_0] [i_0] [0LL] [11ULL] [i_13] [i_13]);
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) arr_25 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            for (short i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_14] [i_15] [3] [(signed char)4])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_50 [i_14] [i_15] [13] [(unsigned short)4]))))))) : (((((arr_45 [i_14]) <= (arr_46 [i_14] [(unsigned char)14] [7ULL]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_14] [i_15] [18LL] [i_16]))) / (arr_46 [i_14] [(_Bool)1] [i_16]))) : (((/* implicit */long long int) (+(31)))))))))));
                    arr_52 [i_14] [i_15] [i_16] = ((/* implicit */short) max((arr_50 [19LL] [i_14] [i_15] [(short)12]), (((/* implicit */long long int) max((arr_47 [i_14] [i_15]), (arr_47 [i_14] [i_16]))))));
                    arr_53 [i_14] [i_15] [i_14] [(unsigned char)12] = max((((/* implicit */unsigned long long int) arr_45 [(unsigned short)13])), ((~(((unsigned long long int) arr_51 [(_Bool)1] [i_14] [18LL] [18LL])))));
                    var_33 ^= ((/* implicit */signed char) arr_47 [i_15] [i_16]);
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) ((long long int) max((var_8), ((~(var_9))))));
    var_35 = ((/* implicit */long long int) var_3);
}
