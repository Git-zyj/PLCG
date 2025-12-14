/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (+-1);
        var_21 = ((-18446744073709551615 ? (-2147483647 - 1) : 11737589201679841353));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_22 = ((-(((var_1 + 2211495807) ? -6983406994552216716 : 7310129277141720531))));
                    var_23 = ((11737589201679841353 ? ((3436475039 & ((((-2147483642 + 2147483647) << 0))))) : 1823640079));
                }
            }
        }
    }
    var_24 = ((-2549 >= (((((11737589201679841355 ? -2147483635 : 205))) ? var_18 : ((min(1, 1491861396)))))));
    #pragma endscop
}
