/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((arr_0 [i_0] [i_0 + 2]) % 4132745599032412784)));
        var_12 = (max(var_12, ((((((var_6 ? (((var_7 ? (arr_3 [i_0]) : 194))) : (max((arr_2 [2] [i_0 - 2]), var_5))))) ? 203 : (((((1910022405 ? var_8 : var_2))) ? 255 : ((max(122, var_0))))))))));
    }
    var_13 = var_0;
    var_14 = (min(var_14, var_3));
    #pragma endscop
}
