/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [13] = ((max(18446744073709551615, -1)));
        var_17 = (((((((!(arr_1 [i_0]))) ? ((105 ? 255 : 86)) : 1))) || (846792940 > 846792940)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((~((((max(10774774240702293475, 238))) ? 161 : 9283)))))));
        var_19 = var_15;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = (!2047);
                var_20 ^= ((-(!var_4)));
                var_21 = (((((!-9286) ? (var_8 ^ -9286) : 57036)) | ((-(var_1 * 0)))));
            }
        }
    }
    #pragma endscop
}
