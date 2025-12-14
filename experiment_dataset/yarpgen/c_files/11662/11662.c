/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_6;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] = (((max((~0), (arr_1 [i_2]))) | ((min((arr_6 [i_1 - 3] [i_0 - 1]), -7)))));
                            arr_14 [i_1] = (min(((min((arr_10 [i_2] [i_1]), (arr_10 [i_2] [i_1])))), 18446744073709551599));
                            arr_15 [i_0 + 1] [i_0 + 1] [i_3] [i_3] = (!9152);
                        }
                    }
                }
                arr_16 [i_1] [12] [i_1 + 1] = 9152;
            }
        }
    }
    #pragma endscop
}
