/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((-((var_10 * (arr_0 [1] [i_1])))));
                var_19 = var_10;
                arr_6 [i_0] = (-1 >= 1);
            }
        }
    }
    var_20 = ((((max(var_12, 57984627171921736))) ? var_4 : (((!(((var_12 << (var_6 - 1819571038)))))))));
    #pragma endscop
}
