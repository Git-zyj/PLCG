/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((~var_2) ? var_9 : var_5)) + 2147483647)) >> (((((~9557111366229500024) * (~var_7))) - 14997757017193902623))));
    var_13 = ((((var_5 ? (min(var_2, var_5)) : -var_8)) < (((var_11 << ((((min(var_3, 78))) - 63)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min(((((((48 ? (arr_1 [i_1]) : 4005))) ? ((-(arr_2 [i_0] [i_0] [i_1]))) : ((var_8 ? var_5 : 25153))))), (arr_1 [i_0 + 1])));
                var_14 = var_7;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0 + 1] [i_1] [i_2] = (min((min(((var_4 ? (arr_6 [i_0] [9] [13] [i_0 - 1]) : var_9)), var_4)), (((!(((arr_0 [i_1]) || (arr_3 [i_0]))))))));
                    var_15 = ((((max((!var_11), ((0 || (arr_7 [i_0] [i_1] [6])))))) >> var_5));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_0] [16] [i_2] [i_3 - 1] &= 1;
                        var_16 = (min(var_16, var_9));
                    }
                }
            }
        }
    }
    var_17 = (~((var_4 ^ (((min(var_3, 1)))))));
    #pragma endscop
}
