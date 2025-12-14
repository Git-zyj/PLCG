/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;
    var_15 = ((~(((866996520 == 866996520) * (!var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((((((min(12486, var_10)))) | 3427970775))) ? ((max((arr_2 [i_1] [i_1] [i_0]), (arr_2 [i_0 + 3] [i_0 + 3] [i_0])))) : ((((((arr_2 [i_1] [i_1] [i_0]) > 3427970755))) & (!var_7))))))));
                arr_4 [i_0] |= 866996520;
                arr_5 [i_0] = ((((min(0, 171))) ? 171 : (max(var_12, var_5))));
            }
        }
    }
    var_17 = (min(var_17, (max((!-3427970776), (max(var_9, (var_5 / 84)))))));

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] = ((~(arr_3 [i_2])));
        var_18 = (min((!var_11), (min(var_0, (866996520 < var_9)))));
    }
    #pragma endscop
}
