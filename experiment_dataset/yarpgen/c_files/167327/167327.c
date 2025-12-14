/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(-29, (!227)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 += ((!((min(511, (arr_10 [i_0] [6] [0] [i_0]))))));
                        var_19 = (max((!58), ((-var_9 > (max(224, (arr_10 [i_2] [i_2] [1] [i_2])))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((~((~(max(0, -527))))));
                        var_20 = (min(var_20, (-115 + 262144)));
                    }
                }
            }
        }
        var_21 = ((-11291 ? 177 : 38969));
    }

    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_22 = (min(4183, ((~((max(21005, 32765)))))));
        var_23 = (~16720);
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_24 -= 1130752134;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_6] [i_6] [i_7] = max(((!(!1242620707))), (!-var_16));
                    var_25 -= ((4163 < ((var_9 ? 32 : (arr_7 [2] [2] [i_5 + 1] [i_5 + 1])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_26 = var_17;
                                var_27 = (!((((arr_1 [i_9 - 2]) + (arr_1 [i_9 - 2])))));
                                var_28 = (max((min((~115), (arr_25 [i_7] [i_6]))), ((((max(var_6, -256))) ? (((!(arr_21 [i_5] [i_6] [i_7] [5])))) : ((-(arr_17 [10] [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
        var_29 = (((min((~29), (~var_11))) >= (255 * 39)));
        arr_27 [i_5] [i_5 - 1] = max(1, 0);
    }
    var_30 = var_3;
    #pragma endscop
}
