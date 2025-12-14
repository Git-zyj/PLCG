/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_10 = (max(var_10, (1 / 26)));
                            var_11 = ((((max(var_8, (((!(arr_2 [i_0]))))))) % var_5));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = var_9;
            }
        }
    }
    var_12 = (~var_8);
    var_13 &= var_1;
    #pragma endscop
}
