/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1 - 2] [i_1 - 3] [i_1] = 1;
            var_18 = arr_4 [i_0];
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_19 ^= (!1);
                var_20 = (arr_11 [3] [i_2] [i_0]);
                arr_12 [i_0] [1] [i_3] = (248265580 || 1);
            }
            var_21 = (arr_2 [i_0] [8]);

            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_15 [i_4] [18] [i_0] = -1;
                arr_16 [i_0] [i_2 - 1] [20] [i_4] = (arr_8 [i_0]);
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] = arr_9 [i_5];
                var_22 = (min(var_22, (arr_3 [i_2 - 2] [i_2])));
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_23 *= (!1);
            var_24 = (!-7100);
        }
        var_25 -= (((3257626952 ? 1 : 1)));
        var_26 -= ((-(~1)));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_25 [i_7] = ((+((((arr_4 [15]) >= (arr_18 [i_7] [i_7] [i_7]))))));

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_28 [15] [i_7] [i_8] = ((!(32767 <= 1)));
            arr_29 [0] [i_7] = 1;
            var_27 = (min(var_27, ((((((12 - (-32767 - 1)))) <= (arr_3 [1] [i_8]))))));
        }
    }
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        arr_33 [i_9] = (((-20362 > 227) ? 12 : 1466392226));
        var_28 ^= 16;
        var_29 = (min(var_29, (((!(arr_30 [i_9 - 1] [i_9]))))));
    }
    var_30 ^= 1;
    var_31 = 1;
    var_32 = ((!(min((var_6 > var_2), (2491574118 && 1)))));
    #pragma endscop
}
