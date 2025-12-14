/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 ^= (303903240 & 12259281504826359096);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] [i_2] = var_7;
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] = (max((((((0 ? (arr_6 [i_2] [i_1] [0]) : (arr_2 [i_0] [i_0] [i_0]))) < 53185))), ((var_3 + (arr_5 [i_0] [i_1])))));
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            var_15 = (min(var_15, var_12));
                            var_16 = (max(var_16, (((+((+((((arr_14 [i_5] [16] [i_1] [i_1] [i_0]) && var_4))))))))));
                            var_17 = (min(var_17, (((((((arr_1 [i_4]) - (max((arr_18 [14] [i_1] [i_1] [16] [i_0] [8] [i_5]), 8882696112263906292))))) ? (((((var_5 ? (arr_15 [i_0] [6] [i_2] [i_4] [i_0]) : var_11))) ? 0 : ((min(var_1, var_1))))) : (((var_2 && ((min((arr_15 [i_0] [i_1] [4] [i_4 - 1] [i_4 + 1]), 6187462568883192519)))))))))));
                        }
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            var_18 = ((((min(12333, var_9))) << 1));
                            var_19 = (min(var_19, ((max((((var_1 ^ (arr_16 [i_4] [i_0] [i_4 + 1] [i_4])))), (max((arr_1 [i_0]), (var_8 < var_1))))))));
                            var_20 = min(((-((1 ? 3911418614 : 1674033212040262955)))), 5522803130716595689);
                        }
                        var_21 = (min(var_21, var_8));
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        var_22 = (max(var_22, var_8));
                        arr_25 [i_0] [i_2] [i_2] = ((max((!var_4), ((!(arr_3 [i_1]))))));
                        arr_26 [i_2] = (max(12259281504826359097, 6187462568883192518));
                    }
                }
            }
        }
    }
    var_23 = var_13;
    var_24 = (((~((6187462568883192519 << (16662800922636479186 - 16662800922636479179))))));
    var_25 = (min((((6187462568883192519 ? var_12 : ((var_4 ? var_10 : 0))))), (min((((var_11 ? 25569 : -12195))), ((-23958 ? var_11 : var_12))))));
    var_26 = (((~(var_12 & var_8))));
    #pragma endscop
}
