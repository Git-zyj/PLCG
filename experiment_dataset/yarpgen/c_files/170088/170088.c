/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((30 ? ((-1 ? 88 : var_4)) : (-127 - 1)))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [1] = (((((((-96 ? -291539942 : 64979)) / ((var_0 - (arr_5 [i_2] [i_1 - 1] [i_0])))))) < -17));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_11 = ((1195388044 ? -1 : -27));
                                var_12 = var_9;
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = ((((min(((-27 ? 27 : 633511010)), 8577))) / (min(0, (0 - 538)))));
    }
    var_13 = (((((var_0 | (min(0, 14))))) ? ((-886497618 ? 40 : 0)) : var_3));
    #pragma endscop
}
