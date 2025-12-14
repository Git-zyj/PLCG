/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((((4038 ? -88 : 1))), var_3))) ? -168676472 : 125));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = 4294967295;
        arr_5 [i_0] = (var_2 - 122);
        arr_6 [i_0] [i_0] = (((arr_0 [i_0]) || ((((min(65518, -123))) < 168676481))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 = (((arr_2 [i_1]) << (-4271 > var_12)));
            arr_10 [i_0] [i_0] [i_1] = ((((min(var_19, var_9)) ? (arr_8 [i_1] [0] [7]) : (min((arr_8 [i_1] [i_1] [i_0]), -168676472)))));
        }
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_20 [i_2] [i_4] = arr_12 [19] [i_3] [14];
                        var_22 &= ((((((arr_3 [i_0]) - (arr_8 [i_0] [i_3] [i_4])))) - (min(var_5, ((((arr_1 [i_3]) ? -122 : (arr_16 [i_0] [i_2] [i_3] [i_4]))))))));
                        var_23 = ((+(((arr_15 [i_2 - 4] [i_2 - 4] [i_2 - 1]) ? -168676475 : 1181915634))));
                    }
                }
            }
        }
    }
    var_24 = var_17;
    var_25 = -168676472;
    #pragma endscop
}
