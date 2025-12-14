/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-((var_2 ? var_10 : var_3))))) % ((-(var_10 * -1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((arr_0 [i_0 + 1]) % (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_1]))))))));
                var_17 = (min(var_17, ((!(9016148744889548710 / 255)))));
            }
        }
    }
    var_18 = (!521633499);
    var_19 = min(10693763801330608912, var_6);
    #pragma endscop
}
