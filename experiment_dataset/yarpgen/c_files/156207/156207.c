/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 += ((-var_8 ? ((1 >> ((((7555 ? (arr_1 [1]) : var_8)) - 4066120044)))) : (-1276242363 == -1276242352)));
        arr_2 [i_0] = (((((var_18 - 3893665843) - (((arr_1 [i_0]) + 1276242360)))) + (arr_0 [i_0])));
    }
    var_20 = max((max((var_7 ^ 1), var_5)), (((((~var_6) + 2147483647)) >> (((max(var_0, 4322573578678534638)) - 15778896619257618549)))));
    #pragma endscop
}
