/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((min(4264487419770874499, (arr_4 [i_2 - 2] [i_2 - 3] [i_1 + 1]))) >= 2685788621)))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_21 = (min(var_21, ((max(13381129379931371613, (((2494064091 ? 3228220758 : 260046848))))))));
                        var_22 = (max(var_22, var_9));
                    }
                    var_23 = (((((arr_7 [i_1 + 2] [i_1 - 1] [i_2 + 1] [i_2] [i_2 - 3] [i_2 + 1]) || var_16)) ? (((9963 || ((max(11680501570727272472, var_2)))))) : (!var_1)));
                    arr_10 [i_0] |= 13381129379931371613;
                }
            }
        }
    }
    var_24 = (min(var_24, ((((!var_2) ? (max(((var_13 ? 1609178665 : var_16)), (var_0 > 3312193599633060168))) : var_10)))));
    var_25 = min((min((((16491254314699373323 ? var_19 : var_14))), ((var_11 ? 10034529756368173511 : var_1)))), var_1);
    var_26 = (max(((((var_4 ? 41715 : 10034529756368173483)) * -5206363035460616777)), 0));
    #pragma endscop
}
