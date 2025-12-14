/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-((-396581807 ? var_5 : var_4)))) == ((max(var_7, ((max(var_4, var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((((min((arr_7 [i_0] [i_1] [i_2] [i_1]), (max((arr_5 [9] [i_1] [i_0] [1]), -396581785))))) & (((arr_6 [i_0] [i_0]) / (((min(-20087, (arr_3 [1] [i_2])))))))));
                    var_21 &= ((~((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_22 = (200944691 ? ((min((max(1240040388, var_17)), ((min(var_13, -20097)))))) : var_9);
    #pragma endscop
}
