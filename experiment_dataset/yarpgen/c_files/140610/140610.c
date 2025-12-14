/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = var_15;
    var_22 = 1;
    var_23 |= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_24 = ((((min(var_10, (arr_2 [i_0] [i_1 + 1])))) && var_5));
                var_25 = (min(var_25, (((((min((arr_3 [i_0] [i_1]), var_19))) ^ (arr_3 [i_1 + 1] [i_0]))))));
                var_26 = (min(var_26, ((min((arr_0 [i_0] [i_1 + 3]), (min(var_2, (arr_3 [i_1 + 3] [i_0]))))))));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_2 - 1] [i_2] &= min((min(var_6, ((min(var_0, 1))))), var_9);
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((((var_8 ? (arr_4 [i_1 - 1]) : (arr_5 [i_2] [i_1 + 3])))));
                    var_27 = 9398374128113193009;
                    var_28 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
