/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_11, var_4));
    var_18 |= ((var_6 ? (min(((-1757672274855350042 ? var_7 : 1757672274855350062)), var_7)) : -1757672274855350018));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((min(((~(arr_1 [i_0] [i_0]))), (((arr_4 [i_0] [i_0] [i_1]) ? 252 : var_1))))) % ((~(((arr_3 [i_1] [i_1] [i_1 + 1]) | var_1))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_2] = 2305843009209499648;
                    var_19 = 3485770629382412652;
                    arr_11 [i_0] [i_1] = 1757672274855350062;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = (~(arr_5 [i_0]));
                                var_20 = ((var_9 ? (arr_14 [i_3 - 3] [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_1]) : (arr_14 [i_3 + 2] [i_3 - 2] [i_3 + 3] [i_3 + 1] [i_1])));
                                arr_18 [2] [2] [2] [i_1] [i_2] [i_3 + 1] [i_1] = (arr_4 [i_1 - 1] [i_3 - 2] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
