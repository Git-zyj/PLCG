/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_10 += ((~((max(1, var_7)))));
        var_11 *= (min(-27820, (min((((~(arr_1 [i_0])))), ((var_0 ? 8756609399333760686 : var_4))))));
        var_12 ^= (((arr_1 [18]) ? ((((3378804493506476799 ? var_6 : (arr_2 [i_0] [i_0]))) / (~var_0))) : (((~(arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_13 = (arr_5 [i_1 + 2]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_14 *= (((((arr_3 [i_3]) + (arr_8 [i_1] [i_2] [i_3] [i_3]))) < ((1171315215789133909 ? (arr_1 [i_2]) : (arr_9 [i_3])))));
                var_15 = var_1;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    {
                        var_16 = (((var_0 + (arr_13 [i_2] [i_5]))));
                        arr_16 [i_5 + 3] [i_1] [i_1] [i_1 + 1] = -var_4;
                        arr_17 [i_1] [i_2] [i_4] [i_5 + 2] = (!3484263762964290925);
                    }
                }
            }
            arr_18 [i_1] [i_2] [i_1] = 29712;
            arr_19 [i_1] [i_1 - 1] [i_1] = (1 < (arr_6 [i_1]));
        }
        var_17 ^= var_7;
    }
    var_18 = -15919691460520567871;
    var_19 = -1637483671;
    var_20 = 119;
    #pragma endscop
}
