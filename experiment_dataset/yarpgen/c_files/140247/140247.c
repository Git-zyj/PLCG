/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140247
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
                arr_5 [10] [8] = 11277;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 = ((((!(-4 >= 44517))) ? 4 : (((var_9 % var_0) ? 8 : var_5))));
                    var_11 = (!15);
                    var_12 *= (14 != 45788);
                    arr_9 [0] [i_0] [8] [14] = (((0 ? -var_6 : ((28 ? 35821 : -15)))));
                    var_13 |= var_7;
                }
                var_14 = ((((max((~6144), (var_0 & -12)))) || ((((var_8 - 2147483648) << (!var_5))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                var_15 = var_1;
                var_16 &= (~65);
                var_17 += (~((~((24960 >> (2147483647 - 2147483644))))));
            }
        }
    }
    var_18 *= (max((!var_6), -29));
    var_19 = (1 & 0);
    #pragma endscop
}
