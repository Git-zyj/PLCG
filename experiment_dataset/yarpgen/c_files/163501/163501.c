/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 ^= (max((arr_4 [i_1]), (((~(((!(arr_1 [i_0])))))))));
                var_15 = ((((~var_12) ? ((((arr_4 [3]) ? -1416654027 : var_9))) : (arr_0 [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_13 [i_4] [i_4] [i_2] [i_4] [i_4] [i_4] = ((max(3038051762, 0)));
                            var_16 = ((~(!0)));
                        }
                    }
                }
                var_17 = -var_1;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((((~var_5) != (max(-22, 0)))))));
                            var_19 = ((max(0, (arr_16 [i_7] [i_3]))));
                            var_20 = ((!(arr_6 [i_3 - 1] [i_2 - 1])));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
