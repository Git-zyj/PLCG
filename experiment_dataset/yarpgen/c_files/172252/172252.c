/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    var_12 &= 4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (((((((-29 ? -29 : 55))) ? (var_0 / var_7) : (arr_4 [i_0] [i_0] [i_0])))) ? (max((-29 / 28), 51144)) : ((((max((arr_3 [i_0]), 1))) ? ((max((arr_1 [i_0]), (arr_0 [i_0])))) : ((-1003289669 ? (arr_3 [i_0]) : 0)))));
                    var_14 = ((((((max((arr_0 [i_0]), var_1))) ? var_1 : (~18446744073709551615))) * -55));
                    arr_6 [i_0] = (((((arr_2 [i_0 - 1] [0] [i_0]) ^ (108 + var_4)))) || ((min((arr_2 [i_0] [i_0] [i_0 + 1]), var_9))));
                }
            }
        }
    }
    var_15 = (min(var_15, (var_10 % var_1)));
    #pragma endscop
}
