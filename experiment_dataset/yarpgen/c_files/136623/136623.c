/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (9223372036854775807 != 694253406);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = var_4;
                    arr_7 [i_2] [i_1 + 1] [6] |= (((min(((~(arr_4 [i_1 + 1]))), (((3167595490 ? -86 : (-9223372036854775807 - 1)))))) << (var_7 + 38)));
                    var_14 = (min(var_14, -28));
                }
            }
        }
        var_15 = (min(var_15, (((2048756488 ? 16886679049218857843 : -1046625171984443913)))));
        var_16 = (max(var_16, (((+(((-1046625171984443896 + 9223372036854775807) >> (var_11 - 110))))))));
    }
    var_17 = 0;
    #pragma endscop
}
