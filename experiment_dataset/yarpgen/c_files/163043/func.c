/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163043
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    var_15 = ((/* implicit */signed char) (-(arr_3 [i_1 - 2] [i_1 + 1])));
                    var_16 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_2 - 1] [i_1 + 2] [i_2 + 3])));
                    arr_7 [i_0] [i_0] [i_2 + 2] [i_1 - 1] = ((/* implicit */signed char) ((arr_1 [i_1 - 2] [i_2 + 3]) >> (((arr_1 [i_0] [i_0]) - (4857619999443436887ULL)))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [21U] [i_2 + 1] [i_1 - 4] [23U]))));
                        arr_12 [13LL] [0ULL] [4U] [i_2 - 1] [7LL] = ((/* implicit */unsigned int) ((arr_1 [12] [i_1 - 3]) << (((((unsigned long long int) arr_2 [i_0])) - (259323420ULL)))));
                        arr_13 [(unsigned short)11] [i_1 - 4] [i_2 + 3] [i_3] = ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (((/* implicit */int) (signed char)0)));
                    }
                    for (unsigned int i_4 = 4; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_0] [i_1 - 3] [i_2 + 3] [i_4 - 4] = ((/* implicit */unsigned int) var_7);
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_4 - 2])))))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1 - 2] [(signed char)14] [(signed char)4]))));
                        }
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [9U] [i_0])) + (((/* implicit */int) arr_4 [i_6 - 1] [i_4 - 2] [i_0]))));
                            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) >> (((2305842734335787008LL) - (2305842734335787007LL)))))) ? (9223372036854775807LL) : (((/* implicit */long long int) 3898270368U))));
                        }
                        arr_22 [16] [6U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 3] [(_Bool)1] [i_4 - 3] [i_2 - 1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_2 - 1] [i_1 + 1])));
                        arr_23 [i_0] [i_0] [(unsigned short)23] [i_4 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 3]));
                    }
                    for (unsigned int i_7 = 4; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        arr_26 [(signed char)15] = (((_Bool)1) ? (((((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_7 + 1])) - (var_8))) : (((/* implicit */unsigned long long int) -276472837)));
                        arr_27 [i_2 + 2] [i_0] = ((/* implicit */unsigned short) (~((~(276472836)))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_25 [i_7 - 1] [i_7 - 2] [13LL] [i_2 + 2])) & (3639121474U)));
                        arr_28 [i_0] [6LL] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_2 + 2] [i_7 - 4] [i_1 - 4]));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2 + 3] [i_2 + 3]))));
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                        arr_33 [(signed char)20] [i_1 - 1] [23LL] [i_1 - 1] [i_8] [i_8] = ((/* implicit */signed char) ((unsigned int) ((long long int) -250794664)));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53372))) / (arr_3 [i_1 - 3] [i_1 - 3]))))))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_9 = 4; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) (((~(2659559818268760220ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0] [i_10 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))) ? (min((((unsigned int) var_9)), (((3206171951U) + (arr_2 [(signed char)17]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [8U] [20ULL] [i_9 + 2] [i_9 - 1] [i_1 - 4]), (arr_9 [i_0] [i_1 - 2] [i_9 + 1] [i_9 + 3] [3ULL]))))));
                            var_27 ^= ((/* implicit */unsigned long long int) var_9);
                            var_28 -= ((/* implicit */signed char) ((((arr_0 [i_1 + 1]) >> (((arr_0 [i_1 + 2]) - (3915525888U))))) % (((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) 1710870584U)), (2305842734335787008LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) var_5);
    var_30 = ((/* implicit */unsigned long long int) var_2);
    var_31 = ((/* implicit */signed char) var_13);
}
