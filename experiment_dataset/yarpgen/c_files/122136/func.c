/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122136
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_13 = ((long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2])))) : (((/* implicit */int) (short)-32766))));
                    var_14 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (max((var_4), (var_4))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [1] [i_2] [i_2 - 2])))))));
                    var_15 = ((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_1 - 2]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((~((~(var_4)))))));
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_9 [i_4]))) ? ((+(((/* implicit */int) arr_9 [i_4])))) : (((/* implicit */int) arr_9 [i_3]))));
                    var_18 = ((/* implicit */long long int) max((((((/* implicit */int) arr_9 [i_5])) << (((/* implicit */int) max((arr_8 [i_3]), (arr_9 [(short)14])))))), ((+((-(((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
}
