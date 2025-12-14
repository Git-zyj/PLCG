/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = ((var_0 ? 410767848 : 145829296));
                    arr_8 [i_2] = 134217727;
                }
                var_13 = ((((36444 ? ((-410767862 ? -410767862 : -410767873)) : -410767849))) ? (((((var_11 ? var_1 : -410767846))) ? ((var_5 ? var_3 : 410767880)) : ((2147483646 ? 29092 : 2147483646)))) : (((29061 ? -2147483624 : 0))));
                arr_9 [i_0] = 29060;
                arr_10 [i_0] [i_1] [i_1] = -var_7;
            }
        }
    }
    var_14 = (((var_9 ? ((var_10 ? var_6 : 1013743209)) : ((var_8 ? var_3 : var_0)))));
    #pragma endscop
}
