/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (((arr_1 [i_1 + 1] [i_1 - 1]) > (((arr_1 [i_1 + 1] [i_1 - 1]) & (arr_1 [i_1 - 1] [i_1 + 1])))));
                arr_4 [i_0] = ((((min(var_10, var_12)))) ? ((((!(((18446744073709551611 >> (var_7 - 872158286)))))))) : (min((((arr_1 [i_1] [i_0]) * var_2)), ((min(65535, -53))))));
            }
        }
    }
    var_15 = (((var_7 == var_4) ? ((min(-1, -1))) : (((var_6 <= (!var_6))))));
    #pragma endscop
}
