/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((((arr_4 [i_0] [i_2 + 3] [i_2 + 3] [8]) ? (arr_4 [i_0] [i_2 + 3] [1] [1]) : (arr_4 [i_0] [i_2 + 3] [i_2] [i_1])))) ? (((((arr_4 [i_0] [i_1] [18] [i_2 + 1]) || 0)) ? var_6 : ((var_10 ? var_1 : var_5)))) : ((((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_2 + 1]) : var_12)) * (4486624195600924249 > 13960119878108627367)))))))));
                    var_15 = ((arr_5 [i_0]) << (((((arr_2 [i_0] [i_1] [i_0]) ? (arr_5 [i_2 + 1]) : (arr_3 [i_2 + 3] [i_2 + 1]))) - 19)));
                    var_16 = (min(var_16, ((min(4486624195600924249, 13960119878108627360)))));
                    arr_6 [i_2] [i_1] [i_1] [i_0] &= (((min(((13960119878108627367 ? (arr_0 [i_0] [6]) : (arr_3 [i_0] [i_2]))), (1257955413 ^ 1216326993)))) ? (-150472297 % 1216326993) : (128 && 4));
                }
            }
        }
    }
    var_17 = ((((~var_10) << (231 - 224))));
    var_18 = (3078640302 && 4573839068783660402);
    var_19 = (max(var_19, ((((((var_11 ? 4486624195600924249 : var_11)))) ? (~11) : (min(var_2, ((var_12 >> (var_8 - 86)))))))));
    #pragma endscop
}
