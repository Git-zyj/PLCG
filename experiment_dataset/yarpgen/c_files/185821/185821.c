/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 2] = -23433;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(((arr_12 [i_2 + 2] [i_1 - 2]) | var_1))));
                        arr_14 [i_1] [i_1 + 3] [i_3] [i_3] [i_1] [i_0] = -111474330;
                    }
                    var_18 = ((~((min(-110, -97)))));
                }
                var_19 = ((-(~110)));
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_20 = 32766;
        var_21 = -var_6;
    }
    var_22 += var_9;
    #pragma endscop
}
