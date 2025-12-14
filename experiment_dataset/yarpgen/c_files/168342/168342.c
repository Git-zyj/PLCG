/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max(var_9, var_3))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 -= 30;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((((min(var_15, 6291456) != (max(var_12, var_7))))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((225 ? 4041884953502023469 : 1804044217));
                                arr_17 [i_4] [9] [i_2] [i_1 - 2] [i_0] = ((((min(((max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [3] [3] [i_2] [i_1 + 1] [i_0])))), (5606542040245485359 * 1)))) ? ((((arr_7 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) || (arr_7 [i_3 - 1] [i_3 - 1] [4] [i_3 - 1])))) : (-var_14 & var_16)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 += (min(var_9, ((((max(var_3, var_5))) ? (max(var_2, -1804044218)) : ((max(var_11, var_1)))))));
    var_22 &= var_16;
    #pragma endscop
}
