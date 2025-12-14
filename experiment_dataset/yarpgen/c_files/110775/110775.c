/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((!((min(var_14, var_16))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = ((0 ? (min(40, (((arr_7 [i_2]) / 4)))) : (max((arr_7 [4]), (((var_10 ? var_11 : var_6)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((!((max((min((arr_7 [i_0]), (arr_5 [i_0] [i_1] [i_2]))), (((25940 ? 0 : var_12))))))));
                }
            }
        }
        arr_9 [i_0] = ((min(((min((arr_5 [i_0] [i_0] [i_0]), var_11))), ((14003609098346549970 ? -3079692829459608599 : -17)))));
    }
    #pragma endscop
}
