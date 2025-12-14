/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((-9223372036854775787 ? var_12 : var_1)) ^ var_2))) ? (min((min(1, var_2)), (4294967278 && 1819753330))) : (~1488765190)));
    var_15 = (max(var_15, var_9));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = -3638699810340398661;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 += ((-7253466939047116839 ? (min(var_8, (min((arr_7 [i_4] [9] [9] [9]), var_7)))) : (min(var_10, ((min(var_2, 4294967266)))))));
                                var_18 -= var_12;
                                var_19 = (arr_13 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
