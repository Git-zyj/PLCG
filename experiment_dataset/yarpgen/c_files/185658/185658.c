/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, ((1 ? 0 : 1))));
        var_16 = (max((-15 * 5942977494911872152), (max(var_12, (arr_2 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((1690416903 ? 18 : 8612319760968382406));
                        var_17 = max(((((var_7 ? 1996047161963400644 : var_9)) << (((max(var_9, 6659212676521864650)) - 6659212676521864638)))), (arr_5 [i_0] [i_2 - 4] [i_2 - 3]));
                        arr_13 [i_1] [i_3] [i_3] [i_2] [i_0] [i_1] = (arr_0 [i_1] [i_3 + 2]);
                    }
                }
            }
        }
        arr_14 [i_0] = (!var_3);
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (-var_14 ? (arr_16 [i_4 - 1]) : (((arr_16 [i_4 - 1]) ? (((arr_16 [i_4]) & var_14)) : (~-3))));
        arr_18 [i_4] = (max((arr_16 [i_4]), (max(((((arr_15 [i_4]) > (arr_16 [i_4])))), (max((arr_16 [i_4]), (arr_15 [i_4])))))));
    }
    var_18 = (min(var_18, ((max(-329700865, 0)))));
    #pragma endscop
}
