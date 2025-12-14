/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_18 | var_9) ? 0 : 0));
    var_21 = (max(var_21, ((((((max(65535, 32766)))) ? 0 : (var_7 >= 65530))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [5] [i_0 + 3] = (((((arr_0 [2] [i_0]) ? 65535 : 5)) | 16));
        arr_4 [i_0] = (~3948177080);
        var_22 = (arr_0 [i_0 + 3] [i_0 + 4]);
        var_23 = (min(var_23, (arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_24 = 0;
        arr_7 [i_1] [0] = 2178144300;
        arr_8 [i_1 - 2] = ((130944 | (~15836437031440443060)));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    arr_17 [i_4 - 1] [2] [20] = 65535;
                    var_25 *= ((2512398578 * ((min(0, 1)))));
                    var_26 = (max(var_26, ((((!(((-(arr_12 [i_3] [8]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
