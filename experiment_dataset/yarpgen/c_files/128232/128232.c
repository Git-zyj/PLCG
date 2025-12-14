/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((17592186044288 | 9342) + (var_3 <= var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((min((var_0 + var_9), (~var_2)))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2 + 1] = -9343;
                        arr_10 [i_2 + 1] [i_0] = var_3;
                        var_14 = (max(var_14, ((+(((arr_1 [i_1]) ? (var_5 & var_6) : (arr_1 [i_3])))))));
                        arr_11 [i_0] [i_0] [i_2] [12] [6] = ((~(((2145386496 % var_4) ? var_11 : var_10))));
                    }
                    arr_12 [i_2] [3] [3] = ((min(9324, 2145386513)));
                    var_15 = (~var_4);
                }
            }
        }
    }
    var_16 = (min((!7747744058992716827), ((!(212 / 2145386496)))));
    #pragma endscop
}
