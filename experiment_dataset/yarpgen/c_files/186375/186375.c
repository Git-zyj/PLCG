/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 17590526545216718225;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = ((((((arr_2 [i_1 + 3]) ? 3403929686 : ((4438727589201048726 ? 511 : var_11))))) && (-9223372036854775807 - 1)));
                var_16 = ((((((((arr_0 [i_1]) ? (arr_4 [0] [i_0]) : var_0))) ^ ((29930 ? 14008016484508502898 : 1794378441633955990))))) ? (max(((var_2 ? (arr_2 [i_1]) : var_5)), ((((arr_0 [i_1 + 4]) | (arr_5 [i_1] [1] [i_0])))))) : (((~(~var_4)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 = var_9;
                var_18 = var_3;
                var_19 = (((212 ? 4438727589201048736 : -323725688)));
                var_20 = ((((!(arr_7 [i_2]))) ? (arr_10 [i_2 + 1]) : ((var_8 ? (arr_10 [i_2 - 2]) : (arr_9 [i_2])))));
                var_21 = 0;
            }
        }
    }
    #pragma endscop
}
