/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_12 = 5;
        var_13 = (min(var_5, (max(((900327586 ? (arr_1 [i_0] [i_0]) : 928205938)), 4294967269))));
        arr_3 [i_0] = (max((((arr_0 [i_0]) ^ (arr_1 [i_0 - 2] [i_0]))), (min(-97, (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (~var_0);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_15 = ((((max(var_3, -var_6))) ? (arr_5 [i_1] [i_1]) : -3394639718));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((min((var_5 && var_4), (3394639712 != 3394639709))))));
                                var_17 = (arr_10 [i_5 - 1] [i_2 - 1]);
                            }
                        }
                    }
                    var_18 = (max(var_18, ((max((min((max(var_10, 1345886538)), -9480)), (((~(!var_2)))))))));
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = 3394639712;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_27 [i_6] [i_6] [i_8] = (max((((29893 == (min(var_5, var_7))))), ((-(arr_26 [i_6 - 3] [i_7] [i_9] [i_7] [i_7] [i_9])))));
                        var_19 = var_5;
                    }
                }
            }
        }
    }
    var_20 = (max((max(((max(var_8, var_5))), ((var_2 ? var_7 : var_3)))), ((max(((4294967291 ? 900327575 : 24)), (min(889171833, var_10)))))));
    var_21 = (min(var_21, var_0));
    #pragma endscop
}
