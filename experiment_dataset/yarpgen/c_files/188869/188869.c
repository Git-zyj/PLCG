/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [16] = -10319;
        var_13 = (max(var_13, (((917613411 ? 10318 : 3047635177)))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = (max(var_14, ((((~2801644630) ? (arr_10 [14]) : ((var_12 ? var_0 : ((var_2 ? (arr_9 [6] [i_2] [i_3] [i_3]) : 255)))))))));
                    var_15 *= max(-32761, (-32767 - 1));
                    var_16 = ((~(min(6405051283809006213, 1247332112))));
                }
            }
        }
        var_17 = (arr_5 [i_1]);
    }
    var_18 = 7708;
    var_19 = (min(var_19, (min(var_0, (!var_4)))));
    var_20 += ((var_9 ? var_7 : (min((max(3047635184, var_9)), ((min(var_9, (-32767 - 1))))))));
    #pragma endscop
}
