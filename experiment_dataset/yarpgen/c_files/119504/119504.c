/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = min(((((((arr_1 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : 4294967292))) ? (((-1897672994 || (arr_4 [i_0] [i_0] [i_0])))) : -83)), var_3);
                arr_6 [i_0] = (min((-2147483647 - 1), 9858928948423798720));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, 252));
                            var_21 = (((--83) ? ((((((var_3 ? (arr_2 [i_0] [i_0]) : 98))) ? ((min((arr_9 [i_0]), var_9))) : 111))) : var_8));
                        }
                    }
                }
                arr_12 [10] [i_0] = ((~((1 ? 1 : var_14))));
            }
        }
    }
    #pragma endscop
}
