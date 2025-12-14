/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = -2291207298987360275;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] &= (((arr_2 [i_0]) ? var_0 : ((var_4 ? var_3 : 7025000775194282581))));
        var_14 = (((~(arr_2 [i_0 - 2]))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] [5] = ((((((((arr_5 [i_0 - 3]) + 9223372036854775807)) << (((((arr_5 [i_0 - 1]) + 7722153289736043142)) - 42))))) ? 14717142649158617762 : var_4));
            arr_7 [i_0] = ((((((((var_3 ? 5004428425801369824 : 0))) ? ((0 ^ (arr_5 [i_1]))) : (arr_2 [i_0 - 2])))) ? ((var_9 << (2129439202439597308 - 2129439202439597280))) : (arr_0 [i_0])));
        }
        var_15 = (max(var_15, var_5));
    }
    var_16 = var_11;
    var_17 = var_9;
    #pragma endscop
}
