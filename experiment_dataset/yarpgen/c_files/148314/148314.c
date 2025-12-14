/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((arr_0 [i_0]) < (~1)));
                var_14 = (4159475982 | 9815892276911939817);
                arr_5 [10] [i_0] = (min(((((max(8630851796797611798, 171))) ? (min((arr_3 [i_0]), 9)) : -3)), ((max((!77124808504052315), var_2)))));
            }
        }
    }
    var_15 = (((((max(2199023255551, var_2))) ? var_2 : 17590038560768)));

    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_16 = (arr_7 [i_2]);
        var_17 = -1;
    }
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        var_18 = ((-670523983 ? -117 : 8));
        var_19 = ((max((arr_8 [i_3 - 4]), (arr_8 [i_3 - 4]))));
        var_20 = (min((((arr_9 [i_3 + 1]) ? (arr_9 [i_3 - 3]) : (arr_9 [i_3 + 2]))), (((!(arr_9 [i_3 - 3]))))));
    }
    for (int i_4 = 4; i_4 < 14;i_4 += 1)
    {
        var_21 *= ((((min(-105, 56876))) ? -105 : var_10));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_22 = var_4;
                    var_23 = (((((((((((arr_12 [11] [11]) + 2147483647)) << (((arr_14 [i_4] [i_5] [i_5] [i_6]) - 13427353800172828642))))) ? var_3 : (((1 ? 44563 : var_8)))))) ? -var_0 : 23));
                    var_24 -= ((!((max((min(-3685668227556174117, 1)), ((var_1 ? -1239998094312941482 : -3685668227556174107)))))));
                }
            }
        }
    }
    #pragma endscop
}
