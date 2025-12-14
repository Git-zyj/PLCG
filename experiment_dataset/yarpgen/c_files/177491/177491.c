/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] = (min((((arr_3 [i_0 - 1] [i_1 + 2]) ? 128 : (((1708627848 <= (arr_2 [i_0])))))), 57018555));
            var_11 = 57018555;
            arr_7 [i_0] [i_0 + 1] [i_0 - 2] = ((~(((~57018563) % ((8 ? 57018546 : var_10))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [i_2] = var_8;
            arr_11 [i_0] [i_2] &= ((!(~176)));
        }
        var_12 ^= (~1288222393);
        var_13 = (((~var_9) ? (~-var_2) : 57018546));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_14 = (((min(((var_4 ? 67 : (arr_4 [i_3] [i_3] [i_3]))), (arr_3 [i_3] [i_3])))) ? (((((58 ? var_7 : var_3))) ? ((-689143509 ? (arr_14 [i_3]) : (arr_15 [i_3]))) : (min(-174513658, (arr_0 [i_3]))))) : ((~(~-57018562))));
        var_15 = arr_2 [i_3];
        var_16 &= min(2147483636, (~var_5));
    }
    var_17 = var_0;
    #pragma endscop
}
