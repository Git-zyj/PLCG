/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8386098444309708071;
    var_18 += (var_4 ^ 20);
    var_19 = ((var_16 ? var_13 : ((var_7 ? var_6 : (min(var_8, var_3))))));
    var_20 = ((((min(var_4, ((var_4 ? var_14 : var_12))))) * (((!236) * (var_9 / var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (max(((26 ? (17025339 | 7500563724703044626) : (~230))), 10946180349006506989));
                    arr_9 [i_2] [i_2] [i_2] [i_0 + 1] = (arr_1 [i_2]);
                    var_21 *= ((10946180349006506989 % ((58 ? 7500563724703044627 : 4277941957))));
                    arr_10 [i_0] [i_1] &= (min(((-(arr_1 [i_0]))), ((~(((arr_1 [i_0]) * (arr_3 [7])))))));
                }
            }
        }
    }
    #pragma endscop
}
