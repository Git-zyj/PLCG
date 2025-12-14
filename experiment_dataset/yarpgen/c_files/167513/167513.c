/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((((-1025711046 ? (min(var_13, (-2147483647 - 1))) : ((var_6 ? var_16 : var_4))))) ? -5880747 : var_18));
    var_21 += ((!((((((-94 ? var_17 : 2147483647))) ? 2147483630 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (~(max((max(var_6, 2147483647)), -35)));
                var_23 ^= (min((min((((-2147483630 ? 35 : 30430))), ((-107 & (arr_0 [10]))))), ((2147483632 - (((35112 ? 1 : -2147483630)))))));
                arr_7 [i_0] [i_0] [i_1] = (min(((min(2147483647, 3400960009))), (((arr_3 [i_1] [i_1] [i_1 - 3]) & (((65535 | (arr_2 [12]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_16 [i_3 - 1] [i_0] [i_0] [i_0] = (min(((((max((arr_4 [i_0]), 30430))) ? ((min(15, 0))) : (min(1, (arr_1 [i_0] [i_1]))))), ((min((min((arr_4 [i_0]), var_10)), ((min(1, var_3))))))));
                            arr_17 [i_0] [i_0] = var_10;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_22 [i_5 + 2] [i_4] [i_0] [i_1] [3] = (((arr_6 [i_0] [i_0]) ? (min(((6639216159226812845 ? 28832 : 365371951197128897)), ((min(1, 3000708221))))) : (((((max(-5880747, var_18)) < (8 | -2)))))));
                            var_24 = (8238291322887407298 || 2204811159883597073);
                        }
                    }
                }
            }
        }
    }
    var_25 ^= ((21 ? 127 : 233));
    var_26 = (max(var_26, var_5));
    #pragma endscop
}
