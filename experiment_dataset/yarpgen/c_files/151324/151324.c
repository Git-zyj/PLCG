/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [0] [i_1 - 1] |= (~3363907123250483545);
                arr_6 [i_0] [i_1] [14] |= 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_11 [i_2] = -1764645511;

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_14 [i_4] [i_4] [i_4] [i_4] = ((65535 ? var_3 : ((((arr_13 [i_4] [i_3] [i_2]) <= (arr_8 [i_3]))))));
                    var_16 = -82;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_12 [i_3] [i_4])));
                                var_18 = ((((((3363907123250483545 ? 255 : (arr_18 [i_2] [i_3] [3] [i_3])))) ? (~var_13) : (var_1 - 1))));
                                var_19 = ((~(((arr_16 [i_5] [i_3]) ? (arr_16 [i_2] [i_6]) : 32762))));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    arr_24 [i_7] = (min(((((1 && (arr_15 [i_2] [i_2] [i_2] [i_2] [i_3] [i_7]))) ? (arr_7 [i_2] [i_7]) : ((0 ? var_14 : (arr_21 [i_7]))))), (-var_13 / var_13)));
                    var_20 = var_13;
                    var_21 = ((((((((arr_21 [i_7]) ? 658480866 : var_11))) || ((((arr_17 [7] [i_7 - 1] [i_3] [i_2]) >> var_4))))) ? 17179869183 : 17611189376983766062));
                    arr_25 [i_7] [i_3] [i_7] = ((~(arr_10 [i_7 + 2])));
                    var_22 -= ((max(1, var_12)));
                }
            }
        }
    }
    #pragma endscop
}
