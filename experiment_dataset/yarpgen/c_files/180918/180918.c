/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((max(var_7, var_4))) ? 18446744073709551615 : ((((((var_1 ? var_0 : var_13))) ? var_11 : (65535 * var_7)))))))));
    var_15 = var_13;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_16 = 3612939917959167503;
                        var_17 = (((((15203 ? 1 : 8375111042797832021))) ? (((var_4 || (arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2])))) : (((!(arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2]))))));
                    }
                }
            }
        }
        var_18 *= (((min((((22 ? 235 : 22))), (((arr_9 [i_0] [i_0]) - 2147483647)))) + (arr_5 [i_0])));
        var_19 = (min(2147483647, (((((28538 ? (arr_3 [i_0] [i_0] [i_0]) : 32767))) ? (!18446744073709551611) : 1))));
    }

    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_20 = (!var_6);
        var_21 = 1;
    }
    #pragma endscop
}
