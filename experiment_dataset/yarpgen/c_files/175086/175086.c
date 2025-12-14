/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= 851351130;
    var_14 = 1885320063;
    var_15 = 33554176;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] = max(4261413119, 619445055);
                var_16 = (max(var_16, (max((((arr_5 [i_0 + 1] [i_0]) << (var_0 - 1358910756))), ((~(arr_0 [i_0 - 1] [i_1 + 1])))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] = ((~(max((arr_4 [i_1]), (arr_14 [i_0] [i_0])))));
                                arr_16 [i_4] [i_3 - 1] [i_2] [i_4] [i_0] [i_0] [9] = (((min(1629971083, 2409647232))) / (max(851351121, (((arr_1 [i_3]) ? 4294967295 : 15)))));
                                var_17 = max(4294967289, 33554177);
                                arr_17 [i_4] [i_4] [i_0] = (1610612736 ? (((arr_2 [i_2 + 1]) ? (arr_2 [i_2 - 1]) : var_4)) : (((max(11, 33554177)) - ((4294967295 ? 1140748372 : 0)))));
                                var_18 = arr_14 [i_2] [i_1];
                            }
                        }
                    }
                }
                var_19 = 2294094030;
            }
        }
    }
    var_20 = (2409647233 % 373671804);
    #pragma endscop
}
