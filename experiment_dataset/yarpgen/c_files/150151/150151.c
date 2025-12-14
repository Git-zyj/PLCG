/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(var_5, var_8)), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] = (((~-29336) ? var_0 : (min((52 * 0), ((((arr_8 [i_0] [i_1] [7] [i_1]) ? 60 : var_12)))))));
                                arr_17 [i_0] [i_2] [1] [i_0] [i_0] [i_0] [i_0] = (((~var_14) << (arr_13 [i_0] [i_4] [i_0] [i_3] [i_4] [i_4] [1])));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [1] [1] [i_0] = max(var_3, ((!(1 + 0))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] = ((((((~var_9) ? ((max((arr_8 [19] [i_1] [19] [i_1]), (arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] [i_1])))) : ((6674775538628628166 ? var_5 : 255))))) ? (((((((~(arr_14 [i_0] [i_1])))) || (arr_3 [22] [22]))))) : ((((((arr_13 [i_0] [5] [i_0] [i_1] [i_1] [i_1] [5]) + 1))) ? (!var_7) : (max((arr_0 [i_0]), 41))))));
                arr_20 [i_0] [i_0] = (max(((var_15 == (arr_14 [i_0] [i_0]))), (0 != 1579055471)));
            }
        }
    }
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 *= (((arr_11 [i_7] [i_6] [i_6] [i_5]) >= (max((arr_10 [i_5] [i_6]), (arr_21 [i_5] [i_6])))));
                    var_19 -= (max(1, 63466));
                    var_20 = (min((~18446744073709551613), -27));
                    var_21 *= (((max(1, 1)) ? (((var_10 || (arr_22 [1])))) : (((min(1, 1))))));
                    var_22 *= var_14;
                }
            }
        }
    }
    #pragma endscop
}
