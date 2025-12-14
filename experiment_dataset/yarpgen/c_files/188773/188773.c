/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_2;
    var_14 = (~var_0);
    var_15 = var_4;

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 &= (min((((arr_0 [i_0]) ? 46389 : ((var_3 ? -2 : (arr_4 [i_2]))))), (arr_8 [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 + 1] [i_2 + 4] [i_2 + 3])));
                        var_17 = (max(var_17, 65535));
                        var_18 = (max((arr_5 [i_0 - 1] [7] [i_0]), var_4));
                    }
                }
            }
        }
        var_19 -= (((2480857582282519369 & var_12) % (arr_2 [i_0] [11])));
        var_20 -= 31605;
        var_21 |= (max((((~(arr_4 [i_0 + 2])))), ((((-127 - 1) > 2147483647)))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_12 [6] |= ((15965886491427032247 ? 1 : (arr_9 [i_4 - 1] [i_4 - 1])));
            var_22 = (((~1) != ((var_11 ? (arr_4 [i_0]) : var_8))));
            var_23 = (max(var_23, ((((arr_10 [i_0 + 3] [i_0 + 3]) + (arr_10 [i_0 + 2] [i_0 + 4]))))));
        }
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_24 = ((!((((~949551954) - (arr_9 [i_5] [i_5]))))));
        arr_17 [i_5] [i_5] = -var_5;
        var_25 = (min(var_25, ((((min((arr_4 [i_5 + 3]), (-127 - 1))) <= 121)))));
        var_26 = ((-563724012 ? ((((max(3394431436, 1))) ? (!127) : 0)) : var_2));
    }
    var_27 &= (max(var_12, ((~((min(var_1, 0)))))));
    #pragma endscop
}
