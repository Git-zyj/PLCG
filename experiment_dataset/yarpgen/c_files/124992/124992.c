/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((var_0 << (((7 | 14312) - 14319)))) | ((-(max(var_2, 4294967271))))));
    var_12 = min((!15), 10);
    var_13 = var_7;
    var_14 = ((min(-3889010928529485384, (((var_6 ? 3946971179 : var_6))))) * (-var_5 < var_8));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((((~(arr_1 [i_0] [i_0]))) & ((~(arr_0 [i_0] [i_0])))))) * -10));
        var_15 = (min(var_15, (((((((!(4 || var_9))))) + -5401)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] [11] = ((var_5 | (arr_4 [i_0] [i_0] [i_0])));
            arr_6 [i_0] [6] |= (((arr_1 [6] [i_1]) ^ (arr_1 [i_0] [i_1])));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_0] [2] [i_1] [i_2] = arr_1 [i_0] [6];
                var_16 |= -5920402928653260760;
            }
            var_17 ^= (arr_4 [i_1] [i_1] [i_0]);
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] = ((!(((20141 ? (2076008752 | 3589549101) : ((25 ? 4294967271 : (arr_12 [i_3] [i_3]))))))));
        var_18 = (min(var_18, ((-1479208243 * (((min(20, -36))))))));
    }
    #pragma endscop
}
