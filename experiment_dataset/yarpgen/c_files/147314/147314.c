/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = ((((((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0])))) == (!1758081975523916113))) ? ((((0 <= (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 17901480062395425409)))))))) : 2819546054));
        arr_2 [i_0] = ((((max(145, var_4))) ? var_3 : var_12));
        var_21 = arr_0 [i_0];
        var_22 += (!var_10);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 -= (((((((0 ? var_5 : 0))) >= var_19)) ? ((3072 ? (-9223372036854775807 - 1) : ((((var_5 != (arr_3 [i_1]))))))) : (arr_1 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 17;i_3 += 1)
            {
                {
                    var_24 = ((!((max((arr_3 [i_1]), (((~(arr_4 [i_1] [i_1])))))))));
                    var_25 = (max(var_25, (((((max((((arr_3 [i_3]) ? 255 : var_2)), ((max(3072, 62464)))))) ? (((max((max(var_6, 193)), 128)))) : (max(((max(-129001163, (arr_10 [i_3 - 4] [i_3] [i_3])))), (max(var_10, var_5)))))))));
                    var_26 = (max((((~((max((arr_5 [i_2]), var_13)))))), (((arr_9 [i_2 - 1] [i_2]) ? var_11 : (var_5 | var_10)))));
                    arr_11 [i_1] [i_2] = 0;
                    arr_12 [i_1] [i_1] [i_2] = var_2;
                }
            }
        }
    }
    var_27 = ((!(((-var_14 ? (((var_16 ? 1 : -8))) : 17235691849720447234)))));
    #pragma endscop
}
