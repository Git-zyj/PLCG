/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((36 ? 7232133426236431168 : var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (max(0, 0));
                    var_14 = (min(var_14, ((((((((arr_3 [i_0] [i_0] [i_1]) ? (arr_2 [i_2] [i_2]) : -7232133426236431172)) > ((((arr_0 [i_2]) ? (arr_5 [i_0]) : (arr_3 [i_2] [14] [i_2])))))) ? ((((arr_6 [i_0]) < (arr_3 [i_0] [4] [i_1])))) : 1344638700)))));
                    var_15 = ((((((arr_5 [i_1]) ? (((arr_3 [18] [18] [i_0]) << (var_1 - 3685779312304197641))) : (((((arr_3 [i_0] [i_1] [i_0]) && (arr_4 [i_1])))))))) ? ((~(arr_5 [i_0]))) : (((min(-10482, (arr_6 [i_2])))))));
                    var_16 = (max((((((((arr_0 [i_1]) ? -36 : 3187852419))) > (arr_6 [i_0])))), (max((((arr_4 [i_0]) ? var_7 : -111)), (arr_0 [i_1])))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (((arr_4 [i_0]) <= (((arr_1 [i_0]) ? (min(18446744073709551601, 4066116590)) : (arr_4 [i_0])))));
                }
            }
        }
    }
    var_17 = 3187852419;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (!-1);
        var_19 = (min(var_19, ((((!4066116590) ? 3187852409 : 7403434723832330453)))));
    }
    var_20 = ((var_4 ? (min(((var_10 ? var_1 : var_5)), var_5)) : (((((1107114904 ? 1801947365 : 3187852419)) % (max(var_11, var_0)))))));
    #pragma endscop
}
