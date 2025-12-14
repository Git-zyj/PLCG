/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((max((((arr_8 [i_0 - 1] [i_1] [i_2]) ? (arr_8 [i_0 + 1] [i_1] [i_2]) : (arr_8 [i_0] [i_0 - 1] [i_0 - 1]))), (((var_4 < (arr_8 [i_0] [i_0 + 1] [i_0 + 1])))))))));
                    var_20 |= (max(((max(4294967295, var_14))), (min(((var_10 ^ (arr_6 [i_0 + 1] [i_1] [i_1]))), (min((arr_5 [11]), 51143))))));
                }
            }
        }
    }
    var_21 = (((min(((((-2147483647 - 1) ? -8877 : 0))), (max(-5088007022862233912, var_11)))) + ((max((min(var_15, var_9)), -255)))));
    #pragma endscop
}
