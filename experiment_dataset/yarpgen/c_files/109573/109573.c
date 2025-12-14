/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((+((max((((arr_2 [i_0]) <= 1)), (1 && 18446744073709551600))))));
                var_15 = (1 ? 2 : 7719);
                var_16 = ((~(((arr_0 [i_0 + 2]) ? ((min((arr_7 [i_0 + 1] [i_1]), var_4))) : var_3))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((1 > (!18446744073709551598)));
                            var_18 = (max(var_18, 1));
                            arr_16 [i_0] [i_0] [i_2] [i_3] = ((((max((1 % 255), (-3492773622929299678 && 1)))) ? (min((16 >> var_9), var_6)) : 2));
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, ((max(((var_4 >> (18446744073709551605 - 18446744073709551604))), var_14)))));
    #pragma endscop
}
