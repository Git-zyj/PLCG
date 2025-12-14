/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = ((((min((3840 | var_16), (min(var_8, var_3))))) ? var_15 : ((max((max(-23834, 15)), ((-996 ? 15 : 40650)))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(var_20, (((((min((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1])))) ? 18446744073709551610 : var_9)))));
        arr_4 [i_0 + 1] = (((((32761 / (arr_3 [i_0 - 1])))) && (!var_7)));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    var_21 = (((~((1 ? var_15 : 0)))));
                    var_22 = (((((4779 ? (arr_0 [i_1 + 2] [i_2 + 2]) : (arr_2 [i_1 - 3])))) && (((var_12 ? var_15 : 9223372036854775807)))));
                }
            }
        }
        var_23 = (min(var_23, 2147483638));
    }
    var_24 = var_5;
    #pragma endscop
}
