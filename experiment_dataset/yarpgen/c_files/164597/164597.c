/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((4313541335253507669 ? (((14133202738456043947 ? var_2 : var_0))) : ((var_9 ? 14133202738456043947 : var_12)))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 - 2] = ((var_11 ^ (arr_1 [i_0 - 4])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] |= (var_9 ? var_8 : (arr_6 [i_0] [i_0 - 1] [i_1 - 2]));
                    var_16 = arr_3 [i_0] [i_1] [i_2];
                }
            }
        }
        var_17 ^= ((!(((var_0 ? 255 : 1665453994)))));
        arr_8 [i_0] [i_0] = (!0);
    }
    var_18 = (((((min((!-1522825959), (var_13 < 7))))) != var_6));
    #pragma endscop
}
