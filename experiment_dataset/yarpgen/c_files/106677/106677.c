/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1 - 2] [i_0] [i_0] = ((!((!(((0 % (arr_2 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 + 2] [i_0] [i_2 + 1] [i_3] [i_3] = 5;
                            arr_12 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0] = (-32767 - 1);
                            arr_13 [i_0] [i_0] = 0;
                        }
                    }
                }
                arr_14 [i_0] = (~var_12);
                arr_15 [i_0] = (~(!8));
            }
        }
    }
    var_16 = (max((8 == 10), ((~(~var_3)))));
    var_17 = (max(var_1, (((2147483647 > var_1) ? (65520 | 65535) : 15))));
    #pragma endscop
}
