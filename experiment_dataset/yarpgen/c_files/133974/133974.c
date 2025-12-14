/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (!199);
                var_14 = -2047;
                var_15 = ((1729322959791429695 ? ((-(var_7 >= var_6))) : 9514));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = 1;
                    arr_9 [i_2] [i_2] [i_0] = (max(((max((max(var_4, 168)), ((max(var_10, var_1)))))), (max((!1), (min(var_4, 5448834626390037781))))));
                    var_17 = (min(var_1, ((-(88 * 0)))));
                }
            }
        }
    }
    var_18 -= (max((((var_13 + 1) ^ (!var_0))), (~-1559588555)));
    var_19 = (18446744073709551591 - 2147483644);
    #pragma endscop
}
