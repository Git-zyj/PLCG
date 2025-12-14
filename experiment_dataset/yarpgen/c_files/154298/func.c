/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154298
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
    var_20 = ((/* implicit */long long int) var_8);
    var_21 += ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [i_1 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (1597311063U))));
                        var_22 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_6 [9U] [i_1] [3U])))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+((+(arr_8 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 1]))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((long long int) (~(((((/* implicit */_Bool) arr_1 [5])) ? (arr_8 [i_0] [i_1 - 1] [i_2] [i_4]) : (arr_9 [i_1] [i_1] [i_1 - 1] [i_4] [i_2] [(unsigned char)7]))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned char) var_4))) ? (arr_9 [i_5] [i_2] [i_1 + 1] [i_1 - 2] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [8U]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            var_26 = (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) var_8))) : ((-(((/* implicit */int) arr_15 [i_6] [8LL])))))));
                            arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 2] [4ULL] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_16 [7U] [i_1] [i_2] [i_1] [i_6] [7U] [6U])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)7] [i_1 - 1] [i_1 + 1] [i_1 + 1])))))) : (arr_8 [i_1 + 1] [i_2] [i_5] [i_6 + 1])));
                            var_27 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (arr_0 [i_1]) : (arr_0 [i_5])))));
                            var_28 = ((/* implicit */unsigned char) max((((unsigned int) min((-355525073123990330LL), (((/* implicit */long long int) -6))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0 + 1] [(unsigned char)10] [i_0])))))));
                        }
                        var_29 = ((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0] [0ULL] [i_0] [8U]);
                        arr_19 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) 23)) : (1717127291U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_2] [i_0])) * (((/* implicit */int) arr_11 [i_0 + 2] [i_1 - 1] [i_2] [10LL] [i_1 - 1])))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        arr_22 [6U] [(signed char)9] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_19))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 2] [i_2] [1ULL] [i_7] [i_7] [i_1] [8U])))))) : (arr_9 [0U] [(signed char)3] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 2]))));
                        var_30 += ((/* implicit */unsigned int) arr_5 [i_7] [i_2] [i_1] [i_0]);
                        var_31 = ((/* implicit */long long int) max((((arr_20 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 + 1]))))), ((+(arr_9 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1])))));
                        var_32 = ((/* implicit */int) var_12);
                    }
                    var_33 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_34 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((+(6479852272282538382LL))) != (((/* implicit */long long int) min((2428226474U), (((/* implicit */unsigned int) var_7))))))))));
}
