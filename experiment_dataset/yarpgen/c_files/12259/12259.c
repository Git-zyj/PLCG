/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, (((161 ? (arr_2 [i_0]) : (arr_0 [i_0]))))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_17 = ((~(-127 - 1)));
            arr_8 [i_0] [9] [i_1 - 1] = (((((~(arr_2 [12])))) + ((3425692143 >> (((max(3425692143, -1188495597)) - 3425692129))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_18 -= ((~(max((((arr_1 [i_0]) ? var_3 : -106)), 869275153))));
                    arr_14 [i_0] [18] [i_0] |= (((((arr_7 [i_3 + 1] [i_3 + 1]) || (((-(arr_1 [3])))))) || (!869275153)));
                }
            }
        }
        arr_15 [i_0] [i_0] = (((arr_9 [i_0] [i_0]) ? (arr_2 [i_0]) : ((((arr_9 [2] [14]) || (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    arr_20 [i_0] [i_0] [i_5] = 863972086;
                    var_19 = ((((-106 | (arr_12 [i_0] [11])))));
                }
            }
        }
    }
    var_20 += var_13;
    var_21 = (((-71 != var_8) ? var_1 : (((((var_1 <= 7) == var_11))))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_22 = 105;
                    var_23 &= ((((min((((arr_23 [i_6]) ? (arr_0 [i_6]) : var_12)), (arr_13 [i_6] [i_6] [i_6] [i_6])))) ? (min(((((arr_19 [i_8] [i_8] [i_8] [i_7]) ? (arr_21 [i_6] [i_7]) : (arr_18 [i_8])))), (arr_0 [18]))) : (arr_9 [i_6] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
