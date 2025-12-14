/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (var_4 >= 1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (((max(((33 ^ (arr_6 [16] [i_0] [i_0]))), var_15))) ? (((min(63, 1)))) : (((((39 ? 63 : 45))) ? (((max(40, -69)))) : (arr_0 [i_0]))));
                                arr_13 [i_0] [i_3] [i_2] [16] [10] [i_3] [i_2] |= (arr_3 [20] [20] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, (((-58 * ((((~-5508024521620982250) <= var_17))))))));
    var_22 = ((var_3 | ((((var_8 % 5508024521620982250) ? (!var_4) : var_5)))));
    var_23 = (max(3717611654, var_6));
    #pragma endscop
}
