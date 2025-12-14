/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((((8988568491367500301 ? 13 : ((~(arr_3 [i_0] [i_0]))))) != (min(128, ((var_14 ? (arr_1 [i_0]) : var_15))))));
                var_22 ^= var_9;
                var_23 = ((((((arr_3 [i_0] [i_0]) ? (((-(arr_1 [i_0])))) : (min((arr_3 [i_1] [i_0]), var_17))))) ? ((((!(arr_3 [i_0] [i_0]))))) : (max(1810171258, (((var_0 ? (arr_0 [i_0]) : 793106762)))))));
            }
        }
    }
    var_24 += (((((var_11 ? var_10 : 2903664925588741361) + var_9))));
    var_25 = ((~(((245 >> (var_2 + 35))))));
    var_26 = min(((min(var_15, var_14))), (!var_8));
    #pragma endscop
}
