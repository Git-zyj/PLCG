/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_5 == 8155604687532128286);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((!(!var_14)));
        var_18 = (((((min(var_13, (arr_1 [i_0] [9])))) ? (arr_0 [1]) : -var_8)));
        arr_2 [18] [3] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (max(13, 18446744073709551615)) : ((7680 ? 25 : (53 - 1291178151))));
        arr_3 [i_0] = ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 -= var_6;
        arr_6 [i_1] = (((((46810 > (arr_0 [i_1])))) >> 1));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_20 -= (arr_0 [i_2]);
            var_21 -= (((((var_2 ? var_12 : var_0))) / 10291139386177423352));
            var_22 = (max(var_22, 12253320449329060073));
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_23 -= (!var_6);
            arr_12 [i_1] = 1;
            arr_13 [i_1] [i_1] = ((var_6 ^ (arr_9 [i_1] [i_3])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_24 = ((!(arr_0 [i_1])));
            arr_16 [i_1] = (!172);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_25 = 2534075321279278663;
                        var_26 ^= 10291139386177423329;
                        var_27 = (max(var_27, 1047450662));
                    }
                }
            }
        }
        var_28 += ((var_11 > (!150)));
    }
    var_29 = (max((((max(var_9, var_2)))), (var_11 == var_11)));
    #pragma endscop
}
