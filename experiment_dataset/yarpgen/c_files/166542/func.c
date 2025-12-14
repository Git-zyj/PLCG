/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166542
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
    var_20 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_18) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 - 1])) >= ((+(((/* implicit */int) (signed char)30))))));
        arr_4 [22LL] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 1]);
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) | (arr_5 [i_0])))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) arr_5 [i_0 + 2]);
                        var_24 = ((/* implicit */long long int) (((~(-369376080))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_2])))))));
                        arr_13 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_18);
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) arr_3 [i_2]))));
                        var_26 = ((/* implicit */unsigned int) (signed char)17);
                    }
                    for (int i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_27 += ((/* implicit */unsigned int) arr_16 [i_1 - 1] [i_0 + 2] [i_0 + 2]);
                        var_28 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_4]))));
                    }
                    var_29 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1 + 2] [i_2])))))) <= (((((/* implicit */_Bool) arr_1 [5U] [i_0 - 1])) ? (arr_5 [3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [(short)6] [i_0 + 2])))));
        arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1]))));
    }
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (unsigned short i_8 = 3; i_8 < 23; i_8 += 3) 
                    {
                        {
                            arr_28 [i_8] [i_7] [i_7] [i_6] [i_8] = ((/* implicit */unsigned long long int) arr_23 [i_8 - 3]);
                            var_31 = (i_8 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */int) arr_24 [i_8 + 1] [i_8] [i_7] [i_8])) + (2147483647))) << (((((/* implicit */int) arr_15 [i_8 - 2] [i_6] [i_8] [i_8] [(unsigned short)6] [i_8])) - (70)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) arr_24 [i_8 + 1] [i_8] [i_7] [i_8])) + (2147483647))) << (((((((((/* implicit */int) arr_15 [i_8 - 2] [i_6] [i_8] [i_8] [(unsigned short)6] [i_8])) - (70))) + (177))) - (24))))));
                            var_32 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(signed char)24] [i_5] [i_5] [i_5] [i_5] [(signed char)24]))) > (((((/* implicit */unsigned long long int) arr_11 [i_6])) & (var_10)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_18)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (-(max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_5] [i_6] [i_6] [i_5] [i_6] [i_10])) >= (((/* implicit */int) arr_26 [i_5] [i_6] [i_5] [i_5] [i_5] [i_6]))))))))))));
                            arr_34 [i_5] [i_10] [i_10] = ((/* implicit */long long int) ((unsigned long long int) ((arr_6 [i_5] [i_5]) & (arr_6 [i_6] [i_5]))));
                            var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_8 [i_6])) / (((/* implicit */int) arr_27 [i_5] [i_6] [i_9] [i_10]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
