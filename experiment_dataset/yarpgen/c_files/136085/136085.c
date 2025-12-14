/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_1] [i_0] |= (((113409238 ? 13496 : var_1)));
                    var_19 = (max(var_19, (((1780492843634599415 | (((-(arr_5 [i_0 - 1] [i_0 - 1] [i_2])))))))));
                }
            }
        }
    }
    var_20 = 9920754753714188976;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            {
                var_21 = (arr_15 [i_3 + 1] [i_3] [i_4]);
                arr_16 [i_4] = (min(1445865316, 1130503534));
            }
        }
    }
    #pragma endscop
}
