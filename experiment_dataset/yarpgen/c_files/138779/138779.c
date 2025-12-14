/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((var_10 - var_6), var_13))) ? var_13 : var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 += (var_4 || (((var_9 ? (arr_1 [i_1]) : 1))));
            arr_6 [i_0] [i_1] [i_1] = (((arr_0 [i_0]) - var_14));
            var_20 = (min(var_20, ((((((4076825708 ? var_0 : (arr_3 [i_0] [i_0])))) ^ 6684333740642981708)))));
            var_21 ^= ((12117787506218285045 ? 176 : (!var_0)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 *= ((-18106 || 12117787506218285045) ^ ((var_17 ? 4301680774882624166 : var_16)));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_23 = 15754308434143564636;
                        var_24 -= (((arr_11 [i_4 + 1] [i_4] [i_4] [i_4 - 1]) ? (((!(arr_4 [i_0])))) : 5421));
                        arr_14 [i_2] [i_3] [i_2] [i_2] [i_0] = (~var_12);
                        var_25 = (!var_11);
                    }
                }
            }
        }
        var_26 = (max(var_26, (((9644881103484392539 ? ((-25068 ? 1 : 2170530915)) : -32765)))));
        var_27 = (min(var_27, (((2240906272 ? var_7 : (arr_13 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_28 *= ((arr_16 [i_5]) ? (((arr_16 [i_5]) ^ (arr_16 [i_5]))) : (1 || var_4));
        arr_17 [i_5] = ((((max(var_5, (arr_16 [i_5])))) || (-24773 || -1)));
    }
    for (int i_6 = 3; i_6 < 13;i_6 += 1)
    {
        var_29 = ((((min((arr_5 [i_6]), var_4))) || ((min(((((arr_20 [i_6 - 1] [i_6 - 1]) ? var_15 : var_5))), -14351951937275471602)))));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_30 = (((arr_9 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 2]) - (arr_9 [i_6] [i_6 + 1] [i_6 - 2] [i_6])));
            var_31 = (((((15754308434143564636 ? var_12 : 536319722))) ? ((((max(177, var_3))))) : (((min((arr_19 [i_6 - 2]), 4600030359020735304)) - (min(3351279078, 12117787506218285045))))));
            var_32 += (((~((max((arr_18 [i_6] [i_7]), (arr_13 [i_6] [i_6] [i_7] [i_7])))))));
        }

        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_33 &= var_16;
            arr_26 [i_6] = (((((((max(3917344960, var_10))) || 209917918))) - ((max(var_16, 55)))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_34 = (max(var_34, (((((-(!var_16)))) ^ (min((arr_12 [i_6 - 1] [i_6] [i_6 - 3] [i_9] [5]), (arr_27 [i_6 + 1] [0])))))));
            var_35 += (max(55, ((3145879723 ? (arr_10 [i_6 - 3] [i_6] [i_6] [i_6]) : 11326113194745004513))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_36 += (arr_10 [i_6 - 3] [i_9] [i_10] [i_11]);
                            var_37 *= (((!439236627) - (((max((arr_13 [i_6] [i_9] [i_10] [i_11]), var_17)) ^ (11291284920275895245 & 1584334526310510936)))));
                            var_38 += (!var_6);
                            arr_35 [i_6] [i_6] = (((max(var_5, (arr_34 [i_6] [i_6 - 1] [i_6] [i_10] [i_10 + 1])))) ? (arr_10 [i_6] [i_6] [i_10 - 1] [i_12]) : (arr_29 [i_6] [i_9] [i_10]));
                            var_39 = (max(var_39, var_0));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_40 = (min(var_40, (((15346689667793055189 || (((var_15 ? 1 : (arr_2 [i_6] [i_13])))))))));
            arr_38 [i_6] = var_3;
        }
    }
    var_41 = var_17;
    #pragma endscop
}
