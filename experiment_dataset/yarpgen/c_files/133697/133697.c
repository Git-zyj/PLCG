/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((!(var_6 && var_8)))) != ((min(0, var_3)))));
    var_12 += (max(((((max(255, 18446744073709551615))) ? var_4 : (!var_7))), 255));
    var_13 = ((255 ? 4122623565677899005 : -6394015306867333867));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (((((arr_3 [i_0] [i_1]) / (arr_0 [i_0])))) ? var_6 : 3620002318);
                var_15 = ((((min(14, 0))) | (((arr_4 [i_0]) & (590454296 ^ 1)))));
                var_16 *= var_6;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [6] |= var_6;
                            arr_10 [i_2] [i_1] [i_1] [i_2] = ((~((-(arr_5 [i_2 + 1] [i_2] [i_2] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
