/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (+-1783605274);
    var_19 = ((~(!-var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 1] [i_0] = (!2097682543);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 ^= -1783605265;
                    var_21 = (~1783605272);
                    var_22 = (arr_10 [i_0] [i_1] [i_0] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_16 [i_0] = (~1);
                        arr_17 [i_1] [i_3] [i_1] [i_1] [i_0] [i_3] = ((!((!(arr_14 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0])))));
                        arr_18 [11] [i_0] [i_1 - 1] [i_4] [i_0] = -245;
                        arr_19 [i_0] = (~var_5);
                    }
                    var_23 |= var_12;
                    arr_20 [i_0] [i_0] = -1783605300;
                    arr_21 [i_0] [i_1] [i_1] [i_0] = -86;
                }
            }
        }
    }
    #pragma endscop
}
