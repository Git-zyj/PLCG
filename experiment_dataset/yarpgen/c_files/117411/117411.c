/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1 ? 1313963256 : 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(((var_1 >> (((max(var_1, 1755296135)) - 1755296121)))), (26937 - 26937)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = (((4294967295 && 1) - (((-3877 || (((255 ? 96 : 1))))))));
                                var_15 = (min((min((min(18446744073709551612, 3)), var_0)), (((~(((!(arr_1 [i_0])))))))));
                                arr_14 [i_0] [i_0] &= var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
