/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_1 == (min(1193334939, var_2)))))) == (max(var_5, var_6))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_0 [0] [0])));
        var_17 = (max(var_17, (!-1100738635)));
        arr_2 [i_0] = ((!((!(arr_1 [i_0 + 2] [i_0 + 1])))));
    }
    var_18 += (((var_5 & (!var_0))));
    var_19 *= (min((!1100738639), (max(18127, 238687688))));
    #pragma endscop
}
