/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((min(var_12, 10662))) ? (1 ^ 713488356) : 713488370)))));
    var_15 |= ((((min(var_12, var_11))) >> (((((-48 ? 4200249676 : 50184))) - 4200249667))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [11] = ((((((var_12 % 42) ? ((var_0 ? var_2 : var_6)) : -713488341))) && ((min(-19, -17347)))));
                arr_5 [i_0] = (arr_1 [i_0] [i_0]);
                var_16 = (((((min((arr_3 [i_0] [i_0]), (arr_0 [i_0])))) ^ 237)));
            }
        }
    }
    #pragma endscop
}
