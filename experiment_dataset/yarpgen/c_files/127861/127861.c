/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_8, ((max((min(var_10, var_12)), ((min(384, 20875))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 1] = ((-(~var_4)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = min((min((arr_1 [i_2]), (arr_1 [i_2]))), (((+((((arr_5 [i_1]) > 254)))))));
                    arr_10 [i_1] [i_1] [i_1] = ((~(arr_3 [i_0])));
                }
            }
        }
    }
    var_16 = ((-((((0 > (-2147483647 - 1))) ? (min(var_12, var_13)) : var_9))));
    #pragma endscop
}
