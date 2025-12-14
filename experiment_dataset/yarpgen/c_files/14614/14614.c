/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 = ((17 ? 255 : (~0)));
            arr_6 [i_0] [i_1] = -270;
        }
        var_15 = (max(var_15, (~6)));
    }
    var_16 = (min(var_16, var_13));
    var_17 = (+-49000);
    var_18 += var_10;

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 = (((max(var_6, var_5))));
        var_20 += ((!((max((arr_7 [i_2]), (arr_7 [i_2]))))));
        arr_10 [13] [i_2] = var_6;

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_15 [i_2] = (arr_9 [i_4]);
                var_21 = (((((~(arr_7 [i_4])))) ? (var_2 ^ var_8) : ((max(0, 131040)))));
                arr_16 [i_2] [18] [18] = ((~(arr_13 [i_2] [i_3] [i_4])));
            }
            arr_17 [i_2] [i_2] = var_2;
            var_22 -= var_4;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_21 [10] = ((1 == (~65531)));
            var_23 ^= (((arr_19 [i_2]) / (arr_19 [i_2])));
            var_24 -= ((var_13 ? -256 : 118));
            arr_22 [i_2] = 4112110622283742402;
        }
    }
    #pragma endscop
}
