/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 27507;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((((arr_2 [i_0]) * (((arr_3 [i_0] [1] [i_0]) ? (-127 - 1) : 4593358767533891076)))) == (min((min((arr_1 [i_0]), (arr_4 [i_0]))), (arr_3 [i_1 + 1] [i_1 - 3] [i_1 - 1])))));
                var_12 = (7466 == 9729);
                var_13 = 45;
            }
        }
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_14 = (((((arr_5 [i_2]) | (arr_6 [i_2]))) <= ((var_6 ? ((((arr_5 [i_2]) > var_8))) : ((-(arr_6 [i_2])))))));
        var_15 = (568 <= 6);
        arr_7 [i_2] = (max(((-(((arr_5 [i_2 + 2]) ? (arr_6 [i_2]) : var_0)))), ((-8173775563435676633 ? 62669 : 568))));
        var_16 = (((((((-127 - 1) > 0)))) ? (arr_6 [i_2]) : (((max(-83, -5))))));
        var_17 += (((arr_6 [8]) < (arr_6 [2])));
    }
    var_18 = -103;
    #pragma endscop
}
