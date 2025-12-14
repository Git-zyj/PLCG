/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((1 ? var_9 : ((24908 ? var_14 : 95))));
        arr_5 [i_0] [i_0] = (min((((arr_2 [i_0]) || (arr_2 [i_0]))), (((arr_3 [i_0]) && (arr_0 [i_0])))));
        arr_6 [i_0] [i_0] = var_18;
        arr_7 [i_0] = (((+-1) ? (((!(arr_0 [i_0])))) : 1));
        arr_8 [i_0] = 1;
    }
    var_20 ^= (min((max(7182, (~var_1))), var_10));
    var_21 = 1;
    #pragma endscop
}
