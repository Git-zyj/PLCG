/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146720
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_1 - 1] [i_0] = ((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2]);
            var_20 = ((/* implicit */_Bool) arr_0 [15U] [15U]);
            arr_7 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)7))));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])) - (((/* implicit */int) arr_1 [i_1 - 3] [i_1]))))));
        }
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
        arr_9 [i_0] [(short)19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-32435)), (var_1)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [14ULL] [i_2] [i_2]))))) : (arr_4 [i_2] [i_2] [i_2])))) ? (18038841720405394480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_13)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)13)))))))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 8; i_3 += 4) /* same iter space */
        {
            arr_16 [i_3] = ((((((/* implicit */_Bool) arr_12 [i_2] [i_3 + 2])) ? (((/* implicit */int) arr_12 [9] [i_3 - 1])) : (((/* implicit */int) arr_15 [i_2] [i_3 - 1])))) - (((arr_15 [i_3] [i_3 + 2]) ? (((/* implicit */int) arr_12 [(short)6] [i_3 - 1])) : (((/* implicit */int) arr_12 [i_3] [i_3 + 2])))));
            arr_17 [i_3] [i_3 - 1] [i_3] = ((/* implicit */short) (~((+(max((arr_11 [i_2]), (((/* implicit */long long int) arr_0 [i_2] [i_3]))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 6; i_6 += 1) 
                    {
                        {
                            arr_27 [i_3] [i_3] [i_4] [i_5] [i_4] [2U] [i_5] = ((/* implicit */_Bool) ((short) arr_5 [i_2] [(unsigned short)12] [(unsigned short)12]));
                            var_22 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_25 [i_6] [i_6] [i_6] [i_6] [i_6 + 3])))), (((/* implicit */int) arr_5 [i_6] [i_6] [i_6 + 1]))));
                            var_23 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41278))) ^ (15074070302396367172ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3])))))) ? ((+(arr_4 [i_4 + 1] [i_4 + 1] [i_6]))) : (((/* implicit */unsigned long long int) ((((arr_1 [(short)16] [(short)0]) ? (((/* implicit */int) arr_21 [9LL] [i_4 + 1] [i_5] [(unsigned short)7])) : (((/* implicit */int) (signed char)46)))) ^ (((/* implicit */int) var_14))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) max((((/* implicit */int) arr_21 [6LL] [i_3] [6LL] [i_3])), (((((/* implicit */int) arr_26 [i_3])) * (((/* implicit */int) arr_26 [i_3]))))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(short)5] [i_2] [i_3 + 1] [i_3]))) != (((unsigned long long int) arr_0 [i_3 - 1] [i_2])))))));
        }
        for (long long int i_7 = 1; i_7 < 8; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) max((((short) (~(((/* implicit */int) (unsigned short)41291))))), (((/* implicit */short) arr_30 [i_8] [i_8 - 1] [i_8] [i_8 - 1]))));
                arr_34 [i_8] [i_7] [i_7] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_8]))))) ? (arr_11 [i_7]) : (arr_19 [i_8]))) + (((/* implicit */long long int) max((max((1288202997U), (((/* implicit */unsigned int) arr_24 [i_2] [i_2] [i_7 - 1] [i_8] [i_8])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [10] [i_7 + 1])) / (((/* implicit */int) arr_5 [i_8] [i_7] [i_2]))))))))));
            }
            arr_35 [i_2] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_28 [i_7] [i_7])))));
            var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_10)))) ? (arr_2 [(unsigned char)6]) : (((/* implicit */int) ((((/* implicit */int) ((short) (signed char)-1))) == (((/* implicit */int) arr_12 [i_2] [i_2])))))));
            var_28 -= ((/* implicit */unsigned long long int) ((long long int) max(((+(var_9))), (((/* implicit */unsigned long long int) arr_25 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])))));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (var_19)));
        }
        arr_36 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_33 [i_2] [1] [i_2]) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) arr_15 [i_2] [i_2]))))) ? ((-(((/* implicit */int) arr_12 [i_2] [i_2])))) : (max((((/* implicit */int) arr_5 [i_2] [i_2] [i_2])), (arr_31 [i_2])))))) ? (((unsigned long long int) (((_Bool)1) ? (arr_22 [i_2] [i_2] [(signed char)2] [i_2]) : (var_3)))) : (max((((/* implicit */unsigned long long int) arr_15 [1ULL] [i_2])), (((((/* implicit */_Bool) var_19)) ? (15209342523663419386ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    }
    for (short i_9 = 1; i_9 < 19; i_9 += 4) 
    {
        var_30 -= ((/* implicit */_Bool) arr_0 [i_9] [i_9]);
        arr_41 [i_9 + 2] [i_9 + 2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) (_Bool)0))), (((unsigned long long int) arr_38 [i_9] [i_9 - 1]))))) ? (16383) : ((~(((/* implicit */int) ((short) arr_37 [i_9] [i_9])))))));
        arr_42 [i_9] [i_9] = ((/* implicit */_Bool) (short)13170);
        arr_43 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_9 + 2] [i_9 - 1]) ? (((/* implicit */int) arr_1 [i_9 + 1] [i_9])) : (((/* implicit */int) arr_1 [i_9 - 1] [i_9]))))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_9])))) : (((((/* implicit */_Bool) ((3006764317U) + (((/* implicit */unsigned int) arr_40 [i_9] [(_Bool)1]))))) ? ((+(12284751730886891979ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9 + 1] [i_9 - 1])))))));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((max((((/* implicit */unsigned long long int) var_17)), (var_4))), (((/* implicit */unsigned long long int) var_7))))));
}
