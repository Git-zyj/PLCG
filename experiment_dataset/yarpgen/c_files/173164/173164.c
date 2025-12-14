/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = -64734;
        var_12 = 809;
        var_13 |= (~51656999420495449);
        var_14 = (~var_4);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_15 = (max(var_15, var_6));
                arr_10 [1] [i_1] = -4924639525159402972;
                arr_11 [i_0] [11] [i_1] [i_2] = 51656999420495449;
                arr_12 [i_0] [i_0] = ((var_2 << (15990 - 15960)));
                var_16 = (max(var_16, (((-((var_4 ? 116 : 1)))))));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_16 [23] = (!2143406118);
                arr_17 [i_0] [i_1] [i_0] [i_0] = (~51);
                var_17 ^= var_6;
                var_18 = 861;
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                arr_20 [i_4] [22] [12] = ((-8758214108633115308 ? 51656999420495449 : (255 >= -51656999420495449)));
                arr_21 [i_0] [i_1] [i_4] = ((var_1 >> (var_9 - 63106)));
            }
            arr_22 [i_1] = (((var_0 ^ -81) ? var_2 : var_8));
            arr_23 [i_0] [i_0] = ((7168 ? ((62821 ? -770379123801887440 : var_8)) : 4294967285));
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_27 [i_5] = ((((var_2 ? -15904 : -77)) * ((-(11431 + var_0)))));
        var_19 += ((-(max(var_4, var_7))));
        var_20 = ((((min(var_0, (51656999420495449 == var_7)))) ? ((var_1 ? 65532 : 255)) : (((var_8 ? 103 : var_9)))));
    }
    #pragma endscop
}
