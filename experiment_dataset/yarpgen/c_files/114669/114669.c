/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (min(var_2, (var_3 * var_6)));
    var_13 = var_10;
    var_14 = ((1 ? 4217746875 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((~var_7) / (10485 | 10485))))));
                arr_5 [i_0] [i_1] = (arr_0 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_1] = 1;
                arr_7 [i_0] [i_0] [i_1] = (((((arr_4 [i_0]) ? var_3 : 10485)) << (((((((((arr_3 [i_1] [i_0]) + 9223372036854775807)) << (5067301278730956154 - 5067301278730956154)))) || (~var_8))))));
                arr_8 [i_0] [i_1] = (((min(((1449351725753330355 ? 973693192 : var_10)), 32767))) ? (min((~0), 16)) : 124);
            }
        }
    }
    #pragma endscop
}
