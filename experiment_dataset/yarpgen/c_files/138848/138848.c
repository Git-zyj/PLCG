/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((min((var_3 < var_7), (var_10 && var_2))) || ((max(-847934724, 5955798340170056871)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = (((0 ? (847934724 + var_8) : -847934725)));
                        arr_13 [i_0] [i_3] = min(847934716, 1);
                    }
                }
            }
        }
        arr_14 [i_0] = ((var_0 - var_9) % ((((var_4 + var_6) > var_5))));
    }
    var_11 = var_3;
    #pragma endscop
}
