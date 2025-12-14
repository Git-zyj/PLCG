/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(-11, 255))), var_8));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (max(var_17, ((max(((-17035 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_18 -= 31555;
                        arr_12 [i_0] [i_1] [i_1] [0] [i_3] = max(-17035, 11421054315061174334);
                    }
                }
            }
        }
        var_19 += ((arr_9 [8] [i_0] [i_0] [7]) ? (max(((((arr_2 [i_0] [i_0]) ? 255 : (arr_5 [i_0] [i_0] [i_0])))), var_3)) : (((var_5 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (!9223372036854775783)))));
    }
    #pragma endscop
}
