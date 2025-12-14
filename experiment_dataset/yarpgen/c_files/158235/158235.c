/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(((max(3574292106, 29819))), (max(-717630914, 8473777521457399928)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 -= ((max(63, (max(13921, 35717)))));
        arr_2 [i_0] = ((max(720675190, (max(6, 5276)))));
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = 35707;
        var_22 *= (min(32755, 35702));
    }
    var_23 = (max(var_23, ((min((min(0, var_3)), 0)))));
    var_24 = (max(((max((min(-616709638, 189)), ((max(35717, -44)))))), (min(((min(128, 29828))), 35717))));
    #pragma endscop
}
