/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [2] [i_0] = (min((max(var_12, ((8126910489503194982 ? 7168 : 11912497695305155779)))), var_10));
        arr_3 [i_0] [i_0] = var_14;
    }
    var_17 = var_13;
    #pragma endscop
}
