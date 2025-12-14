/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(125, 18446744073709551608));
    var_17 = (min(var_17, var_12));
    var_18 = (((((-89 ? 52652 : ((var_3 ? 11639597119611756106 : -8714124396700721756))))) ? (((var_15 ? (!43696) : -1))) : ((1 ? ((var_11 ? 16905945725599560972 : 114)) : -126))));
    var_19 ^= ((((65524 ? -22 : 1)) != -var_4));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [1] &= (114 + 29281);
        var_20 = (((((arr_0 [i_0]) << (5346 - 5345))) << 1));
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((!((((1 ? var_1 : (arr_0 [i_0]))) != ((((!(arr_1 [i_0])))))))));
        arr_6 [i_0] [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
