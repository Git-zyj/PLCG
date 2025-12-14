/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_2, 0));
    var_13 = var_6;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (-2131608879 > 0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((!(((arr_4 [i_2] [i_2]) || (arr_4 [i_0] [i_0]))))))));
                            var_17 ^= ((-7530383259394614443 ? (((1 ? var_4 : (arr_3 [i_0])))) : -1073741824));

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_18 = (min(var_18, (((((max(-var_4, ((((arr_11 [i_1] [i_0] [i_0] [i_3] [i_4] [i_1]) ? (arr_8 [8]) : (arr_13 [3] [7] [i_2] [i_2] [i_2]))))))) ? (min((((-1073741819 != (arr_0 [10] [10])))), (((arr_9 [6] [i_2] [i_3] [3]) ? -1 : (arr_4 [i_1] [i_1]))))) : -1073741811)))));
                                var_19 = ((!(((arr_13 [i_0] [i_4 - 1] [i_4 - 1] [i_3] [i_0]) >= ((1 ? var_3 : 16642998272))))));
                                var_20 ^= ((1 != ((+((max((arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [14] [i_4 - 1]), 1)))))));
                                arr_16 [i_0] [i_0] [i_4] [i_2] [i_3] [i_4 + 1] [i_4] = ((~((((arr_1 [i_1]) || 1)))));
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_3] [i_4] [i_0] = -1073741820;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((((max(18446744073709551608, var_8))) ? 15 : (~1))) < (var_3 == var_5));
    #pragma endscop
}
