/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_17 = ((-(var_16 >= -55)));
            var_18 ^= (((arr_4 [i_0]) ? (arr_3 [i_0]) : -var_7));
        }
        arr_5 [i_0] [i_0] = ((44 > ((9923359753214790414 ? (arr_0 [i_0]) : -55))));
        var_19 -= ((~(arr_2 [i_0] [i_0] [i_0])));
    }
    var_20 = var_0;
    #pragma endscop
}
