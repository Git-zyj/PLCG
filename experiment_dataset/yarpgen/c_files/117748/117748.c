/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_3 & (((max(var_0, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (233 ^ 233);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = 231;
                            arr_14 [i_0] [i_2] [i_2] [i_3] = (arr_10 [i_0] [i_0] [4] [14]);
                            var_18 = (min((max((max(419645090, 1)), var_4)), var_15));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = (63 == 7376389546959945297);
                            var_19 = ((((192 ? (((233 ? 2600872251 : 11683))) : (arr_11 [i_2] [i_2 - 3] [i_2 + 1] [i_2 + 1]))) / (min(23, var_6))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = (arr_10 [15] [i_1] [i_1] [15]);
                            var_21 = ((((min((arr_8 [i_0] [i_4 - 2] [i_0]), (arr_8 [i_0] [i_4 + 3] [2])))) ? ((~((35 ? var_14 : 32758)))) : (((!(((var_10 ? 44531 : 32758))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 &= var_12;
    var_23 += var_14;
    #pragma endscop
}
