/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (max(3584532384404395152, (~var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1 + 1] = ((-var_0 < ((-((var_0 ? -3584532384404395169 : var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_1 + 2] [i_3] [6] [1] = ((((((var_1 + 9223372036854775807) << (max(var_5, 0))))) % (max(9079256848778919936, var_1))));
                                var_17 = 25958;
                                var_18 = (min(var_18, var_4));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [8] = var_11;
                            }
                        }
                    }
                    arr_18 [i_2] = ((((~(max(var_12, var_14)))) * (((!((max(3584532384404395145, var_11))))))));
                }
            }
        }
    }
    var_19 = ((((~((var_3 ? 4095 : var_9)))) < ((((((max(-9114, -9121)))) > (var_8 + 1215481760))))));
    #pragma endscop
}
