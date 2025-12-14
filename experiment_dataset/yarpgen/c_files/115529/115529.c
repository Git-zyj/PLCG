/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_13 |= arr_2 [i_0] [12];
            var_14 = (max(var_14, (arr_3 [10] [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] [6] &= (((((var_12 ? var_12 : var_9))) ? var_10 : (var_8 || 126)));
            var_15 = (min(var_15, ((((((-252466046027946321 + 9223372036854775807) << (65533 - 65533))) > ((16 ? (arr_7 [i_0] [i_2] [i_2]) : (arr_7 [i_0 + 1] [i_2 - 1] [i_2]))))))));
            var_16 = (max(var_16, var_7));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = (((!var_1) & var_3));
            arr_14 [i_3] [i_3] [i_3] = var_12;
            var_17 = max(var_5, ((((arr_9 [i_0 + 2] [i_0 + 2] [i_3 - 1]) << (4398046511096 - 4398046511096)))));
        }
        arr_15 [i_0] = ((72 > ((-11 ? 3362688184995596542 : (var_11 && 126)))));
        var_18 = ((!((min(var_4, ((min(65535, 248))))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_19 *= 7;
        arr_18 [i_4] = ((-(((-117 ? -122 : 136)))));
        var_20 ^= (((-125 ? (((arr_16 [i_4]) ? (arr_17 [17]) : var_9)) : (((arr_17 [i_4]) ? 105 : (arr_17 [i_4]))))));
        arr_19 [i_4] &= (max((((var_8 ? ((max(135, 0))) : (((var_2 > (arr_16 [12]))))))), ((-1 ? 221916440115689278 : 55008))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_24 [i_5] = max((max((max((arr_17 [i_5]), var_7)), -48048)), ((max(((var_0 << (((arr_16 [i_5]) - 54)))), (arr_17 [i_5])))));
        var_21 = ((((255 ? ((0 ? 17592185782272 : 126)) : var_12))) ? (max((arr_23 [i_5] [i_5]), ((min(var_1, (arr_16 [i_5])))))) : ((0 ? 154 : ((var_12 ? (arr_21 [i_5]) : var_10)))));
        arr_25 [i_5] [i_5] = ((((var_0 ? (max(-2505502317515740761, -1)) : (((max(17469, 119))))))) ? ((748 ? (((2475617182614640675 ? 25 : 253))) : 6648417826698707780)) : ((((((arr_21 [i_5]) ? 2505502317515740761 : 30786))))));
    }
    var_22 = (max(var_22, ((min(130, (((((114 ? var_3 : var_12))) ? (var_3 | -1078615758142944153) : -9009149380718305143)))))));
    var_23 -= (max(0, ((-var_7 ? (var_7 < var_6) : ((var_11 ? var_0 : 252))))));
    #pragma endscop
}
