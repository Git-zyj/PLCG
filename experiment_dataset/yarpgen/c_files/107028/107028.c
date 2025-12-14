/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((var_8 ? var_8 : (30720 << var_12)));
    var_15 += (var_9 > var_1);
    var_16 = ((((var_11 << ((min(var_12, 24)))))) ? var_1 : ((((3238987658890981521 ? var_11 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 -= ((29879 ? (((!(arr_5 [2] [i_1])))) : (((!(-29874 + var_13))))));
                var_18 = var_2;
                arr_6 [i_0] [i_0] = ((29879 ? (!var_13) : var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = var_3;
                            var_20 = min((arr_12 [i_0] [i_0] [i_0] [i_0]), (((((min((arr_10 [6] [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_12 [i_3] [1] [i_0] [i_0])))) ? ((~(arr_10 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0]))) : -29881))));
                            var_21 = (arr_7 [5] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
