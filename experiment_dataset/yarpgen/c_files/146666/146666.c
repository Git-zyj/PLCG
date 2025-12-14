/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = var_5;
    var_16 = var_1;
    var_17 = (max(var_17, 41));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_18 = (max((arr_0 [i_0]), ((~(arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = 10;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_19 = ((~((+(((arr_0 [i_1]) ? (arr_3 [i_1] [i_1]) : -20))))));
        var_20 &= ((((max(10, -1))) ? (max((arr_1 [i_1]), 29577)) : (min((arr_1 [i_1]), (arr_1 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_21 &= (arr_8 [i_4] [i_4 - 1] [i_4]);

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_16 [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] [i_6] = -4374;
                            var_22 ^= (arr_4 [i_4 - 1]);
                        }
                    }
                }
            }
        }
        var_23 += (-(arr_14 [i_2]));
        var_24 = (arr_7 [i_2]);
    }
    #pragma endscop
}
