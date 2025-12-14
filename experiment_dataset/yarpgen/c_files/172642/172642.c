/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((2585089172766147249 + 15861654900943404366) & (((((var_5 && var_8) != 2585089172766147274))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_10 = ((((((arr_7 [i_1 + 2] [i_3 - 3]) | ((var_1 ? 19639 : 4004280823340818338))))) ? 1 : ((min(1, var_4)))));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = (arr_13 [i_0] [i_1]);
                    }
                }
            }
        }
    }
    var_11 = (var_5 + var_4);
    var_12 = (max(var_12, 6602046574277729129));
    var_13 = ((var_0 != (((min(var_5, var_4)) ? (var_5 + var_0) : ((13 ? var_1 : -6602046574277729129))))));
    #pragma endscop
}
