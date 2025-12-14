/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_3] = (8191 % -8191);
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] = (((!var_9) && (((arr_8 [5] [i_2] [i_1] [i_0 - 1]) || var_11))));
                        var_16 *= ((!(var_15 & var_14)));
                    }
                    arr_12 [20] [20] [i_0] [i_0] = var_0;
                }
            }
        }
    }
    var_17 = (max(((max((var_7 && var_9), (!var_1)))), (max((max(var_2, var_13)), var_15))));
    var_18 = (max(var_18, (((var_8 + (((var_10 ? (max(var_13, var_6)) : ((max(var_1, var_9)))))))))));
    var_19 = (max(var_19, var_15));
    var_20 = (max((((~((max(8192, -8220)))))), (max((~6686066087023500708), (((var_13 ? var_1 : var_4)))))));
    #pragma endscop
}
