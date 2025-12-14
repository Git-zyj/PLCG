/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (!(2147483647 == var_0));
    var_13 = (((((var_9 * ((max(2147483647, var_6)))))) ? (max(var_9, (((var_1 ? -2147483647 : var_11))))) : ((((var_5 ^ var_1) ? var_3 : 83)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [2] [i_2] [i_2] &= -var_2;
                    arr_7 [i_1] [i_2] = 2067945440;
                }
            }
        }
    }
    #pragma endscop
}
