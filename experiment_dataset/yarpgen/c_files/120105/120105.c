/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 = (min(var_14, (((var_3 ? var_5 : ((~(arr_0 [i_0 - 1]))))))));
            var_15 = (arr_2 [i_0 - 1] [i_0 - 1]);
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_16 = var_8;
            var_17 -= ((0 ? -1 : 18446744073709551605));
        }
        arr_6 [14] = ((((min((arr_5 [i_0 - 1]), var_2))) && (-1 && 168234919)));
    }
    var_18 += ((((((var_1 ? var_1 : 173)))) >= var_4));
    var_19 = (((((~(var_6 & var_3)))) && (!var_5)));
    #pragma endscop
}
