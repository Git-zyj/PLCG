/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((min(var_15, (arr_3 [i_0 - 1]))));
                arr_5 [i_1] [i_1] = (max(((((arr_1 [i_0 + 1] [i_0 + 1]) != -8904740780194414399))), (arr_3 [i_0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_20 = -117;
                    var_21 = ((min(((var_13 ? var_5 : (arr_6 [i_0] [i_1] [i_2]))), var_8)));
                }
                var_22 = ((436251093 - ((((2367356939508342840 ? (arr_7 [i_0] [i_0]) : 65535))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [5] [i_4] = (~(arr_0 [i_3]));
                    arr_19 [i_3] [i_4] [i_5] [i_5] = (((((!((min(var_3, 17673380162273898853)))))) & (arr_7 [i_3] [i_3])));
                }
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
