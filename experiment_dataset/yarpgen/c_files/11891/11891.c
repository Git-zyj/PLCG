/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_3) || var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(65535, 32505856));

                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [i_1] = 27;
                    var_13 = (min(var_13, ((min((var_0 > 3), (~27))))));
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_14 -= ((((var_2 < var_6) < (!var_0))));
                    var_15 -= (max((18 / 9223372036854775792), (min(((4294967295 ? 4294967287 : 4294967277)), ((8384512 ? var_5 : 4))))));
                }
                var_16 = (max(var_16, ((max(var_3, ((-(max((arr_10 [18] [i_1]), (arr_4 [i_0] [i_1] [5]))))))))));
            }
        }
    }
    var_17 = var_7;
    var_18 = (7 | 12);
    #pragma endscop
}
