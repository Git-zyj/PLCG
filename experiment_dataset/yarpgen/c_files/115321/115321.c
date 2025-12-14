/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = 9259800386562091977;
                    var_13 = (!9186943687147459644);
                    var_14 = ((var_5 ? ((max(-var_10, (arr_0 [i_0])))) : (9186943687147459650 * 9259800386562091978)));
                    arr_7 [3] [8] [8] = var_8;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_10 [i_3] = ((min((min(var_6, 9259800386562091993)), (min(-1098299503, 9259800386562091977)))));
        var_15 *= (min((!var_2), (min(((214 >> (var_3 + 8823297326992372394))), (arr_9 [10])))));
        var_16 = 2147483647;
    }
    #pragma endscop
}
