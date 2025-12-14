/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 -= 6706521176832990725;
        arr_2 [i_0] [i_0] = ((864691128455135232 ? (1073741823 * 3221225473) : 1073741837));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 &= 30602;
        var_16 = (min(var_16, ((((arr_5 [i_1] [i_1]) != (var_4 == -1299964998))))));
        arr_6 [i_1] = (((arr_5 [i_1] [i_1]) ? var_10 : ((219 ? 34934 : -118))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_3] = ((-82220484 ? (((((var_12 ? 0 : (-9223372036854775807 - 1)))))) : ((1073741831 << (8754397519813314795 - 8754397519813314766)))));
                        var_17 &= (((((~(arr_16 [i_3 + 2] [i_5] [i_5])))) & 3221225472));
                        var_18 = ((((((arr_8 [i_3 - 1] [i_3]) - (arr_8 [i_3 + 1] [i_3])))) ? (((1073741822 << (((((arr_0 [i_5]) + (arr_17 [1]))) + 11925))))) : (max(((((arr_7 [i_2]) ? (arr_14 [i_3]) : (arr_4 [i_2] [i_2])))), (max((arr_13 [i_2] [i_4] [6]), var_12))))));
                    }
                }
            }
        }
        var_19 = 9223372036854775807;
        arr_19 [i_2] [8] = (-82220494 / 255);
        var_20 = (max(var_12, (arr_13 [i_2] [i_2] [i_2])));
    }
    var_21 = var_7;
    #pragma endscop
}
