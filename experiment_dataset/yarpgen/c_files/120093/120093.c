/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_5;
                    var_14 = (arr_2 [i_1]);
                    arr_9 [i_0] [i_1] = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_6 [i_4 - 4] [18] [i_2 + 1] [i_2 + 1]) == (((var_13 ? (arr_6 [i_4 + 1] [i_4] [i_4] [i_2 - 1]) : (arr_1 [i_2 - 2]))))));
                                var_16 = 0;
                                var_17 = ((-(min(((var_10 ? -18 : var_10)), var_0))));
                                var_18 = (!var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 0;
    var_20 = 15;
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_21 |= ((+(((!15) ? 211 : -1))));
                                var_22 = 1624474502;
                            }
                        }
                    }
                    var_23 *= ((((max(((var_5 ? var_1 : var_6)), var_5))) ? ((-7 / ((10631924034825892836 ? 3867352767 : -16)))) : (var_9 * 0)));
                }
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
