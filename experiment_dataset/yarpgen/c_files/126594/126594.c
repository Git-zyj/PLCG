/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [20] &= (((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : -30159)) == ((((arr_1 [i_0]) ? 30147 : (arr_1 [i_0]))))));
        var_11 = (max((~2587449256), ((((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : var_0))) ? ((((-126 + 2147483647) << (42090829 - 42090829)))) : ((-32759 ? 2438172527 : 0))))));
    }
    var_12 = (min(var_12, ((max(0, -1)))));
    #pragma endscop
}
