/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(215, (max(var_14, 7359622123617147653)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [15] = 1367378809;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = ((!(arr_4 [i_0] [i_1])));

                        for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_15 [15] [i_0] [15] [15] [5] [i_4] = 56;
                            var_19 = (max(var_19, ((min(68, (((var_8 < (arr_5 [20])))))))));
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, (1280801831 < 65480)));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = (max(65480, ((-(((arr_12 [i_0]) ? (arr_10 [i_0] [i_3]) : (arr_7 [i_3 - 2] [i_2] [i_1])))))));
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = ((-(arr_9 [i_0 - 1] [i_0])));
        var_21 = (arr_12 [i_0 - 1]);
    }
    #pragma endscop
}
