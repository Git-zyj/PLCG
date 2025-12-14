/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min((-32767 - 1), -32751))), ((var_12 ? 1 : 32761))));
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 + 4] [i_2] = (((arr_4 [i_1 - 1] [i_2 + 1] [i_2 + 3]) ? ((-1688724980 ? -26497 : 149)) : (arr_4 [i_1 + 4] [i_2 + 2] [i_2 - 2])));
                        var_15 = (max(var_15, (arr_3 [i_3] [i_2])));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] = ((32757 ? 4795483436776330956 : 2147483647));
                        arr_12 [i_0] [i_1 - 2] [i_2 + 3] [i_3] = (max((max(((var_0 ? var_7 : (arr_1 [i_1 + 3] [i_3]))), ((32759 ? (arr_4 [i_3] [i_2] [i_1]) : var_2)))), (arr_0 [i_3])));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
        arr_14 [i_0] [i_0] = (((((var_12 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (min(-2179, 12464454947160314983)) : (((((arr_3 [i_0] [i_0]) >= (arr_3 [i_0] [i_0])))))));
        arr_15 [i_0] = ((max((arr_2 [i_0] [i_0] [i_0]), 4581)));
        var_16 = (min(var_16, (((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
