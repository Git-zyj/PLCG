/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114441
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_6 [i_0 + 1] [i_1])))) & ((-(((/* implicit */int) arr_1 [(_Bool)1]))))));
                arr_7 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_1]))))), (min((max((((/* implicit */int) arr_6 [i_0] [i_1])), (var_1))), (((int) var_6))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (var_16)))) ? (((/* implicit */int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_8)))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) (~(((unsigned int) var_16))));
                    arr_17 [i_2] [(short)11] [i_4] [i_2] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)10316))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        arr_22 [1U] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [2U])) ? (((/* implicit */int) arr_2 [10LL] [(unsigned short)19])) : (((/* implicit */int) var_17))))) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_5]))) / (-748515956654644006LL))))));
        var_23 = ((/* implicit */unsigned short) var_9);
        arr_23 [5U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)43017)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_4 [20])) : ((-(((/* implicit */int) arr_18 [i_5] [i_5])))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_5])) : (((/* implicit */int) var_12))));
    }
    var_25 = ((/* implicit */long long int) var_9);
    var_26 = ((/* implicit */unsigned int) var_3);
}
