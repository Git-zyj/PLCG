/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-var_9 <= -1092365184160631373);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_3] = (((!var_6) >= (max((~var_7), var_10))));
                        arr_13 [7] [i_0] = ((-18089452691376008172 * ((((8585740288 ? var_0 : 1117821467)) + (((~(arr_0 [i_0]))))))));
                        arr_14 [1] [i_1] [i_1] [i_0] [6] [i_0] = (min(var_9, ((var_8 - (var_2 % var_3)))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] = (min(1, 240));
                            arr_25 [i_6] [i_1] [i_6] = (~1072693248);
                            arr_26 [i_0] [i_0] = ((((max((~240), var_8))) ? var_2 : ((((arr_16 [i_4] [i_6] [i_4 - 1]) ? (arr_23 [i_0] [i_5] [i_4 - 1] [i_6 + 1] [i_6] [9] [i_0]) : (arr_16 [i_0] [21] [i_4 - 1]))))));
                            arr_27 [i_0] = (!-31447);
                        }
                    }
                }
            }
            arr_28 [i_0] [i_1] = (max((0 && 9000863745331576793), (74 % 166)));
            arr_29 [i_1] [i_1] |= (arr_4 [i_0] [i_0] [i_1]);
        }
        arr_30 [i_0] = (!14);
        arr_31 [6] = (~1);
    }
    #pragma endscop
}
