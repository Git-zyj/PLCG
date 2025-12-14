/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (~1);
                arr_7 [i_0] [i_0] [i_0] = 2057;
                arr_8 [14] [i_1] = ((!(arr_6 [i_0] [i_0])));

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_11 = ((((min(var_0, (arr_5 [i_2 + 1] [i_2 + 1] [i_1])))) ? (!var_7) : (((arr_5 [i_2 - 1] [i_2 - 1] [5]) ? 1 : (arr_5 [i_2 - 3] [i_2 - 1] [i_1])))));
                    var_12 = (arr_6 [12] [0]);
                    arr_12 [i_0] [i_1] [i_1] = ((-((1268673996 ? var_5 : 159))));
                }
            }
        }
    }
    var_13 = ((1 - ((((((18446744073709551613 ? 1 : -9223372036854775792))) < -var_8)))));
    var_14 = ((((min(var_2, var_0))) ? ((~(var_7 - -14))) : ((min(var_0, var_3)))));
    var_15 = (max((1625767107 != 15697336014586109898), var_9));
    #pragma endscop
}
