/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (--var_7);
        arr_2 [i_0] = -2147483630;
        var_19 = (min(1, 2147483630));
        arr_3 [i_0] [i_0] = (+(((arr_0 [i_0]) & 4194303)));
    }
    var_20 = (((min((min(5101557137285695212, var_14)), (max(var_6, 16322743286977344619)))) - 23));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            {
                var_21 = (min((min((-1 && var_7), (min(71, var_13)))), ((max((!var_17), (!var_10))))));
                arr_8 [i_1] [i_2] = -17;
                var_22 = 22;

                /* vectorizable */
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    var_23 = ((-((-8 ? -1 : 14))));
                    var_24 = ((-(arr_1 [i_1] [i_1])));
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2] = (min((((arr_7 [i_5] [i_5 - 2] [i_5]) ? (arr_15 [i_5] [i_5 + 1] [i_5 - 2] [i_5 + 1]) : 0)), (((13 + -101) - (min(1446717474, 13345186936423856403))))));
                            var_25 = (min(((var_0 + (arr_19 [i_2] [i_2] [2] [i_2])), ((max(83, -13998))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = 2739697712;
    var_27 = var_15;
    #pragma endscop
}
