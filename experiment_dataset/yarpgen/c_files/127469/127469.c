/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((((var_8 / 7148787165439316519) ? ((-96 ? var_7 : var_1)) : var_1)), (((!(98938261 || 11297956908270235116)))));
    var_16 = (~84);
    var_17 *= (!(((var_0 ? var_2 : var_2))));
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (((((((arr_0 [i_0 - 2]) || var_8)))) ^ ((98938261 ? 18446744073709551615 : 1152921496016912384))));
                    var_20 = ((+(min((arr_5 [7] [i_0] [i_0]), (arr_5 [i_1 + 1] [i_0] [i_0])))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (((((min((arr_3 [i_0]), (arr_2 [i_0])))) ? ((min(var_11, var_11))) : (~var_10))));
                }
            }
        }
    }
    #pragma endscop
}
