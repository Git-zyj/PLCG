/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? ((((2097088 ? -2097088 : -2097089)))) : -var_14));
    var_19 |= (((((-(max(-41, 12834097101463869325))))) ? (min(-2097086, 1)) : var_9));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (!((min((arr_2 [1] [15]), (min((arr_1 [i_0]), (arr_2 [1] [1])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_8 [i_1] [i_1] [9] = (arr_7 [i_1] [i_0]);
            var_20 -= 1;
            arr_9 [i_0] [i_1] = (!(arr_6 [i_0]));
        }
    }
    #pragma endscop
}
