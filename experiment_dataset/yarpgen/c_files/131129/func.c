/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131129
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] [(_Bool)1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                    arr_9 [i_0] [(_Bool)1] [i_2] [13] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(var_7))))));
                                var_12 = ((/* implicit */unsigned int) (+((-(((((/* implicit */int) var_4)) * (((/* implicit */int) arr_13 [13] [5] [5] [5] [(unsigned short)21] [4] [i_0]))))))));
                                var_13 ^= ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_5] = (!(((/* implicit */_Bool) max((min((var_0), (((/* implicit */int) var_8)))), (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                                arr_28 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7 - 1] [i_0] [i_7 - 1] [i_7 + 1] [i_7 + 1])))))));
                                arr_29 [i_0] [i_0] [i_5] [i_5] [(signed char)22] = ((/* implicit */short) ((signed char) (+(var_0))));
                                var_14 = ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_15 -= ((/* implicit */short) (_Bool)1);
                        var_16 = ((/* implicit */short) ((signed char) (+((+(((/* implicit */int) arr_23 [i_5] [i_5] [14LL] [i_5] [8U] [(signed char)21])))))));
                    }
                }
                /* vectorizable */
                for (signed char i_9 = 3; i_9 < 22; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 3; i_10 < 19; i_10 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_10 + 4] [i_9] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [(unsigned char)6] [(unsigned char)6] [(unsigned char)15] [i_10 - 2])) : (((/* implicit */int) var_5)))))));
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9] [(signed char)9] [i_9 + 1])) ? (arr_32 [i_9 - 2] [(short)12] [i_9 - 3] [i_9] [(short)12] [i_9 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [(signed char)8] [6U] [(signed char)8] [i_9 - 2]))))))));
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_32 [i_0] [i_0] [(signed char)17] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((unsigned int) arr_34 [i_0] [i_1] [i_9])) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned short)10] [i_9 + 1] [2ULL] [i_9] [14] [i_9 - 2]))))))));
                    }
                    arr_39 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [22U] [19U])) : (((/* implicit */int) arr_4 [i_0] [(signed char)11]))))));
                }
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((arr_24 [7] [8LL] [i_1] [i_0] [(signed char)2] [i_0] [i_0]), (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((arr_42 [11ULL] [i_1] [11ULL] [(signed char)18] [(unsigned char)17]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) >= ((~(((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) arr_19 [16U] [i_1] [i_12] [i_13])) ? (arr_19 [(unsigned char)2] [i_1] [i_12] [i_13]) : (arr_19 [(short)10] [i_1] [i_1] [i_1]))))))));
                            arr_44 [11] [11] [i_0] [i_13] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) arr_21 [i_0] [22LL] [i_12] [(_Bool)1] [i_0] [i_13])) : (arr_24 [i_0] [i_0] [(signed char)13] [i_0] [i_0] [(signed char)17] [i_0]))), (((/* implicit */long long int) max((((/* implicit */int) min((arr_22 [i_13] [i_0] [i_0] [i_0]), (((/* implicit */short) (signed char)-64))))), (var_0))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (arr_40 [(unsigned short)12] [22] [i_1] [(unsigned short)12])))) ? (((((/* implicit */_Bool) arr_25 [i_0] [(short)2] [(signed char)22] [i_13])) ? (((/* implicit */long long int) var_0)) : (arr_40 [(short)2] [i_12] [i_1] [(short)2]))) : ((+(arr_40 [20ULL] [(short)0] [i_1] [20ULL]))))))));
                            var_24 = min(((+(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_2 [i_0] [i_0])))))), ((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) arr_25 [20] [(signed char)6] [i_0] [20U])) : (((/* implicit */int) arr_25 [i_1] [14U] [14U] [(unsigned short)18]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_14 = 1; i_14 < 18; i_14 += 2) 
    {
        arr_48 [i_14 - 1] [i_14] = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_35 [i_14] [i_14 + 3] [i_14] [(unsigned char)5] [i_14 + 2] [i_14])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_35 [i_14] [(unsigned char)19] [i_14] [i_14] [i_14 + 3] [(unsigned char)13]))))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                {
                    arr_55 [i_15] = ((/* implicit */short) (-((~(arr_18 [i_14] [0U])))));
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 21; i_17 += 4) 
                    {
                        for (unsigned char i_18 = 3; i_18 < 21; i_18 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((arr_30 [i_15] [i_15] [2LL] [i_15] [(_Bool)1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_14 + 2])))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [18] [i_18] [(signed char)18] [i_18 - 2])) ? (((/* implicit */int) arr_61 [(unsigned short)2] [4LL] [i_16] [i_16] [2ULL])) : (((/* implicit */int) var_1)))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
