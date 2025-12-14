/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(((18446744073709551615 ? var_8 : 20)), (((18446744073709551600 ? var_14 : var_15))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = 4264826332271403061;
                    var_19 = var_11;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_20 -= (12143806644728539101 ? -5502 : (((2147483647 * 22) + (378994868 * 7943034366154727556))));
                    arr_17 [9] [i_3] [9] = var_1;
                    var_21 = (min((!var_3), (arr_0 [i_3 - 1])));
                    arr_18 [2] [i_4] [i_3] = (min((!var_9), 4095));
                    var_22 = ((((((248 + 0) * ((((!(arr_4 [i_3] [i_4] [i_5])))))))) ? (arr_7 [i_3] [i_3 - 1]) : (max(((min(12973, 0))), (~5747661045084384038)))));
                }
            }
        }
    }
    var_23 ^= ((((((!var_5) - (~255)))) ? var_4 : (((((min(var_4, 1)) <= var_16))))));
    var_24 = (max(var_24, 65535));
    #pragma endscop
}
