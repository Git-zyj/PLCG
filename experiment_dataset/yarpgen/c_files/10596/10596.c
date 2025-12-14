/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max((((var_1 ? var_1 : -11))), var_4))) ? 11985215823152953517 : (var_8 - 181)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (((((arr_8 [i_0 - 1] [i_0 - 1]) && (arr_8 [i_0 - 1] [11]))) || (((arr_6 [i_0] [i_0 - 1]) || (arr_8 [i_0 + 2] [i_0])))));
                    arr_10 [0] [i_1] [i_2] = var_10;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_12 = ((arr_11 [i_3]) ^ (var_10 > var_1));
                arr_17 [i_4] [i_3] [i_3] = ((((((arr_11 [i_3]) / (arr_11 [i_3])))) * (((arr_11 [i_4]) ? var_6 : var_0))));
                arr_18 [i_3] [i_3] [1] = (!(((var_0 ? (arr_13 [i_3]) : var_2))));
            }
        }
    }
    var_13 = ((((((((var_4 ? var_9 : 9757))) ? (((min(51483, var_5)))) : (((var_9 + 9223372036854775807) >> (var_2 - 114307113)))))) ? ((var_8 ? -var_9 : var_10)) : ((max(var_10, (var_10 == var_10))))));
    #pragma endscop
}
