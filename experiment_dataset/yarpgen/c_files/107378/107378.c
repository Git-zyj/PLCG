/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((4689730848073095090 * (((var_1 ? 0 : -8941095515295209134)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (((((arr_6 [i_0] [i_1] [i_1]) == var_12)) ? (arr_8 [i_0] [1] [i_0] [3]) : ((((arr_6 [i_0] [i_0] [i_0]) ? (-127 - 1) : var_2)))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (((1 != var_10) ? var_13 : (~7985126268168346805)));
                    var_17 += (((arr_6 [i_1] [i_1] [i_0]) ? var_10 : (arr_7 [i_0] [i_1] [i_2] [1])));
                    arr_11 [i_1] = ((0 ? (arr_5 [i_1] [i_1] [i_0]) : var_10));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_18 ^= (((953 ? var_4 : var_6)));
        var_19 = ((473214391 ? (min((4294967270 ^ var_12), ((min(0, var_11))))) : 14336));
        var_20 |= (+(((((var_0 ? (-32767 - 1) : (arr_13 [8])))) ? (max(var_5, (arr_12 [i_3 - 2]))) : (((var_3 ? var_16 : -14336))))));
        var_21 *= -2090468086;
    }
    var_22 *= ((~((((var_5 / -11) > ((1 ? var_1 : var_8)))))));
    #pragma endscop
}
