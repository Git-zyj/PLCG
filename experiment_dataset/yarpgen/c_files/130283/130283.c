/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((268419072 ? -22 : -9223372036854775797))) ? ((2187925972 ? -9223372036854775797 : -9223372036854775797)) : (var_9 == var_9)));
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 &= (-792868099349939908 || -1355874504);
                    var_13 = 7011578833344573977;
                    var_14 = (min(var_14, ((((((32 ? var_2 : ((var_7 ? 9223372036854775797 : var_0))))) ? (min(var_0, ((max(var_3, (arr_0 [i_0])))))) : ((max(0, var_2))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] = ((26379 ? 199 : 255));
                        arr_13 [i_0] [0] [0] [i_0] [i_0] = var_3;
                        var_15 = (max(var_15, var_1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
