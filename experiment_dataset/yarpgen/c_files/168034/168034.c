/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (min(var_19, (((-(arr_2 [0] [i_0 - 2]))))));
            arr_5 [i_0] = arr_0 [i_0];
        }
        var_20 += (~(arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 3]));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 = (((arr_0 [i_0]) ? (arr_1 [i_0] [i_2]) : 9223372036854775803));

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_22 = (arr_2 [i_3] [i_0 + 2]);
                var_23 = ((-9223372036854775802 ? 1 : 0));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_0] [i_2] [i_0] = ((2 ? (((((arr_12 [i_0 - 3] [i_0 - 3] [i_4]) || 9223372036854775802)))) : 11068462104447272104));
                var_24 -= ((arr_11 [i_0 + 1] [i_2] [i_4]) ? (arr_11 [i_0 - 2] [i_2] [i_4]) : 524287);
                var_25 = 0;
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_18 [i_0] = (!7378281969262279511);
                var_26 = (max(var_26, 0));
            }

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                arr_21 [i_0] [i_6 - 1] = 5162460289117714631;
                var_27 = (min(var_27, 7527715417010615505));
                var_28 = ((-7484828769078413618 ? -18446462598732840960 : ((16 ? 8824736442311587285 : (arr_4 [i_0 - 2] [i_0 - 2])))));
                var_29 ^= (arr_14 [i_0 - 2] [i_6 - 1]);
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_24 [i_0 - 2] [i_2] [i_2] [i_0] = (((arr_8 [i_0 - 1]) ? 511 : (arr_0 [i_0])));
                var_30 = (((arr_8 [i_0 + 2]) ? 36028779839094784 : (arr_8 [i_0 - 3])));
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_27 [i_8] [i_8] = (-8652278964832351814 <= 9622007631397964360);
        var_31 = 11208;
    }
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        var_32 *= max((min(((524277 ? 18446462598732840960 : (arr_30 [i_9] [i_9 - 1]))), (max(1, (arr_30 [i_9] [i_9 + 2]))))), 243693469230924492);
        var_33 = (min(var_33, 1));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_33 [i_10] = 1;
        arr_34 [i_10] = ((1 ? (arr_28 [i_10]) : (((arr_30 [i_10] [i_10]) ? (arr_30 [i_10] [i_10]) : 30))));
        arr_35 [i_10] [i_10] = ((3 ? (arr_31 [i_10] [i_10]) : 7421492630839389481));
    }
    var_34 = (1018 ? (max((-4149585004018588988 + var_18), var_7)) : var_14);
    #pragma endscop
}
