/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_9);
    var_20 = ((var_10 && (((var_8 & (((var_4 ? var_18 : -10))))))));
    var_21 = ((var_10 ? var_7 : (((var_2 % (var_9 < var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [10] [i_2] [17] = (((198 * (arr_2 [i_0] [i_2]))));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = 5945725578449762881;
                }
            }
        }
    }
    #pragma endscop
}
