/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (!-11742);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = (((arr_1 [i_0]) ? (((!((max(-1275181984, -1275181980)))))) : (((0 % var_4) ^ (max((-2147483647 - 1), -874675069))))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [3] [i_3] [i_1] = 125;
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_2] = arr_6 [i_1] [i_3];
                            }
                        }
                    }
                    arr_17 [i_1] = (arr_6 [i_0] [i_1 + 1]);
                    arr_18 [i_0] [i_1] = ((((max(1, var_8))) == (1 ^ 11742)));
                }
            }
        }
    }
    var_12 = (min(var_12, var_2));
    #pragma endscop
}
