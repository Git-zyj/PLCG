/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(var_0, -64));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, 22233));
                                arr_13 [6] [i_1 - 1] [i_3] [2] [i_4] = ((32256 / (arr_4 [i_2] [i_3])));
                                var_13 = (((((-12801 > 31894) << ((((255 ? -2147483634 : 2685697824)) - 2147483660)))) * (min(((max(1, (arr_2 [i_1] [12] [12])))), ((1763800228 >> (var_2 - 117131994)))))));
                                var_14 += (max((min(-12813, (arr_3 [i_1 - 1] [i_3]))), (arr_3 [i_0] [i_0])));
                            }
                        }
                    }
                    arr_14 [i_2] = (arr_0 [i_2]);
                }
            }
        }
    }
    var_15 = 44;
    var_16 += (((min(var_4, var_1)) ? (min((~var_1), var_2)) : -2147483634));
    #pragma endscop
}
