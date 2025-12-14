/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_11 ^= ((-699217157 * (min((arr_1 [i_0]), 124))));
        arr_3 [i_0] = (((((var_6 | (arr_0 [i_0]))))) & ((-var_1 ? (arr_0 [i_0]) : (!71))));
        arr_4 [i_0] = ((((!((min(-803934389, 10370605390579737966))))) ? 7 : ((var_3 ? (~var_2) : ((((arr_0 [i_0]) ? 58212 : 0)))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_12 = (max(var_12, (7952 == 7)));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_13 = (~(arr_9 [i_1 - 1] [i_2] [i_3]));
                    arr_14 [i_1] [i_2] [i_3] [i_3] [i_1] = (arr_0 [i_1 + 1]);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_14 ^= (8875 ^ 170);
                    var_15 = (min(var_15, ((((~(arr_8 [i_1] [i_1])))))));
                    arr_19 [i_3] [i_2] [i_3] [i_3] [i_3] = ((((arr_6 [i_1] [i_1]) >> (!-1557788169))));
                }
                arr_20 [i_1 - 1] [i_1] [i_3] = (min((((4294967288 ? 0 : 1))), (((arr_16 [i_1] [i_1] [i_3]) ? -var_1 : (min(var_2, (arr_15 [i_1 - 1] [0])))))));
            }
            var_16 = (arr_0 [i_1]);
        }
        arr_21 [i_1] = (var_9 < 14410441443670151331);
    }
    var_17 = (min((max((~var_1), 1)), (((!(!1645392184))))));
    #pragma endscop
}
