/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = min(5, ((max(21636, 1))));
                var_14 = 18;
                var_15 |= 1;
                var_16 = (arr_0 [i_0]);
                arr_5 [i_0] [3] [i_1] = (min(((min((min(5186475431050406028, 1)), ((max((arr_3 [i_0] [1]), 12183)))))), (min(18446744073709551615, 1))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_3] = (min(1, 1));
                arr_13 [16] &= (((-2147483647 - 1) > (min(-2147483639, (min(152, -1229975267165623959))))));
                var_17 = max((arr_6 [i_2] [i_3]), (1 <= 0));
                var_18 = ((6564369773574178180 ^ (arr_11 [i_2] [0])));
                arr_14 [18] &= (arr_10 [i_2] [16]);
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
