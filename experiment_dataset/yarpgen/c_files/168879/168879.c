/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (min(45, 21799));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (~-7922281626980219628);
                var_22 = 10;
                arr_6 [i_0] [i_0] = ((((((arr_2 [i_0]) % (arr_2 [i_0])))) ? ((-1955442295 ? (arr_4 [i_1] [0]) : 10)) : 714434380));
            }
        }
    }
    var_23 = (max(var_23, (((((var_15 <= (!var_16))) ? var_10 : (max((((var_15 + 2147483647) << (((var_3 + 40) - 14)))), ((9 >> (18446744073709551615 - 18446744073709551604))))))))));
    #pragma endscop
}
