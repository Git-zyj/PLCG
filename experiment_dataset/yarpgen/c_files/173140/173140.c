/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 &= (min(((~(min(8983764339490715886, (arr_7 [i_0] [i_1]))))), 4237737027));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 = (~var_8);
                        var_21 = arr_9 [i_3] [i_2] [i_1 - 1] [22];
                        var_22 = (((!(((~(arr_3 [i_3])))))));
                        var_23 = ((((min(-157628503507359694, 1))) <= ((((!(((~(arr_9 [1] [i_2] [1] [i_0]))))))))));
                        arr_11 [i_1] [i_1 - 1] [i_2] [i_3] = (min((max(((max(16777215, -2321881657569273751))), var_5)), (max(1490961596, (max(var_5, 1))))));
                    }
                    var_24 = (((((!(arr_10 [i_1 + 3] [i_1] [i_2] [i_1 + 3])))) <= (!532477958863358090)));
                }
            }
        }
        var_25 = 0;
        var_26 = (min(var_26, ((max((((!(arr_2 [i_0])))), var_8)))));
    }
    var_27 = var_2;
    var_28 = (1 + 2321881657569273758);
    #pragma endscop
}
