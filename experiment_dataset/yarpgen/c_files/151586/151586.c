/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((-48 & (var_2 <= 5341)))) ? var_1 : (((max(21050, 22736))))));
    var_18 = (225 == 11);
    var_19 |= var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [8] [i_0] [i_1] [i_2] = 1;
                    arr_8 [i_0] = ((var_5 ? var_5 : (var_10 + 245)));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (((((var_14 ? (arr_2 [i_1]) : var_8))) ? 1 : var_3));
                    arr_10 [i_1] [i_2] [i_0] = ((((-(arr_2 [i_2])))) % (1 >= var_13));
                }
            }
        }
    }
    var_20 = (max(var_20, ((((((var_7 ? var_10 : var_14))) ? (((((var_16 ? var_8 : var_7)) != var_10))) : (((1 != var_9) ? (var_6 / var_10) : var_9)))))));
    #pragma endscop
}
