/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157078
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
    var_12 &= ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */unsigned char) ((short) arr_0 [i_0]));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                            {
                                var_14 |= ((/* implicit */unsigned int) (-(max((arr_0 [i_4]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                                var_15 ^= ((/* implicit */unsigned char) min((9145889201793014860ULL), (((/* implicit */unsigned long long int) 536870911U))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                            {
                                var_16 -= ((/* implicit */int) var_4);
                                var_17 -= ((/* implicit */unsigned short) -13LL);
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_8 [i_5] [i_5] [i_3 - 1] [i_5] [i_3 - 1])))) ^ (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_11 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((signed char) arr_2 [i_1] [i_2] [i_3]))))))))));
                            }
                            /* vectorizable */
                            for (short i_6 = 4; i_6 < 9; i_6 += 1) 
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) var_8);
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_6] &= ((/* implicit */unsigned short) (~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [2])));
                            }
                            for (unsigned int i_7 = 1; i_7 < 7; i_7 += 1) 
                            {
                                var_20 &= ((/* implicit */long long int) ((((arr_10 [(unsigned char)0] [(unsigned char)0] [i_2] [(unsigned short)4] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [(signed char)8] [i_7 + 3]))))) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_7]) : (arr_1 [i_0] [i_1])));
                                arr_19 [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_7]))))) == (((unsigned int) (~(((/* implicit */int) var_9)))))));
                                var_21 ^= ((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_0] [i_3] [i_7] [i_0] [i_1]);
                            }
                            /* LoopSeq 2 */
                            for (unsigned short i_8 = 4; i_8 < 9; i_8 += 3) 
                            {
                                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 536870918U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32755))) : (3758096384U)));
                                var_23 ^= ((short) ((min((((/* implicit */unsigned long long int) var_6)), (var_5))) * (((/* implicit */unsigned long long int) min((arr_21 [i_0] [i_1]), (((/* implicit */unsigned int) var_4)))))));
                                var_24 -= ((/* implicit */_Bool) arr_10 [(short)8] [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 1]);
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                            {
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_10))));
                                var_26 &= ((/* implicit */_Bool) var_3);
                                arr_25 [(short)4] [i_1] [i_1] [i_1] [i_3] [i_9] [i_1] |= ((unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1] [(short)4] [i_1 + 1]))));
                            }
                            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_10 [(signed char)4] [(signed char)4] [i_1] [i_2] [(signed char)4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 536870912U)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18571)) ? (24U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) arr_10 [4] [4] [(short)2] [(short)2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_2] [i_3]))) : (var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1 - 1] [6ULL] [i_3 - 3] [i_3 - 2] [i_3]))) / (max((536870897U), (((/* implicit */unsigned int) (signed char)93)))))))));
                            arr_26 [i_0] [i_0] [i_2] [i_3 + 2] [i_2] [i_2] &= ((/* implicit */short) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 ^= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((short) var_5))), (var_5))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(var_5))))))));
    /* LoopNest 2 */
    for (long long int i_10 = 2; i_10 < 11; i_10 += 3) 
    {
        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            {
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_30 [i_10 - 2] [i_11]))));
                arr_34 [i_10] [0] |= ((/* implicit */unsigned short) arr_29 [i_10] [i_11]);
            }
        } 
    } 
}
