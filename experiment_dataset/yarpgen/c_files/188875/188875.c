/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (arr_1 [i_0 + 1]);
                    var_12 = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [2] [i_1] [i_2] [i_3] [i_2] [i_2] [i_4] = -42;
                                var_13 = (((((((arr_4 [i_0] [i_3]) ? -47 : 4420)) & (arr_5 [i_0] [i_1] [1] [i_3]))) >> ((max(1, ((45268 == (arr_0 [i_0]))))))));
                                var_14 = ((((arr_12 [16] [i_4] [i_2] [15] [i_4]) ? 24 : (arr_12 [8] [i_3 + 1] [i_2] [i_1] [i_0]))) & (~-268369920));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = 4294967292;
                            }
                        }
                    }
                    var_15 = (min(var_15, ((((((-35 | (arr_8 [i_0] [i_0] [i_0] [6])))) < 1395448379106404624)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_16 = (max(var_16, 1420379148808296086));
                var_17 = (arr_5 [i_5] [i_5] [15] [i_6]);
                var_18 |= ((((((((((arr_17 [i_5] [i_5]) - -9086178176091830239))) || (-120 & 112))))) >= (arr_0 [i_5])));
            }
        }
    }
    #pragma endscop
}
