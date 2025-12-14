/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = var_1;
                var_19 = ((-((-((16384 ? var_14 : 1))))));
            }
        }
    }
    var_20 += -55;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                var_21 = (max(11080, ((min(1, var_11)))));
                arr_11 [i_3] = -5056;
                var_22 = 444171204;
            }
        }
    }
    var_23 = (((-var_6 + -30176) ? 15920349335016167494 : 7641089097997598064));
    #pragma endscop
}
