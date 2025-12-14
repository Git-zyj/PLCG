/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(18446744073709551610, var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] &= (((((arr_1 [i_0] [i_1]) + 2147483647)) >> (5 % 15)));
                    var_11 = (-(~6));
                }
            }
        }
    }
    #pragma endscop
}
