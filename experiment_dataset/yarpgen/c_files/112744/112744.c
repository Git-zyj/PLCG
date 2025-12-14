/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(4664, 4819162060303983179)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = (((~2916897836920322742) | ((((13351536237711723579 >> (var_9 - 6871954570183574643))) | (50689 | 65535)))));
        var_19 = (min(var_19, 6219537514252016510));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = 13609;
        var_21 = (7602118989460841589 * (((991 * 0) / 31436)));
        var_22 = min(29753, (max((min(15529846236789228873, 10388203196589693920)), (7070219763950880413 & var_9))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = (min((min(36403, (10720613476964874148 + 13111759652088692426))), (max((((12765 << (11376524309758671202 - 11376524309758671187)))), (max(13036292958790980648, 54601))))));
                    var_23 = (((var_13 < 54601) ^ 65535));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] = max(6810323001463464028, 0);
        var_24 ^= (min((((!var_1) >> (var_16 - 22675))), 35782));
    }
    #pragma endscop
}
