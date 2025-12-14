/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 -= (arr_3 [i_0] [i_1] [i_1]);
                arr_6 [i_0] [i_0] = ((((max((min(var_4, (arr_2 [i_0]))), 53))) ? var_5 : (((arr_1 [i_1]) ^ (arr_1 [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_4] [i_4 + 1] = ((10721 - 230) <= (((!var_3) & -119)));
                    var_12 = (min((1 - 233), var_7));
                    var_13 = (max(var_13, 31));
                }
            }
        }
        var_14 = 743701108175337882;
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        var_15 = ((!(((1 ? (arr_16 [i_5] [i_5 + 1]) : -26)))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_16 |= var_1;
                        var_17 = 1;
                    }
                }
            }
        }
    }
    var_18 *= (((((var_3 & 1) - (-2102733385 % var_9))) & var_6));
    var_19 |= var_6;
    #pragma endscop
}
