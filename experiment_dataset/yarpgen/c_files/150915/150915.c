/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((2251795518717952 ? ((~(~var_17))) : (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] = (((((-(min(3922289500, var_7))))) < ((((max(var_5, var_9))) ? (min(var_12, 238)) : var_14))));
                    arr_8 [i_0] [i_1] = var_3;
                }
                arr_9 [i_0] = (max((min(((75 ? var_17 : var_12)), (((!(arr_0 [i_0] [13])))))), ((max((arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 4]), -4872107)))));
                arr_10 [4] [i_0 - 3] [i_1] = (min(((min(var_2, var_14))), (min((arr_4 [i_1] [i_0] [i_0]), 3228285204))));
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
