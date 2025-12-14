/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-2147483647 - 1);
    var_16 = -459126317;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_17 = (((((arr_6 [i_0] [i_0]) < ((-1423628273 ? (arr_1 [i_1 + 1] [i_3]) : (-2147483647 - 1)))))) - 2147483647);
                        var_18 = (min(var_18, (max(var_12, (max(17, 1592273717))))));
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = var_0;
        var_19 = ((!(arr_8 [i_0] [i_0] [i_0] [i_0])));
    }
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                var_21 = arr_11 [i_5 + 1] [i_4];
                arr_15 [i_4] [i_4] = max(((122283965 >> (((max(1592273717, 4194303)) - 1592273691)))), ((~(max(-1411014312, -1715463903)))));
            }
        }
    }
    #pragma endscop
}
