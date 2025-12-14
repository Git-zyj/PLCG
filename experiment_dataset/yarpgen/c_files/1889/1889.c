/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(((((((-1 ? (arr_0 [1] [i_0]) : (arr_0 [5] [i_1])))) && 9223372036854775807))), (max((arr_3 [3] [i_1] [i_1]), (arr_4 [i_0])))));
                var_18 = (min(((((1 + (arr_1 [i_0]))) % ((((arr_3 [10] [i_1] [0]) && 1))))), (arr_4 [i_0])));
                var_19 &= (((((arr_2 [i_0]) + (((arr_0 [i_0] [i_1]) ? (arr_0 [i_1] [i_0]) : -8162)))) <= (max(-651135127, (arr_3 [i_1] [i_0] [i_1])))));
                arr_5 [i_0] [i_1] = (arr_3 [i_0] [i_1] [i_0]);
            }
        }
    }
    var_20 = ((((max(1417771152, var_15))) ? var_5 : ((((min(var_0, var_8))) ? (max(var_9, var_4)) : ((28 ? -27193 : var_10))))));
    #pragma endscop
}
