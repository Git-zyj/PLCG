/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 5997430099126517016;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (((((-5997430099126517004 / var_7) | (((min(var_2, var_7)))))) ^ (480 > var_14)));
                    var_18 &= (((min((((4032026579 ? var_10 : 5997430099126517021))), (arr_7 [i_0] [i_1] [i_2]))) + ((((212 * 16837) ? 30 : -36)))));
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
