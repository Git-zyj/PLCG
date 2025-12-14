/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((var_5 ? var_10 : var_10))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((((1023 ? 30332 : 131071)))) ? 30332 : ((242 ? 8074538610734156991 : (-30332 % 759317061)))));
        var_14 |= (min(var_12, 4));
        var_15 = (((~30332) ? var_11 : var_2));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 += ((-(18328 % 28038)));
        var_17 &= ((759317061 ? var_6 : var_5));
        var_18 -= (min(-759317070, 1370));
        var_19 -= (((!(arr_4 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            arr_10 [6] = ((-((min(1, 32669)))));
            var_20 = var_0;
            var_21 = ((((!(15360 % var_0))) ? 16 : ((1 - ((-1370 ? -30322 : 1370))))));
        }
        arr_11 [i_2] = (((171 ? 0 : -58)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_22 = ((((max((arr_12 [i_2] [i_2]), 29))) / 51));
                    arr_16 [i_2] [i_4] = 12834;
                    var_23 -= (max(-5, 58));
                    var_24 = ((((((arr_12 [i_5 - 1] [i_5 + 1]) ? (arr_12 [i_5 + 3] [i_5 + 3]) : (arr_12 [i_5 + 1] [i_5 + 2])))) ? -30332 : (((((1 ? var_8 : 123))) ? (max(39703, 6023180368623307815)) : (~-54)))));
                    arr_17 [i_4] [i_4] [i_4] [i_5 + 3] = ((-(~40982)));
                }
            }
        }
        var_25 = 40528;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_20 [i_6] = (!320);
        arr_21 [i_6] = var_0;
        var_26 = (((((0 ? 1 : 526423703))) ? (((-526423696 && (arr_8 [i_6] [i_6] [i_6])))) : ((var_10 ? (arr_4 [i_6]) : var_1))));
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_27 *= (min(((((arr_12 [i_7] [i_7]) ? (arr_12 [i_7] [i_7]) : 0))), (var_3 % 17287056404579574604)));
        var_28 = (max(var_28, (((((((arr_19 [i_7] [i_7]) - (arr_19 [i_7] [i_7])))) ? -1 : (arr_19 [i_7] [i_7]))))));
        var_29 = (min(((((arr_22 [i_7]) ? var_3 : -30332))), (min((!var_7), 1))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_30 [0] [i_7] = 9120;
                    arr_31 [6] [i_8] [6] &= ((((!(arr_8 [i_7] [i_8 + 1] [i_9])))));
                    arr_32 [i_7] = ((((7257669314770772271 ? -var_7 : 33109)) * ((~(arr_22 [i_8 - 1])))));
                }
            }
        }
        var_30 = 9223367638808264704;
    }

    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_31 = 255;
        var_32 += ((~(max((~var_9), (!65535)))));
        arr_35 [i_10] [i_10] = (1048574 % ((254 / (arr_2 [i_10]))));
        var_33 ^= 0;
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        arr_39 [i_11] = ((((max(1, (arr_0 [i_11])))) ? (arr_0 [i_11]) : -var_2));
        var_34 = (arr_1 [i_11]);
        var_35 = (((var_2 ? (!var_10) : ((52850 ? 1 : 14308)))));
    }
    #pragma endscop
}
