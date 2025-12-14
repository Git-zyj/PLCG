/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_20 = (min(((((arr_7 [i_0] [i_1] [i_0] [i_2] [i_0]) ? (arr_4 [i_1] [i_3]) : (min((arr_3 [i_3] [i_1]), var_8))))), (min(14025161838343196307, (((-12635 ? var_14 : 0)))))));
                            var_21 = arr_0 [i_3 + 1];
                            var_22 = (max(4421582235366355323, (arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                            var_23 = (((-32767 - 1) != (-2147483647 - 1)));
                        }
                    }
                }
                var_24 = (max((min(1, 18446744073709551615)), ((4421582235366355321 * (arr_0 [i_0])))));
            }
        }
    }
    var_25 = (((((((var_7 ? var_9 : var_18)) << (var_14 == 1)))) ? 0 : var_10));
    #pragma endscop
}
