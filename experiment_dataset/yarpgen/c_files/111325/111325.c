/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((min(8763740097858410648, 120))) ? (min(4988543870333962426, 13458200203375589190)) : 81)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_3 - 3] = ((((50 ? (((var_8 ? (arr_4 [i_2] [i_2]) : -2884174246255391021))) : (max(38908, 4988543870333962426)))) & ((max(var_4, (~56))))));
                            arr_10 [i_2] [i_2] = 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((((258490386 << ((((var_4 ? 12487189380549524180 : var_3)) - 12487189380549524164)))) < (arr_0 [i_4]))))));
                            var_13 += ((13458200203375589189 ? 40170 : -77));
                            arr_15 [i_4] = 78;
                        }
                    }
                }
            }
        }
    }
    var_14 = ((-((var_0 % (max(51786, 4988543870333962443))))));
    #pragma endscop
}
