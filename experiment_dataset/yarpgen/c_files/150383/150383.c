/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 ^= ((-((min((arr_8 [i_1] [9] [i_1]), (arr_1 [i_4] [i_4]))))));
                                var_23 = (arr_5 [i_0]);
                            }
                        }
                    }
                }
                var_24 = (max(var_24, ((((((!var_8) * (((arr_7 [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : -5631)))) == (arr_11 [i_0] [i_0] [i_0] [8]))))));

                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    var_25 = (max(var_25, (~154)));
                    var_26 = (arr_0 [7]);
                    var_27 = (min((max(var_11, ((min(116, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), var_5));
                    var_28 = 5631;
                }
            }
        }
    }
    var_29 ^= (((-(var_2 < -32765))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    var_30 = (min(var_30, (((!(arr_23 [i_8 + 1] [i_8 + 1] [i_8]))))));
                    var_31 = ((240 < ((var_17 | (arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
