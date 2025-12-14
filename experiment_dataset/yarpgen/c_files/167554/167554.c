/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 *= (!2850);
                    arr_8 [i_0] [i_0] [i_2] = -var_11;
                    arr_9 [i_0] [i_1] [6] [i_1] = (~(((var_7 / -1) / (~-2643102149551801611))));
                }
            }
        }
    }
    var_14 |= 0;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_15 [12] [i_3] = (((~(1035838781 + 148))));
                arr_16 [i_4] [i_3] = (((!-3) + var_3));
                var_15 = ((var_9 == (var_0 % -32745)));
                var_16 = (((var_1 ? 1535677625 : var_8)));
                var_17 = ((var_0 ? -34318 : -17486));
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
