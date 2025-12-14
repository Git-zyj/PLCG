/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132832
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) arr_7 [i_1 + 1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52))) : (arr_0 [i_0 - 2] [i_1 - 1])))) ? (min((-8), (arr_4 [i_0] [i_2 + 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) var_11)))))))));
                    arr_8 [i_2] = ((/* implicit */long long int) max((4294967295U), (1825529929U)));
                    arr_9 [i_2] = ((/* implicit */signed char) ((((((((/* implicit */int) var_7)) | (arr_5 [i_0 - 2]))) + (2147483647))) << (((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 3]))) - (788444592)))));
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        arr_13 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_2)), (var_10)));
                        var_15 = min((min((8188U), (1825529928U))), (min((((/* implicit */unsigned int) (!((_Bool)1)))), (1148037004U))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 24; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_2] [i_0] [19ULL] [i_2 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)71)) / (((/* implicit */int) var_12))))));
                        arr_18 [i_0] [i_1] [i_4] [14] [i_4] &= ((((/* implicit */_Bool) max((var_0), (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1]))))) : (((/* implicit */int) ((1872123720U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94)))))));
                        arr_19 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) var_3);
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (4294967295U) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (8603521598246151199LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 + 1])) ? (arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 1] [(short)2]) : (1710321140U))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 368499693))))), ((unsigned char)163))))));
                        arr_29 [i_8] [i_6 + 2] [i_7 - 1] [i_8 - 1] = ((/* implicit */unsigned int) (-(max((((((/* implicit */long long int) arr_20 [i_5])) + (-269134996470249490LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)93)))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 3) 
                        {
                            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)-1))) ? ((-(var_5))) : ((-(((/* implicit */int) var_3))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_11 [i_8 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((2097151U), (((/* implicit */unsigned int) arr_27 [i_6 - 1] [i_8 - 1] [i_8 - 1] [i_5 - 2]))))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_0 [i_10] [i_6]) << (((((/* implicit */int) (short)-1)) + (2)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_25 [i_5] [4ULL] [i_7] [i_7])))) : (((((/* implicit */_Bool) (signed char)-35)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))))), (((/* implicit */unsigned long long int) arr_32 [i_10 - 1] [i_10] [i_8 + 1] [i_8 + 1] [i_7 + 1])))))));
                            arr_34 [i_8] [i_8] [i_8] [(_Bool)0] [0U] = 0U;
                            var_22 ^= arr_30 [i_5] [i_7] [i_7 - 1] [i_8];
                        }
                        for (unsigned long long int i_11 = 3; i_11 < 8; i_11 += 1) /* same iter space */
                        {
                            var_23 = (((+(((/* implicit */int) (unsigned char)251)))) >> ((((-(arr_14 [i_7 + 1] [3] [i_6] [4]))) - (95010145U))));
                            var_24 = ((/* implicit */long long int) ((short) min((((/* implicit */unsigned short) arr_27 [i_6 + 2] [i_5 + 1] [i_7 - 1] [6U])), (((unsigned short) -2005292058)))));
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_1 [i_5 - 2])), (var_10))), (((/* implicit */unsigned long long int) (~(min((4294967291U), (((/* implicit */unsigned int) var_8)))))))));
                            arr_41 [i_8] [i_5] [i_5] [(signed char)1] [i_5] [i_12] = ((/* implicit */_Bool) var_11);
                            var_26 = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) arr_24 [i_5]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]))) ^ (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((((((/* implicit */_Bool) arr_40 [i_5] [i_6 + 1])) ? (((/* implicit */unsigned long long int) 3259300931U)) : (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        }
                        var_27 = ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_11 [i_5 - 2]))));
    }
    var_29 *= ((/* implicit */signed char) (~(((int) min((var_7), (((/* implicit */short) var_8)))))));
    var_30 = ((/* implicit */unsigned int) var_7);
}
