/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((3153175596545516352 ? -9223372036854775802 : var_3))));
    var_13 = (min(var_13, var_7));
    var_14 = (min((min(((var_8 ? -1 : 255)), ((max(var_11, 3014456816))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((((min(-1, 10610014957497918508))) ? ((((arr_0 [i_0] [i_1]) ? (((arr_4 [i_0] [i_0] [i_0]) + (arr_1 [i_0]))) : var_8))) : (12653598646651959895 * var_5)));
                var_16 -= (min(184, ((16127373302442272200 ? 36028797018898432 : 2572928607))));
                arr_5 [i_0] [i_1 - 1] [i_1 - 1] = 1;
                var_17 = (max(var_17, (((((!((max(-5809468295832685813, 0))))) ? ((min((arr_0 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1])))) : (~39006))))));
                arr_6 [i_0] [i_1] = (max(207, 33));
            }
        }
    }
    var_18 = ((var_2 ? ((~((18 ? var_6 : 18446744073709551615)))) : var_4));
    #pragma endscop
}
