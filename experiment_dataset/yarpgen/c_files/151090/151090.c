/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [13] [i_0] [i_2] [1] [1] = ((-((~(~32767)))));
                                arr_12 [i_0] [i_0] = ((-(+-50071)));
                                var_15 = (!var_8);
                                arr_13 [i_1] [0] [5] [2] [i_4] [i_0] [i_2] = ((-((~(~15464)))));
                                var_16 = (~var_2);
                            }
                        }
                    }
                }
                arr_14 [12] [i_0] = ((~((-(!50071)))));
                var_17 = ((!(arr_10 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_18 = (~50082);
                arr_20 [i_5] [i_5] = ((~((-(!15464)))));
            }
        }
    }
    #pragma endscop
}
