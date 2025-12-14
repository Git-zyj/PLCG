/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_0] [i_1] [i_1] = (((((875030577 ? (arr_12 [1] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_1 + 2] [i_2]) : 875030577))) ? (arr_13 [i_4] [i_3] [2] [2] [15]) : 3419936718));
                                var_17 = ((~(arr_3 [i_0])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_18 = ((~((3419936742 ? -875030577 : (min(3419936742, var_15))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((0 || (arr_16 [i_1] [i_0] [i_5] [i_6])));
                            arr_20 [i_0] [2] [i_2] [i_5] [i_6] [i_0] [i_6 + 1] = (((min(5714363859316934861, (((-(arr_4 [i_5] [i_0] [i_0] [i_0])))))) / 875030554));
                        }
                        var_19 = (arr_5 [i_0] [2] [i_2] [i_2]);
                    }
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        var_20 *= ((((((~(arr_3 [i_1]))) ? (~24576) : ((min((arr_12 [i_0] [i_1] [18] [i_2] [i_2] [i_0] [i_7 - 3]), 0)))))));
                        arr_24 [i_0] [i_1] [i_1] [16] = ((((((~(arr_9 [0] [0] [i_7]))) <= (!-5610338577922961279))) ? (((~(min(var_13, var_10))))) : (arr_0 [i_2])));
                        var_21 -= (max(((((((174 ^ (arr_0 [i_0])))) || (!0)))), (((!1) ? (min(3419936710, 3419936751)) : (((min(65533, 1))))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_22 += ((-((((var_0 ? 2358186174 : var_2)) ^ (var_2 <= var_10)))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                    }
                }
            }
        }
    }
    var_23 &= var_16;
    #pragma endscop
}
