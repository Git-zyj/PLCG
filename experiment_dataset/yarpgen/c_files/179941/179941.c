/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 >= 460371274);
    var_12 = (min(var_12, ((min(2255314593, (var_10 / var_5))))));
    var_13 = (((127 + 1) ? var_4 : (~var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [20] &= 1;
                    var_14 = ((((((arr_4 [i_1]) ? (!1370089050) : (~var_10)))) ? (192 < 4788) : var_5));
                    var_15 = ((-(max((arr_4 [i_0 - 1]), (arr_2 [i_0] [i_0])))));
                    var_16 *= (((((max(var_10, 2924878246)))) / (min(-1, (~6)))));
                }
            }
        }
    }
    #pragma endscop
}
