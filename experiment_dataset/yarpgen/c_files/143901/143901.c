/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_10, ((var_2 + (-18131 >= var_0))));
    var_15 += ((!((((var_7 == 147) ? ((0 ? var_7 : 108)) : (-9223372036854775807 - 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = 12582912;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = ((!(arr_3 [i_1])));
            arr_4 [i_0] [i_1] [i_1] = (((arr_1 [i_1]) + (arr_1 [i_0])));
        }
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = (arr_7 [i_0]);
            arr_10 [i_2] [3] = -108;
        }
        for (int i_3 = 4; i_3 < 8;i_3 += 1) /* same iter space */
        {
            var_18 ^= 227;
            var_19 = (arr_2 [i_3] [i_3] [i_3]);
        }
        for (int i_4 = 4; i_4 < 8;i_4 += 1) /* same iter space */
        {
            var_20 = ((((-4080492764576195503 ? (arr_14 [8] [1]) : 1517675881)) & 60));
            var_21 = 108;
            arr_18 [0] [i_4] [i_4] = (arr_2 [i_4] [i_0] [i_4]);
        }
        arr_19 [6] [i_0] = 0;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_35 [i_5] [i_7] [i_8] &= 0;
                        var_22 = (max(1517675868, 147));
                    }
                }
            }
        }
        arr_36 [i_5] [i_5] = (arr_33 [i_5] [9] [7] [18] [3] [3]);
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_23 += (arr_23 [i_9] [3]);
        arr_39 [i_9] [i_9] = ((((max((((arr_32 [i_9] [1] [16] [6] [i_9]) ? 21 : -1572350374951306743)), (((arr_20 [i_9]) ? 110 : (arr_20 [8])))))) ? (arr_38 [i_9]) : (((arr_25 [7]) ^ ((max(-32757, 244)))))));
        var_24 = 6401333988930818142;
    }
    #pragma endscop
}
