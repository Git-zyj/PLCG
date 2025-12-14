/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150822
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 3]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) % (arr_1 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14333057987640016994ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)200))))) : (((unsigned int) var_6)));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_2] [i_2] [2U] [i_2] [i_3] = ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (arr_8 [i_3 - 1] [i_2] [i_2] [(signed char)5] [(signed char)16] [i_0]) : ((-(arr_8 [i_0] [i_1] [(signed char)16] [i_2] [9U] [(signed char)14]))));
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((arr_8 [i_0] [i_1] [i_0] [i_3] [i_0 + 1] [i_1]) - (1083081085U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)22)) >> (((((/* implicit */int) arr_2 [i_0 - 2])) - (37)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [(signed char)2] [i_3]))) : (arr_7 [i_2])))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])));
            arr_13 [(signed char)6] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (0U) : (arr_0 [i_0 - 1])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            var_20 += ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) / (arr_0 [i_5 + 1]));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)123))));
        }
    }
    var_22 = ((((/* implicit */_Bool) (signed char)-123)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) var_3)) ? (10ULL) : (((/* implicit */unsigned long long int) 2647850409U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (var_15)))));
}
