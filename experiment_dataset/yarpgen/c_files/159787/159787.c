/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~((1 ? 1 : 1))))) ? 1 : -1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] = ((1 ? var_0 : (1 + 1)));
            var_11 = (min(var_11, var_9));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0] = (((~1) ? (1 - 1) : 1));
            var_12 = (1 * -108);
            var_13 += ((var_7 ? 1 : (!var_4)));
            var_14 = (max(var_14, (-6110847988565526529 & -108)));
        }
        var_15 &= ((~1) == (!1));
    }
    var_16 = (max(var_16, 1));

    /* vectorizable */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_17 = (((~380280074950416053) ? ((var_3 ? 1 : -1)) : (-2066011510067183570 == var_0)));
        var_18 += ((-(!var_2)));
    }
    var_19 = var_3;
    #pragma endscop
}
