/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -16578;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_21 = 16578;
            var_22 = (var_12 ^ 3620564567);
            var_23 = 1073610752;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_24 = (min((min((var_4 ^ -3922331360868010449), (13080 ^ var_15))), (arr_1 [i_2 + 2] [i_0])));
            arr_10 [i_2] = (((((((-17011 ? 13897147233724558206 : 32767)) | (((145 ? 16576 : -13080)))))) ? ((((arr_8 [i_2]) ^ var_9))) : (arr_0 [i_0] [i_0])));
        }
        var_25 = -9223372036854775803;
        var_26 = (arr_4 [i_0] [i_0] [13]);
        var_27 |= ((((((arr_0 [i_0] [i_0]) ? 16579 : var_17))) ? (((((((max(var_10, var_3)))) < ((13040840108424257573 ? 1863490110 : var_1)))))) : 2144952486015765682));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_28 = 65535;
            var_29 |= ((var_5 || (((32376 ? 16582 : (arr_12 [i_3]))))));
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_30 = ((((-928870083 ? (arr_18 [i_3] [i_3]) : (arr_17 [i_3]))) < (arr_11 [i_3] [i_3])));
            var_31 *= arr_12 [i_5];
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_32 = ((674402713 < (arr_11 [i_3] [i_3])));
                        var_33 = 255;
                        arr_25 [i_3] [i_5] = (((((-32397 ? -17028 : 0))) ? (((var_15 ? 32380 : 255))) : ((var_7 ? var_12 : var_10))));
                    }
                }
            }
            var_34 += 39;
            var_35 = arr_12 [i_5];
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_36 = 238;
            var_37 -= (((((35184372088831 ? (arr_27 [i_3] [i_3] [i_3]) : 134))) ? (((-32372 ? (arr_24 [0]) : (arr_19 [i_3] [i_3] [i_3] [i_8])))) : ((-32382 ? 138 : -4833768047558525568))));
        }
        var_38 = 17010;
        var_39 = (arr_17 [i_3]);
        var_40 ^= ((17018614249593190857 ? (((32382 ? 109 : var_1))) : (arr_21 [i_3] [i_3])));
    }
    var_41 = 16607;
    #pragma endscop
}
