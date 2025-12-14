/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_11 = ((!(~-9168496275548229776)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 += (((((var_4 ? var_6 : var_9))) ? (!41101) : ((var_1 ? 9168496275548229776 : var_0))));
            var_13 = (!var_7);
            var_14 = (min(var_14, ((((((var_7 >> (9168496275548229803 - 9168496275548229779)))) ? 9168496275548229787 : ((var_3 ? var_5 : var_10)))))));
            arr_5 [i_0] [i_1] [i_0] = (((!-9168496275548229761) && (((-9168496275548229777 ? var_6 : -9168496275548229804)))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_15 = -var_4;
                arr_10 [i_0] [i_0] [i_3] = ((~((9168496275548229761 ? var_4 : -732689417))));
            }
            arr_11 [i_2] = ((!(~var_3)));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_16 += ((var_4 || (!11)));
            var_17 = (!var_9);
            var_18 = (((~-9168496275548229763) ? (!65515) : 8085034174215461110));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_5] = ((9168496275548229804 ? -var_0 : (~65515)));
            var_19 &= (((((116 >> (var_3 + 18048)))) ? 184 : 9168496275548229761));
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_31 [i_9] [i_9] [i_6] [i_8] [i_6] [i_8] = (min((max(var_2, var_4)), ((max(142, 12)))));
                        var_20 = (max(174, (max((max(-9168496275548229761, -862300051380859288)), (((9168496275548229769 ? (-2147483647 - 1) : var_5)))))));
                        arr_32 [i_6] = ((var_8 ? ((136 ? (18446744073709551615 * -1645083632) : (var_7 && var_10))) : (!65524)));
                    }
                }
            }
            var_21 &= (((((var_10 ? ((var_1 ? 1 : var_4)) : (((max(195, var_5))))))) ? (max((max(var_4, var_2)), (-565349573 | 140))) : (~var_4)));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_22 = ((!(((var_8 ? ((-9168496275548229776 ? var_10 : var_2)) : ((var_5 ? -24413 : var_7)))))));
            arr_36 [i_6] = ((((max(var_3, -1645083612)) ? -24413 : var_7)));
            var_23 ^= ((~(max(var_7, ((var_4 ? var_6 : 159))))));
            var_24 &= var_6;
        }
        var_25 = ((-(((!(!var_1))))));
    }
    var_26 = (max(var_26, (((+(max((1 ^ var_5), ((565349572 << (var_2 - 43))))))))));
    var_27 = (+-243);
    var_28 = var_5;
    #pragma endscop
}
