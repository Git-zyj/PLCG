/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 93));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_1 + 1]);

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_16 += (!var_3);
                    arr_8 [i_1] = (((4611686018427387904 * 10265) % 150));
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 2] = (((((16 ? -107 : (arr_3 [13])))) != (min(-1082738858, (-32767 - 1)))));
                }
            }
        }
    }
    var_17 = ((-(((!var_6) ^ -23))));
    var_18 = (max(var_18, var_11));
    var_19 = (min(var_2, var_2));
    #pragma endscop
}
