/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_1;
    var_12 = ((var_1 >= (--3)));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 37933;
        arr_3 [i_0] |= ((~((17107 ? ((245 + (arr_0 [i_0] [i_0]))) : (-2147483647 - 1)))));
        arr_4 [4] [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_13 = ((((min((~var_4), (~-7250311031267601512)))) ? ((-((max(1, 7747))))) : (!-1)));
    #pragma endscop
}
