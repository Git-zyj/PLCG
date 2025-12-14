/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (6531969120176812826 < -53);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (((arr_2 [i_0] [i_1 - 4] [i_1]) ? ((6531969120176812826 << (11914774953532738799 - 11914774953532738750))) : ((((!(arr_2 [i_0] [i_0 + 1] [i_1 + 1])))))));
                arr_4 [i_0] [i_0] [i_1] = (min((((arr_3 [i_1] [i_1] [i_0 - 4]) / (arr_0 [i_0] [i_0]))), ((((6746032786078113754 ? 6531969120176812826 : 0))))));
                arr_5 [i_0] [i_1 - 1] = ((203 + ((-1003965190 ? 1097901356 : 1))));
            }
        }
    }
    #pragma endscop
}
