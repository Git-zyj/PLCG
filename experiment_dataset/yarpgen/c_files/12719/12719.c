/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1550809591;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1] [i_1] [i_0] |= 7716407174911170261;
                            arr_11 [i_2] [i_1] = (((var_5 >= 57689) ? ((min((arr_9 [i_0] [3] [i_2 + 1] [i_2] [i_3]), var_1))) : (384 ^ 10730336898798381350)));
                            arr_12 [i_0] [i_2] [i_2] [i_0] = (arr_0 [i_1] [i_0]);
                            var_13 = (min(var_13, ((((7182686606771703320 > 218) | ((15 ? ((((arr_1 [i_3] [i_0]) <= var_6))) : (-20160 >= 232))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_14 = (45107 ? ((-(arr_17 [i_0] [i_1] [12] [12]))) : ((((arr_17 [i_0] [i_1] [i_4] [14]) > (max(var_2, (arr_2 [i_5])))))));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_4 - 3] [i_5] &= (arr_7 [i_0] [i_4] [i_4]);
                            var_15 = (((((max(var_6, var_5)))) << (((arr_16 [i_5] [i_0]) + 4063486987167261206))));
                        }
                    }
                }
                arr_21 [i_0] [i_1] = -520817173012803601;
            }
        }
    }
    #pragma endscop
}
