/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(max(((5202452130070074656 ? -7023187494433215759 : var_1)), -1))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0 + 1] [i_1] [i_1] = ((~((((((arr_7 [i_1] [i_0]) ^ var_8))) ? 8230836860478838291 : -28774))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_21 ^= (((arr_10 [i_2] [i_2] [1] [i_2]) || ((max(((((arr_0 [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_0 [i_1] [i_2])))), ((5037317120215595271 ? -3849256882565223218 : 0)))))));
                    arr_11 [i_2] [i_1] [i_2] [i_2] = ((((-7869445254956338359 * (~1))) / 5037317120215595271));
                    arr_12 [i_2] [i_2] [i_0] [i_2] = (max(-8852816898132941511, (arr_3 [2] [i_0 - 2])));
                    var_22 = ((-(max((min(var_14, (arr_1 [i_0] [i_0]))), ((min(1, 28754)))))));
                    arr_13 [9] [9] [i_2] = (min((arr_5 [i_0 + 1] [i_1] [i_2]), (arr_5 [i_0 - 1] [1] [i_2])));
                }
            }
        }
    }
    var_23 ^= ((((min(var_17, var_3))) ? var_10 : ((min(-5, var_19)))));
    var_24 = var_9;
    #pragma endscop
}
