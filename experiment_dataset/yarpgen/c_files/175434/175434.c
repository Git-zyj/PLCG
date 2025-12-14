/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(var_13, var_14))) ? var_9 : (((min(107, var_7))))))) ? ((-(7137 ^ var_3))) : (~16375)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (min((arr_1 [i_0]), (((arr_4 [i_0] [i_1] [i_1]) ? (~var_13) : (~20498)))));
            arr_6 [i_0] [i_0] = ((~((75 | (2 ^ var_6)))));
            arr_7 [i_1] = ((201 ? 223 : (!1021723727)));
        }
        var_18 = (min(var_18, ((((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0]))) <= (((arr_0 [i_0]) + (arr_3 [i_0] [i_0]))))))));
        var_19 -= (-((min(192, var_2))));
        var_20 &= var_7;
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        var_21 = ((((((arr_0 [i_2 - 1]) ? var_1 : (arr_4 [i_2 + 2] [i_2 + 3] [i_2 + 3])))) ? -16388 : (((min((arr_0 [i_2 + 3]), var_7))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_22 = 24179;
            var_23 |= ((15 ? (!107) : var_8));
            var_24 += (~(arr_4 [i_3 + 2] [18] [18]));
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                var_25 = (((33 % var_11) ? (((arr_17 [i_5 - 1]) ? (arr_17 [i_5 - 1]) : (arr_0 [i_5 - 1]))) : (arr_15 [2] [i_5 - 1])));
                var_26 = (((var_15 || 7137) ? (((220 || ((min(-16388, var_15)))))) : (199 || -1773802227)));
            }
        }
    }
    #pragma endscop
}
