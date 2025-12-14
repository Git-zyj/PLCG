/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = (min(((1745988877249670179 >> (3136770586 - 3136770548))), (~-6668866008488298504)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = (i_0 % 2 == 0) ? ((((3136770586 << ((((~(arr_4 [i_0] [i_0] [i_2]))) + 2509918774810657632)))))) : ((((3136770586 << ((((((~(arr_4 [i_0] [i_0] [i_2]))) + 2509918774810657632)) - 4061054287451241967))))));
                        var_16 = (max(var_10, (((!(arr_10 [i_0]))))));
                        var_17 = ((((((min(1167844296, var_1))) ? var_7 : (arr_3 [i_0] [i_1] [i_3]))) & (31 || 1158196683)));
                    }
                }
            }
        }
        var_18 = 28;

        /* vectorizable */
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            arr_14 [i_0] [i_0] [i_0] = (arr_4 [i_4 - 1] [i_0] [i_4]);
            var_19 = (max(var_19, (!var_2)));
            arr_15 [i_4] [i_0] = ((-32 <= (arr_9 [i_0])));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_6] [i_6] [i_5] [i_0] [i_6] &= ((((-32 ? 4120055217299451299 : (arr_4 [i_0] [i_6] [i_5]))) / (((639938585 ? 190 : var_13)))));
                            var_20 = (max(var_20, -4120055217299451299));
                        }
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            arr_28 [i_8] [i_0] [i_5] [i_0] [i_0] = (!28);
                            arr_29 [i_5] [i_5] [i_5] [i_0] [i_5] = ((((arr_5 [i_0] [i_4]) ? 332657743 : (arr_18 [i_0]))));
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((arr_12 [i_0] [i_4 + 3]) << (((arr_12 [i_0] [i_4 - 1]) - 204)))) : (((arr_12 [i_0] [i_4 + 3]) << (((((arr_12 [i_0] [i_4 - 1]) - 204)) - 32))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
