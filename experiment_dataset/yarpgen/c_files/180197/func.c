/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180197
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0 + 3] [(_Bool)1]))))) ? (((/* implicit */int) arr_0 [19ULL])) : ((-(1322021846)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2 - 3]))) : (var_6)))));
                    arr_7 [i_0 - 1] [(signed char)7] [i_2 + 3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_1]))));
                    var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 3])))), (((/* implicit */int) arr_1 [i_0 + 3] [i_2 + 2]))));
                    arr_8 [i_0] [i_1] [(signed char)16] = ((/* implicit */unsigned short) var_1);
                    var_13 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */long long int) 973459223)) : (arr_2 [i_0 + 1]))))));
                }
            } 
        } 
    } 
}
