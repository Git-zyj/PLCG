/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, (((-10531394141544499457 && (arr_1 [6] [6]))))));
        var_20 = ((((arr_0 [i_0]) && 29740)) ? ((((arr_0 [i_0]) <= 1971137206))) : ((((arr_1 [i_0] [i_0]) && (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (arr_1 [10] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_12 [i_1 + 1] [i_1 + 1] [i_4] = (arr_2 [i_4]);
                        var_22 = ((13220592145208311873 ? -2147483645 : (255 & 32767)));
                    }
                }
            }
        }
        var_23 = (min(-30, (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    {
                        var_24 = (arr_10 [i_5 + 1] [i_6 + 1] [i_8] [i_8 + 1]);
                        var_25 |= (((arr_10 [i_8 - 1] [i_7] [i_6] [i_5 + 1]) <= (arr_16 [0])));
                        var_26 = (arr_10 [i_5 + 1] [i_6 + 2] [i_7] [i_6 + 2]);
                    }
                }
            }
            arr_26 [i_6] = -59;
            arr_27 [i_6] = 279275953455104;
            var_27 = (((~29740) ? -59 : ((var_3 ? (arr_3 [i_5]) : 93627269))));
        }
        var_28 ^= ((!(arr_0 [i_5 - 1])));
        var_29 ^= (((4201340028 + 1133650116) ? 21646 : -89));
        arr_28 [i_5] = (11680573411008697206 ^ var_6);
    }
    var_30 = ((-308818687 ? var_0 : (!var_16)));
    #pragma endscop
}
