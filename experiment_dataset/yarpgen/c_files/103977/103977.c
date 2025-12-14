/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (106 < 25572);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [3] [1] = (((((arr_3 [i_0] [i_0]) <= (arr_0 [i_0]))) ? ((min((((!(arr_3 [i_0] [1])))), var_10))) : ((-4611686018427387904 ? -25572 : 16252928))));
        arr_5 [1] = ((!((!(arr_1 [i_0] [6])))));
    }
    #pragma endscop
}
