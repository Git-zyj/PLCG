/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((var_1 ? (((79 ^ var_4) ? var_8 : (var_7 | var_9))) : (min((((var_11 ? 27670 : var_4))), var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_16 -= ((((min(((var_0 / (arr_2 [i_1]))), (arr_1 [i_1 - 3] [i_0 - 1])))) ? var_2 : (((((-27670 / (arr_3 [11] [5] [5])))) ? (max(85, 13803562827651210667)) : (arr_0 [i_1 - 3])))));
                var_17 -= (arr_3 [i_1 - 2] [i_1] [i_1]);
                var_18 ^= (((((arr_1 [1] [i_1]) & (arr_3 [i_0] [9] [i_0]))) | var_8));
                arr_6 [i_0] = (arr_2 [i_0]);
                var_19 &= (max(((~(arr_0 [i_0]))), (((!(arr_2 [i_0]))))));
            }
        }
    }
    var_20 = (((((2147483647 ? (max(3001407532536827480, var_7)) : (176 ^ 0)))) ? var_0 : (((var_3 % (~-27670))))));
    #pragma endscop
}
