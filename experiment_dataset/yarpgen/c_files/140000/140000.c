/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 ? (min((max(-7202363015946479450, 0)), -var_14)) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((((((arr_1 [i_1 - 1] [i_1 - 1]) * (!995169507626286360)))) && (((((((arr_4 [i_0] [i_1] [i_2] [i_2]) ? (arr_5 [12] [i_1] [i_2]) : var_3))) ? 48 : (max(var_5, (arr_3 [i_2]))))))));
                    arr_7 [i_2] [i_0] = (min(20720, (((((36868 ? 44841 : -19833))) ? -63 : 44803))));
                    arr_8 [i_0] [i_1] [i_2] = ((~(max((~var_1), (~20720)))));
                }
            }
        }
    }
    #pragma endscop
}
