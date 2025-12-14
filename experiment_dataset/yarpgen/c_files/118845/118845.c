/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((((max((arr_0 [i_1]), (arr_4 [14] [14] [i_0 - 2])))) ? ((((max(4239865936380862674, var_6))) ? (((arr_0 [i_0 - 2]) ? var_1 : -49)) : ((((arr_3 [i_0 - 1]) ? -7135285282892058453 : (arr_2 [13] [i_1])))))) : (18446744073709551606 - 6290803148678569562)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_2));
                                var_20 = (~var_17);
                                var_21 = ((+(max((arr_6 [i_0]), (arr_6 [i_0 + 1])))));
                                var_22 -= ((max((arr_1 [i_0 + 1] [i_0]), (max((arr_11 [i_0] [i_1] [i_2] [i_2] [6]), (arr_3 [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, var_4));
    #pragma endscop
}
