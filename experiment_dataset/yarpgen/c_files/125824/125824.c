/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~((~(!var_5))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(var_14, (((((arr_1 [i_0]) - (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] = ((((-2147483647 - 1) == 2147483647)));
            var_15 = ((+(((arr_2 [i_0]) ? 2147483647 : (arr_0 [i_1])))));
            var_16 = (51956 ? (-2147483647 - 1) : 0);
            var_17 &= (!2147483647);
            var_18 = (max(var_18, 127));
        }
        arr_6 [i_0] = ((((((2147483647 || (((201323982 ? -1 : -2147483638))))))) - -8197018801333854174));
    }
    var_19 = (min(var_19, 2));
    var_20 = ((-13667 ? ((~(70 ^ 262143))) : 34274));
    var_21 = var_11;
    #pragma endscop
}
