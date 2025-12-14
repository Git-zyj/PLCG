/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((max(961710100, (((41005 ? 961710109 : 1))))))));
    var_12 = ((((var_3 - ((-6332784467149386751 ? -6332784467149386738 : var_8))))) ? ((1 ? var_10 : var_8)) : var_6);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min(3639331892, (((+(((arr_0 [i_0] [i_0]) ? var_3 : var_7)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = ((((var_3 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_1])))) ? ((961710112 ? 370932938 : var_2)) : ((((arr_5 [i_1] [i_0]) ? var_9 : var_5))));
            var_13 += (((arr_4 [i_1] [i_0]) ? ((4398046511103 ? var_5 : (arr_5 [i_0] [i_1]))) : 2));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_14 ^= 65535;
                var_15 = (min(var_15, 1281978760795736976));
                var_16 = 1;
            }
            arr_11 [i_1] [i_0] [i_0] = (((((0 ? -961710076 : 21888))) ? var_0 : var_0));
            arr_12 [3] [i_0] = (arr_3 [i_1]);
        }
        var_17 = (min(var_17, ((((arr_10 [i_0] [i_0] [i_0]) ? 3949 : ((var_9 ? var_8 : var_10)))))));
        arr_13 [i_0] = ((((min(1331913302, -1))) ? var_7 : var_6));
    }
    #pragma endscop
}
