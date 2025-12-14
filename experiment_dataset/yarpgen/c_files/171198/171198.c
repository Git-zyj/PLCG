/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((((min(0, var_10))) + (var_5 - var_8))) + (1376056048 - 1245429242)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_12, (((!(((((65515 ? -1245429234 : (arr_0 [i_0] [i_0]))) | (min(-1, (arr_0 [i_0] [i_0])))))))))));
        var_13 &= var_6;
        var_14 = (max(-2473897128167657439, 1245429257));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_15 = (arr_6 [i_1] [i_2] [i_1]);
                var_16 = (min(var_16, (arr_7 [i_1 + 1] [i_2])));
            }
        }
    }
    #pragma endscop
}
