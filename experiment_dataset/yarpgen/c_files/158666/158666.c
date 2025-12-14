/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_10 = ((((((max((arr_0 [i_0]), var_1))) ? var_2 : (~2067422270)))) ? (((~10031567403330761037) - (max(14260423662095205876, (arr_0 [i_1]))))) : 0);
                        var_11 ^= ((~(((-1328257526 | var_4) ^ (((arr_5 [i_2] [i_0] [i_2]) ? (arr_8 [i_0] [1] [i_2] [i_2]) : var_2))))));
                    }
                }
            }
        }
        var_12 = (4186320411614345740 <= 4186320411614345739);
        arr_12 [i_0] = (max(((((min(var_6, (arr_10 [0] [0] [i_0] [1] [4])))) ? (((min(var_5, var_4)))) : 4186320411614345740)), (+-16321716118990222944)));
    }
    var_13 = ((!((((((0 ? -24 : 0))) ? (var_5 < var_3) : (((-2147483647 - 1) ? var_3 : 1485420470)))))));
    var_14 = (min(var_9, var_4));
    var_15 = 0;
    #pragma endscop
}
