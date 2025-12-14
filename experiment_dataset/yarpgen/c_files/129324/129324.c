/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = ((~(~3366359840)));
                var_14 *= (max((((var_8 << (((arr_4 [i_0] [i_0 + 3] [i_0]) - 89))))), (((arr_0 [i_0 - 1] [i_1 + 3]) ? var_0 : (arr_0 [i_0 + 2] [i_1 - 1])))));
                var_15 *= (((min(4102294590, ((1393782406808487282 ? 801262038173061384 : (arr_3 [i_0] [7]))))) > ((801262038173061401 ? 1526892384 : 17026692167014220930))));
                var_16 = (max(((((arr_1 [i_0 - 1]) <= (arr_1 [i_0 - 2])))), (min((min(1065, (arr_4 [i_1] [i_1] [i_1 + 2]))), (arr_2 [i_0])))));
            }
        }
    }
    var_17 = ((min(-24533, (max(var_8, 679446247)))));
    var_18 = ((!(((((max(4583897890896793423, var_7))) % (min(801262038173061369, 9931)))))));
    #pragma endscop
}
