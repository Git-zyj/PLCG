/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((max((arr_5 [i_3]), (arr_3 [i_0])))) ? (((((var_1 ? (arr_0 [i_1] [1]) : 9163895011414880307))) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] [21]) : ((max(-26, (arr_10 [i_0 - 3] [14] [i_0] [8] [i_3])))))) : (arr_6 [i_3])))));
                                var_14 = (min(var_14, (((((max(var_5, (arr_3 [i_0 - 3])))) >= (arr_4 [i_0 + 1] [i_4 + 4]))))));
                                arr_12 [i_0] = arr_4 [i_1] [i_2];
                            }
                        }
                    }
                    var_15 = ((((((arr_4 [i_1] [i_0 - 1]) >= (arr_4 [i_0 - 2] [i_0 - 2])))) >= -41));
                    arr_13 [i_2] [i_0] [19] = ((((((-26 ? 225 : var_5) >= ((-53 ? -110 : (arr_6 [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
