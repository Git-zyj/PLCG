/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = var_1;
                                var_15 = (var_7 / var_2);
                                arr_14 [i_4] [2] [i_1] [i_0] = var_5;
                                var_16 = (arr_9 [i_0] [i_0]);
                            }
                        }
                    }
                    var_17 -= var_3;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_18 = -5701921354756748865;
                        var_19 += var_1;
                    }
                }
            }
        }
    }
    var_20 &= var_6;
    #pragma endscop
}
