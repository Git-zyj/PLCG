/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 14713825440083981933;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((~(((!(!0))))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (min((((((16093 >> (18446744073709551615 - 18446744073709551584)))) ? 5636339328078776078 : (~1))), (arr_0 [i_0] [i_0])));
                    var_18 = ((!(((min(var_9, (arr_4 [i_2] [1] [i_0])))))));
                    arr_9 [i_0] [i_1] [i_0] = ((4937822 ? 557373480 : ((-9 ? 18446744073709551610 : 17196990838427843022))));
                }
            }
        }
    }
    var_19 = ((var_3 ? var_4 : 18446744073709551607));
    #pragma endscop
}
