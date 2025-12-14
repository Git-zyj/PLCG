/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127878
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 |= ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-1))))));
        var_13 = ((/* implicit */unsigned int) ((0LL) % (((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)78)))))))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1 + 2])) + (2147483647))) << (((9LL) - (9LL)))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (4849442849502504105LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) arr_2 [i_1 + 2]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_8 [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3] [i_2] [i_1])) / (((/* implicit */int) var_0))))) ? (max((((/* implicit */long long int) arr_5 [i_3] [i_3] [i_3])), (arr_1 [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) (signed char)-17)))))))) : (((/* implicit */long long int) var_4))));
                    var_16 = ((max((arr_1 [i_1 + 2] [i_3 + 1]), (((/* implicit */long long int) arr_7 [i_1 - 1] [i_1])))) / (((((/* implicit */_Bool) min((7LL), (((/* implicit */long long int) 2325370446U))))) ? (((((/* implicit */_Bool) 4849442849502504124LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (12LL))) : (((/* implicit */long long int) 255)))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_6) - (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)1))))))))) ? ((~(((/* implicit */int) (unsigned short)2047)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-122)))) == ((~(arr_7 [i_1] [(_Bool)1])))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            arr_12 [i_1] = ((/* implicit */int) (((((+(((/* implicit */int) arr_9 [i_1] [i_4])))) <= (((((/* implicit */_Bool) arr_1 [i_1] [i_4])) ? (var_9) : (((/* implicit */int) arr_2 [i_4])))))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */_Bool) (-(arr_11 [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_4]))) : (((unsigned long long int) arr_6 [i_1] [i_1] [i_4] [i_4]))))));
            arr_13 [i_1] [i_4] [i_4] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_4])) ? (((/* implicit */long long int) -829590388)) : (max((arr_1 [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) ((arr_4 [i_1]) <= (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]))))))));
        }
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 2])) ? (arr_11 [i_1] [i_1 + 2]) : (arr_11 [i_1] [i_1 + 2])))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_11 [i_1] [i_1 + 2]))) : (max((arr_11 [i_1] [i_1 + 2]), (((/* implicit */unsigned long long int) (short)31180)))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        var_19 = (i_5 % 2 == 0) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_1 [i_5] [i_5]), (((/* implicit */long long int) arr_2 [i_5]))))) ? (var_9) : ((-(((/* implicit */int) var_5)))))), (((((255) >> (((arr_7 [i_5] [i_5]) + (827904055))))) ^ ((~(((/* implicit */int) var_7))))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_1 [i_5] [i_5]), (((/* implicit */long long int) arr_2 [i_5]))))) ? (var_9) : ((-(((/* implicit */int) var_5)))))), (((((255) >> (((((arr_7 [i_5] [i_5]) + (827904055))) - (494462234))))) ^ ((~(((/* implicit */int) var_7)))))))));
        arr_16 [i_5] = ((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [i_5]);
        var_20 &= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4849442849502504112LL)) ? (((/* implicit */int) arr_2 [i_5])) : (254)))))) ? (((((/* implicit */_Bool) 2047LL)) ? (((/* implicit */int) arr_9 [i_5] [i_5])) : (var_9))) : (((/* implicit */int) ((arr_11 [i_5] [i_5]) < (arr_11 [i_5] [i_5])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6])) ? (arr_6 [i_6] [6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))) + (arr_17 [i_6]))))))) == (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)73)) != (((/* implicit */int) var_0))))), (arr_3 [i_6]))))));
        var_21 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) ((arr_17 [i_6]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6])))))));
    }
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 9227348118882674077ULL))));
}
