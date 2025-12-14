/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_4));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (~2925261432);
        arr_5 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = 1;
        var_19 *= ((((~245) < 2799455331351021102)));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = ((-1 ? (5609621537381083543 ^ 117) : 12831267561544078523));
        arr_15 [i_2] = 3969192813;
        arr_16 [i_2] = (~(94 <= 162));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_20 &= ((3308559250 ? var_4 : (~var_13)));
                        var_21 ^= (((((~(arr_6 [i_2 - 1])))) ^ (((arr_3 [i_5]) ? (arr_3 [i_5]) : (arr_6 [i_2 - 1])))));
                    }
                }
            }
        }
        var_22 |= (max(3308559250, 63));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6 + 1] [i_6] = ((((min((arr_25 [i_6 - 1]), (((908868671 <= (arr_23 [i_6 + 1] [i_6]))))))) ? (~325774482) : (((((117 < 3308559250) < (var_14 < 6766)))))));
        var_23 = (min((((arr_0 [i_6 + 1]) ? -49152 : ((1 ? 94 : 161)))), ((min((arr_1 [i_6 - 1] [i_6 - 1]), (arr_1 [i_6] [i_6 + 1]))))));
        arr_28 [i_6] = ((-(((var_17 < (162 <= 0))))));
    }
    #pragma endscop
}
