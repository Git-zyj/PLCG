/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= -1541490718341697165;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_19 -= ((-643353653585208153 ? (var_13 == 240) : ((~(arr_4 [i_1 - 3] [i_1 + 3])))));
                var_20 *= ((-1342969623 ? var_2 : ((1819489697 ? 24586 : -1541490718341697165))));
                var_21 *= (max(((var_11 ? var_10 : (((((arr_3 [i_0]) < var_7)))))), (((var_13 ? (5198 && var_6) : var_1)))));
            }
        }
    }
    #pragma endscop
}
