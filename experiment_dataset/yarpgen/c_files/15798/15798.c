/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((24 / (-7193996816465206003 - -18336))), -7193996816465206003);
    var_19 = ((min(-7193996816465205985, (-7193996816465206003 / 1))) | 1);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (0 | var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((~(max(-1986221801, (arr_12 [i_1] [i_1] [i_1] [15] [i_1] [i_1 + 1] [i_1 - 2]))))))));
                                var_22 = (min(var_22, (((((max(536870911, ((min(53663, (arr_4 [i_3] [i_1 - 1] [i_2]))))))) > (min(((max((arr_4 [i_3] [i_0] [i_3]), (arr_8 [i_0 + 2])))), ((~(arr_12 [8] [8] [i_2] [i_3] [2] [i_4] [14]))))))))));
                                var_23 ^= 7193996816465206003;
                                arr_13 [i_1] [i_1] [1] [i_3] [16] = (max((((!((max(48, -17)))))), 694704462810290291));
                            }
                        }
                    }
                    var_24 -= (~694704462810290302);
                }
            }
        }
    }
    #pragma endscop
}
