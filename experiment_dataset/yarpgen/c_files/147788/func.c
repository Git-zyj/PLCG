/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147788
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
    var_17 = ((/* implicit */short) (((((+(var_15))) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) var_14)), (max((var_5), (var_11))))) - (6402497264307438743LL)))));
    var_18 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) 1359283689)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)63349)))), (var_6))) >> (((((/* implicit */int) var_0)) - (21)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) var_10);
                            arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [(short)16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (arr_0 [(unsigned short)7])))) ? (var_4) : (((long long int) var_3))))) ? (max((var_2), (-7399573006109877177LL))) : ((+(var_3))));
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) (~(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_3]))), (arr_1 [i_0])))));
                            var_20 = ((/* implicit */unsigned short) arr_1 [i_0]);
                        }
                    } 
                } 
                var_21 = (-(max((arr_5 [i_0 + 1] [i_0] [i_1] [i_1 - 1]), (arr_5 [i_0 + 1] [i_1] [i_0] [i_1 + 1]))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 7399573006109877161LL))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((var_11) - (((((((/* implicit */_Bool) 7399573006109877177LL)) ? (((/* implicit */long long int) var_6)) : (var_5))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
}
