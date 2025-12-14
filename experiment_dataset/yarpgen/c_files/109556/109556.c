/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = (min(var_10, (((((var_1 && (arr_0 [i_0]))) || (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_11 = (min(var_11, ((((arr_1 [i_0] [i_1]) < (arr_1 [i_0] [i_1]))))));
            var_12 = (min(var_12, ((((~var_9) ? var_4 : var_6)))));
            arr_5 [6] [i_0] [i_0] = var_4;
            var_13 |= (((((min(-5453477224842529540, 0)) + 9223372036854775807)) >> (!-105)));
            var_14 = (max((((var_7 < (arr_2 [i_0] [i_1])))), (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_9 [i_2] [i_2 + 1] = -9012194020965160840;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_15 = ((!((((!var_2) & (((arr_4 [i_2 + 1]) ? var_1 : 81)))))));
                        arr_15 [i_2] = (((((arr_13 [i_3] [i_4] [i_3] [i_2] [i_2] [i_4]) ? -903836243 : (arr_14 [i_2] [i_2 + 1] [i_2 + 1])))) || (arr_8 [i_3] [i_3] [i_2]));
                    }
                }
            }
            var_16 &= var_3;
        }
        var_17 ^= (((min(((var_4 ? var_2 : var_6)), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 108 : var_1)))) & ((((max(var_6, (arr_12 [0] [0])))) ? ((max(100, 81))) : (min(var_6, var_2))))));
    }
    var_18 = var_0;
    #pragma endscop
}
