/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, var_11));
                    arr_8 [i_0] [i_1] [i_1] [19] = ((((min(1, 17387))) % var_9));
                }
            }
        }
        arr_9 [i_0] = (min((arr_4 [i_0] [i_0] [i_0]), 4100));
        arr_10 [i_0] [i_0] = ((((((((0 ? var_1 : 18446744073709551610))) ? 48149 : 1))) - ((+(((arr_4 [7] [i_0] [i_0]) ? (arr_3 [1] [i_0] [1]) : 18446744073709551601))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_16 += ((-((((min(59039, 18446744073709551612))) ? (arr_5 [i_3]) : (3837919523331490005 | 1)))));
        var_17 = ((min((arr_5 [i_3]), 32752)));
        arr_13 [i_3] = (max(16591090978432496774, (+-0)));
        var_18 = ((+(((65535 / -3837919523331490005) ? 18446744073709551601 : 47))));
        var_19 = -2756429758517138564;
    }
    var_20 = var_6;
    #pragma endscop
}
