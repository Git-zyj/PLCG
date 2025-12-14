/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 += (max((1651559674 + -88), 13409818694845020073));
        var_12 = ((!((48 || (arr_3 [i_0])))));
    }
    var_13 = ((-(~var_9)));
    var_14 = (max((((-9135006499236205279 % -1295934659) ^ -21343)), ((max((~-21335), var_2)))));
    #pragma endscop
}
