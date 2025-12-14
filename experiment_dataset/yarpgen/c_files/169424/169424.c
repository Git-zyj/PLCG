/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((!((min(var_12, var_15))))) ? -1 : (((((var_7 ? var_8 : -10848))) ? (max(18446744073709551615, var_10)) : (~var_0)))));
    var_21 = ((var_0 / ((var_4 ? 3 : var_18))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 *= ((!((((((-1 ? (arr_3 [i_1]) : (arr_2 [i_1] [1])))) ? (((arr_2 [i_0 - 2] [i_0 - 2]) ? var_2 : -10)) : (((arr_3 [i_1]) & (arr_2 [i_0 - 1] [i_1]))))))));
                var_23 ^= min((((((arr_3 [i_1]) % (arr_1 [8]))) & (arr_3 [7]))), (((10836 || (arr_4 [i_0 - 1] [i_0 - 2])))));
            }
        }
    }
    var_24 = (4294967295 != 10852);
    #pragma endscop
}
