/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((min((((arr_1 [i_0] [i_1]) ? var_9 : (arr_3 [i_0]))), (max(var_6, 3931885277))))) ? ((((((max((arr_0 [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0 - 2])))) > 3946337397014766314)))) : ((123 ? ((1271983041 ? 4272489214 : 602757554)) : ((((arr_1 [i_0] [i_0]) ? 0 : (arr_1 [i_0] [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_10 = ((((min(-112, 812002785))) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [14] [i_4] [11]) : (arr_1 [i_0] [i_4])));
                                var_11 -= ((~(min((arr_3 [i_1]), (arr_3 [i_1])))));
                            }
                        }
                    }
                }
                var_12 = (-((-18446744073709551615 * ((max((arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2]), 213))))));
            }
        }
    }
    var_13 = (min(var_13, (((~((min(var_7, 9))))))));
    var_14 &= max((((((var_1 ? 1641942330 : 1881123031)) <= (((max(var_0, var_6))))))), var_2);
    #pragma endscop
}
