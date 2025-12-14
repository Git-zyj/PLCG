/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -13307;
    var_20 = -731099208;
    var_21 = (min((~2406733257659091442), var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (min(var_22, 731099207));
        var_23 = 3217510459;
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_24 = max(((-(min(731099207, -731099202)))), 731099207);
            var_25 &= (max((max(352306373, 5311742990457925139)), 731099215));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_26 = (max((max(1366305356, (max(9223372036854775807, 166)))), (~-21675)));
                        var_27 = -876924717;
                        var_28 = (min(var_28, -2082448728));
                        arr_16 [i_4] [i_3] [i_2] [i_1] &= -0;
                        var_29 = 99;
                    }
                }
            }
        }
        arr_17 [i_1] = (min(1077456836, 127));
        arr_18 [i_1] = (max(365710468, -14645338820443952028));
        arr_19 [i_1] = (max((~10877864753774011761), 1875910018));
    }
    #pragma endscop
}
