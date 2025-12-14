/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14528
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
    var_11 -= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6))));
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (~(-1994417567))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (max((arr_2 [4ULL] [i_0 + 1]), (arr_2 [10] [i_1])))));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) max((arr_4 [i_0 - 1] [i_0 - 1] [i_1]), (((/* implicit */short) arr_1 [i_0])))))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_2]))));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((15701767914924966772ULL) << (((/* implicit */int) arr_1 [i_2]))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_16 += ((/* implicit */signed char) arr_2 [12U] [8]);
                    /* LoopSeq 4 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_15 [i_4] [i_0] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_4])) ? (-1667026362) : (((/* implicit */int) arr_10 [i_0 - 1]))));
                        var_17 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_4] [i_0 + 1]))));
                        var_18 = ((/* implicit */unsigned char) ((-471378587) - (-703812975)));
                        arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31191)) || (((/* implicit */_Bool) (short)-12603))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) ((var_9) / (arr_19 [i_1] [i_5 - 2] [i_5 - 2] [i_1] [i_5 - 2] [i_0])));
                        var_20 = ((/* implicit */long long int) ((short) arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                    }
                    for (unsigned int i_6 = 3; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_2 [(unsigned char)2] [(unsigned char)2])))) ? (((/* implicit */int) arr_20 [i_0 - 1] [i_0 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_26 [i_0] [9LL] [i_1] [i_0] = ((/* implicit */signed char) arr_22 [i_0] [i_0 - 1] [i_0]);
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */long long int) arr_13 [i_0] [i_6] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_6 - 1]))));
                            var_22 = ((/* implicit */int) (+(arr_7 [i_6 - 1])));
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) | (arr_0 [10LL])));
                        }
                    }
                    for (unsigned int i_9 = 3; i_9 < 12; i_9 += 1) /* same iter space */
                    {
                        arr_33 [(unsigned char)10] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_29 [i_0 + 1] [(unsigned char)0] [i_0 + 1] [(unsigned char)0] [i_0] [i_0 + 1] [i_0]);
                        arr_34 [i_0 - 1] [i_0 - 1] [0] [i_3] [i_3] [i_0 - 1] &= ((/* implicit */unsigned short) ((_Bool) arr_24 [i_0 + 1] [i_0 + 1] [i_3] [(short)2] [i_9 + 1]));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_37 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 528482304)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)0))));
                            arr_38 [i_10] [i_9] [i_0] [i_0] [i_1] [i_0] [i_0] = arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_9 - 2] [i_0] [i_9 - 1];
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_3] [i_9 - 3] [i_0] = ((/* implicit */_Bool) arr_24 [i_10] [i_0] [i_1] [i_0] [i_0 + 1]);
                            arr_40 [i_1] [i_10] [i_10] [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (var_2)));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) <= (14326712483944290286ULL)))) << ((((-(39724920U))) - (4255242364U)))));
                        }
                        for (short i_11 = 4; i_11 < 11; i_11 += 4) 
                        {
                            arr_43 [i_11 + 1] [i_11 - 3] [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0 - 1] [3LL] [i_3] [i_9] [i_11 + 2]))) : (4104146598829927091LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9] [i_9] [i_9] [i_9] [i_0])))));
                            var_25 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_0 + 1] [i_3]))));
                        }
                    }
                    var_26 = (!(((/* implicit */_Bool) arr_32 [i_0] [i_0 - 1])));
                }
                for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_13 = 2; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) arr_31 [i_13 + 1] [i_13 + 1] [i_0 - 1] [i_1] [i_1] [i_13]);
                        arr_48 [i_13] [i_13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -16384)) && (((/* implicit */_Bool) (unsigned short)3)))))));
                        arr_49 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_13 - 2] [i_13 + 1] [i_13 + 1]))));
                        var_28 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))));
                        var_29 = ((/* implicit */long long int) arr_23 [i_1] [10] [i_1] [(_Bool)1] [i_13] [i_0] [i_0 + 1]);
                    }
                    /* vectorizable */
                    for (short i_14 = 2; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        var_30 = ((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0] [i_1] [i_1] [i_0] [i_14 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0 + 1])));
                        var_31 = ((/* implicit */unsigned char) ((arr_31 [i_1] [i_1] [i_14 + 1] [i_14 + 1] [i_1] [i_14 - 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_14])))));
                    }
                    arr_53 [i_12] [i_0 - 1] [i_0] [i_1] = max((((long long int) var_4)), (((/* implicit */long long int) (~(((/* implicit */int) min((arr_41 [i_0] [i_0] [i_0 + 1] [i_0] [i_12] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                }
                /* vectorizable */
                for (short i_15 = 2; i_15 < 11; i_15 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) 9223372036854775807LL);
                    var_33 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_51 [i_15] [(short)0] [(short)0] [(short)0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_15] [i_15 + 1] [i_1] [i_0]))) : (arr_28 [i_0] [i_0 + 1] [8] [i_0] [i_15] [i_15 + 1])))));
                }
            }
        } 
    } 
}
