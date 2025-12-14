/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(4237670934771533633, (max((!-4237670934771533647), (~-4237670934771533633)))));
    var_17 = 8643375491855419817;
    var_18 = var_6;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = (max(((47821 ? -430265397 : 7823542685126688315)), ((((!-4237670934771533633) & (arr_0 [i_0]))))));
        var_19 = (((((56600 ? (arr_0 [i_0]) : (arr_1 [i_0])))) || ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_20 = (max(var_20, ((1 | (min((max((arr_4 [i_2] [i_2]), -4237670934771533633)), (max((arr_2 [i_3]), -4237670934771533649))))))));
                    arr_11 [i_2] [i_3] = arr_6 [i_1] [7] [i_1];
                    var_21 = (((((~4237670934771533635) + 9223372036854775807)) >> (((arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1]) - 40659))));
                }
            }
        }
    }
    #pragma endscop
}
