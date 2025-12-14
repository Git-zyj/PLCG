/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0])))) == ((192 ? var_8 : 42))));
        var_11 = (((max(((16776704 ? (arr_0 [i_0]) : 1)), (((arr_0 [i_0]) << (42 - 42))))) & 1));
        arr_4 [i_0] = arr_2 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (0 != 2147483647);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_12 = ((((((arr_12 [i_4 + 1] [i_2 + 4] [i_2 + 1]) ? var_7 : (arr_12 [i_4 + 1] [i_2 + 4] [i_2 + 4]))) + 2147483647)) >> (((((arr_16 [i_2 + 1] [i_1]) + (arr_8 [i_2 + 2]))) - 2306436423695142950)));
                        var_13 = (arr_6 [i_1]);
                        var_14 = (arr_5 [i_1]);
                        var_15 += (42 | -4042);
                        arr_18 [i_1] [i_1] [i_2 - 1] [i_3] [i_4] = (((arr_14 [i_2 - 1] [i_2] [i_4 + 1]) || (((~(arr_5 [i_1]))))));
                    }
                }
            }
        }
        arr_19 [i_1] [i_1] = var_4;
        var_16 = 0;
    }
    #pragma endscop
}
