/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((-8782262513648412984 >> (arr_4 [i_0])));
                var_18 = ((((9982 ? 3067985312712293092 : 1807465452519324240)) - ((((var_8 + 2147483647) >> var_10)))));
                var_19 = ((9982 ? 6523681681687467910 : 1817999456));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [8] [i_3] = 22;
                                var_20 *= (max(148, (((min(var_4, var_1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
