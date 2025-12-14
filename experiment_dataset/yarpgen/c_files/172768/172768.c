/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = arr_1 [i_0] [i_0];
        var_14 = (max(var_14, (((((arr_3 [i_0] [i_0]) ? ((7568333841783922651 ? 4036869453691341837 : (arr_1 [i_0] [i_0]))) : (var_11 <= var_11)))))));
        arr_4 [4] = (min(((~(arr_0 [9] [i_0]))), (((!(arr_1 [i_0] [i_0]))))));
    }
    var_15 = (min(var_15, (((var_11 ^ ((max(65527, var_11))))))));
    var_16 = ((((((var_12 | 35) - var_2))) ? var_3 : var_12));
    #pragma endscop
}
