/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-6615576050017783787 / (min(-1080285125, var_5)))));
    var_11 = var_2;
    var_12 = -3491707289578177624;
    var_13 = -0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = ((1 != (((((min(-190046708890572715, var_7))) || (var_5 != 31962))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((((1 - 6615576050017783793) + ((((arr_9 [i_0] [i_1] [1] [i_2]) + -85))))) | (((-(((523683109 >= (arr_5 [i_0] [i_1]))))))));
                            var_15 = ((((!(arr_8 [i_1] [i_1])))));
                        }
                    }
                }
                arr_11 [i_0] = 18377122499858921843;
            }
        }
    }
    #pragma endscop
}
