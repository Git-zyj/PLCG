/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((((max(-3204456359882712562, var_0)) == ((3204456359882712543 ? var_8 : 9223372036854775807)))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [6] [6] = -3204456359882712560;
        var_11 = (min(var_11, ((min((min(-3204456359882712590, -4020573752257087848)), ((max(32767, 45))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_12 [i_1] [10] [i_1] = ((min(-5030221222256208127, (arr_0 [i_1]))));
                    var_12 = (max(var_12, (((-(((arr_11 [i_3] [i_3] [i_3]) / -var_8)))))));
                    arr_13 [i_1] [i_2] = ((-(((var_6 ? var_8 : 536870912)))));
                }
            }
        }
        arr_14 [i_1] = (max(((((~-184235037) / -108))), ((~(min(var_4, (arr_6 [i_1] [i_1] [i_1])))))));
    }
    var_13 = var_6;
    #pragma endscop
}
