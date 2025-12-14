/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((10935381022918076679 ? 41 : var_7))) + ((min(6672525364231067353, -6672525364231067353)))));
    var_15 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                var_16 += ((-6672525364231067352 != 18446744073709551606) ? ((((min(6672525364231067351, 0))) ? -6672525364231067375 : var_8)) : var_2);
                                var_17 = (max((((arr_14 [i_1] [i_4 + 1] [i_1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1]) ? var_10 : (arr_2 [i_2 - 2]))), ((min(127, (((-6672525364231067352 + 9223372036854775807) >> (18330 - 18313))))))));
                                var_18 = (~6672525364231067338);
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_17 [i_1] = (((0 ? 570570246 : -6672525364231067353)) - (((((1 ? 25757 : 0))) ? (!var_13) : var_3)));
                                var_19 -= 0;
                            }
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_20 [8] [9] [i_1] [i_3] [i_3 + 1] = ((((min(-28772, 18))) ? (arr_10 [0] [i_1] [i_1] [i_1]) : 0));
                                var_20 = (min(8589, 28782));
                                arr_21 [i_1] [8] [i_0] [i_1] = 31;
                            }
                            var_21 = var_9;
                        }
                    }
                }
                arr_22 [i_1] = ((var_9 >= var_7) ? var_7 : ((((6672525364231067353 ? 116147899045153006 : 0)) & -93)));
            }
        }
    }
    var_22 = (max(var_22, ((min(-13, ((min((min(255, var_2)), 39))))))));
    #pragma endscop
}
