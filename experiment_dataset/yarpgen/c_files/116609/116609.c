/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = 11793;
    var_21 = (min(var_21, (((((max(16352, 72057593769492480)))) ? ((((((var_0 ? var_9 : var_11))) && -16353))) : (max(var_4, (max(var_6, var_9))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_22 = ((((((arr_6 [6] [i_3]) ? (arr_2 [i_0]) : 15381412820965180674))) ? (~var_0) : (arr_1 [i_1 + 1])));
                        var_23 = -16568299562385352762;
                        var_24 = (max(var_24, var_5));
                    }
                }
            }
        }
        var_25 = (arr_2 [i_0]);
        var_26 = ((var_5 > 6822049044954384781) >> (((!(arr_4 [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_27 = (max(var_27, ((((arr_10 [7]) >= (arr_12 [i_4]))))));
        arr_13 [i_4] [13] = ((var_16 ? var_16 : (arr_11 [i_4])));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_28 = (max((min(((max(var_17, (arr_14 [i_6] [i_5])))), (min((arr_14 [i_5] [i_5]), var_2)))), (arr_16 [i_5])));
                var_29 = (max(var_16, 2147483647));
            }
        }
    }
    #pragma endscop
}
