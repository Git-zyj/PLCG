/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((min(-26705, 28216))) >= (33554176 >= var_9)));
        var_12 ^= (min((min(1647422098, 229)), (!5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] &= (max(47, -var_4));
                    var_13 = (max(var_13, 26713));
                    arr_10 [i_1] = var_0;
                    var_14 += -54;
                }
            }
        }
        arr_11 [i_0] [i_0] = (((((-54 + 2147483647) << (189 - 189))) >= (~28216)));
        var_15 = (((((max(1, 4250425844436595528)))) >> 0));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = 26162;
        arr_16 [i_3] = 37582;

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_22 [i_3] [i_3] [6] = ((~-856299871140984973) + var_11);
                var_16 *= var_10;
            }
            var_17 -= ((1154435393 ? -856299871140984973 : -292557700));
        }
        arr_23 [i_3] = ((0 * (-9223372036854775807 - 1)));
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_18 = (max(var_18, (((~(((((8654 ? -158391309 : 1)) <= (((-26681 + 2147483647) << (((-158391309 + 158391334) - 25))))))))))));
        var_19 += ((!((max((-4034611318926425071 >= 310), ((28189 << (13052 - 13050))))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_20 = (max(var_20, var_10));
                arr_31 [i_8] = (min((~35184372088831), ((((37312 ? var_4 : 296573172257818695)) - var_4))));
                arr_32 [i_8] = ((-(max(0, ((28216 >> (-13053 + 13058)))))));
            }
        }
    }
    #pragma endscop
}
