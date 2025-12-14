/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (~var_15);
                var_21 = (arr_5 [i_1] [i_0] [i_0]);

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_0] = ((((-((13663828406967508221 / (arr_5 [i_0] [i_1] [i_2]))))) < (!var_1)));
                    arr_10 [i_0] [i_1] [i_2 + 2] [i_2] = ((!(~var_0)));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_22 = ((66 ? var_16 : ((((var_5 ? var_11 : var_4))))));
                    arr_15 [i_3] [i_1] [i_1] [i_3] = ((1962193603 ? 0 : (max(-var_13, -15))));
                    var_23 = 34359476224;
                }
                arr_16 [i_1] = 2366642661236756616;
            }
        }
    }
    var_24 = 90;
    #pragma endscop
}
