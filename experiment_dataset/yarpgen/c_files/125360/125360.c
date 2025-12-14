/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_13 = (max(var_13, (arr_1 [i_0])));
                    var_14 = (min(var_14, ((max(1012910792767975417, -987845491)))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_15 += (((((arr_5 [i_0] [i_0 - 1] [i_1 + 2]) == 0)) ? (max((min(4646111071375652248, 0)), (((9296 == (arr_6 [i_1])))))) : 68));
                    arr_10 [i_1] [i_1] [i_1] [i_3] = (34359730176 | ((max(236, 1026821539))));
                }
                var_16 = ((-1745153181 ? (arr_2 [i_0] [i_0] [i_0]) : 2134833684));
                var_17 = (max(var_17, (arr_3 [i_0] [i_0])));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 *= -var_1;
                                var_19 *= (((-1026821540 / -1026821539) > (arr_0 [i_0])));
                                var_20 = (var_5 == (var_8 / 9007198986305536));
                                var_21 = (min(var_21, (arr_11 [16] [i_1] [i_4] [i_5])));
                                var_22 = (1026821540 / 1026821540);
                            }
                        }
                    }
                    var_23 &= ((((((arr_20 [i_0] [i_0] [i_0] [14] [14] [i_4] [i_4]) ? var_6 : 64))) ? (arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [6]) : (arr_9 [i_1])));
                    var_24 = var_1;
                }
                var_25 = (min(16238, ((0 ? -83 : -5640803275364757084))));
            }
        }
    }
    var_26 += (min(var_1, var_2));
    #pragma endscop
}
