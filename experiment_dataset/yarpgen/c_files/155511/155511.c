/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_10;
    var_16 = (min((((1102927166 ? var_14 : 4689728862764046703))), var_5));
    var_17 = (((((!(var_11 | 34115)))) <= var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (!(arr_5 [i_0] [i_0]));
                arr_6 [i_0] [i_1] = (((arr_0 [i_1]) & (((!1) ? ((min(var_13, (arr_3 [i_1])))) : (arr_0 [i_1])))));
                var_19 = (max(var_19, (arr_5 [i_0] [i_0])));
            }
        }
    }
    var_20 = (max(var_20, (((-(((min(4435073952054609456, var_6)) << (((min(2117582945, 9223372036854775807)) - 2117582927)))))))));
    #pragma endscop
}
