/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((max((~-1), var_3)) << ((((-9510 ? 7765856413101844850 : var_2)) - 7765856413101844841))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((-((12361 >> (-5407290721001765548 + 5407290721001765572))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((!(arr_8 [i_0] [i_1] [i_0] [i_3])));
                            var_13 = (((arr_10 [i_0] [i_0] [i_3]) & (arr_6 [i_0] [i_1] [i_2])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_14 = (min(var_14, (((-(((((var_6 ^ (arr_16 [i_4])))) ? var_6 : var_5)))))));
                var_15 -= ((1 ? (((arr_16 [i_4]) | (arr_15 [0]))) : 143));
            }
        }
    }
    #pragma endscop
}
