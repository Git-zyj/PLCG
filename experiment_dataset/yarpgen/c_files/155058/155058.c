/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_3] = -1;
                        arr_13 [i_0] [i_1] [i_2] [i_3] = -42;
                        arr_14 [i_0] [i_1] [i_2] [i_3 + 2] = (523 || 1388269757222226022);
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (arr_1 [i_4 - 3])));
                        arr_18 [i_0] [i_0] [i_1] [i_1] [i_4] = (arr_15 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_4 + 1] [i_4]);
                    }
                    var_17 = (max(var_17, -523));
                    var_18 = (max(var_18, ((min((956993652 - -38), (min(1388269757222226022, (arr_6 [i_0]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 1] = (min((min((arr_21 [i_5 + 1]), var_5)), 41));
                            var_19 += (-(max(-34, 42)));
                            var_20 = (max(var_20, (arr_9 [i_5 + 2] [i_5 - 1])));
                        }
                    }
                }
                arr_32 [12] [i_6] [i_5] = (max(((min(65016, 1))), 15));
            }
        }
    }
    #pragma endscop
}
