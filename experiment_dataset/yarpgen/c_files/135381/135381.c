/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_13 = (((max(5562665279460056133, 8160718001653602009)) != (((((arr_0 [i_0 + 1]) == (arr_0 [i_0 + 2])))))));
        arr_2 [i_0 - 2] [i_0 + 2] = ((((-8160718001653601998 > var_9) / (arr_1 [i_0 + 4] [i_0]))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((65523 >= (arr_4 [i_1])));
        var_14 *= ((var_7 ? var_5 : (max((60 <= 1), var_8))));
        var_15 = (min(var_15, (((-((-(arr_5 [i_1 + 1]))))))));
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((-7067001032277505393 & (arr_9 [i_2 - 1])));
        var_16 = 4356379235128170007;
    }
    var_17 = var_10;
    #pragma endscop
}
