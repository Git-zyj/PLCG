/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? ((-(3812108278 + var_11))) : var_16));
    var_21 = (var_12 / 3812108278);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = min(-6763842089918011809, (((max(3812108278, (arr_0 [i_0]))))));

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_22 = ((max((max(482859037, 21)), 73)));
            var_23 = (min(var_23, (((min(((min(-37, 58)), 0)))))));
        }
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            arr_13 [i_3] [i_2] [i_2] = max(((-124 ? ((min(1722829670, 1))) : 67108863)), (!var_0));
            arr_14 [i_3] [i_3] [i_3] = 19;
            var_24 = (max(var_24, ((min(125, 146906860)))));
            var_25 = (max(var_25, (((!(arr_9 [i_2]))))));

            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_26 = (((((1 ? 29024 : var_12))) ? -9287 : var_15));
                    arr_20 [i_3] [i_3] = var_3;
                    arr_21 [i_2] [i_2] [i_4] [i_3] [i_2] [i_3] = 13065663715963070612;
                }
                arr_22 [i_3] = (max((max((arr_16 [i_2] [i_2 - 1] [i_3] [i_2 - 1]), (arr_17 [i_2] [i_2 + 1] [i_4 - 1]))), (min(var_14, (arr_16 [i_2] [i_2 + 1] [i_3] [i_2 - 1])))));
                arr_23 [i_3] [i_3 + 3] [i_4] = 146906860;
                var_27 = ((~(4148060435 % 4294967295)));
            }
        }
        arr_24 [i_2] = (max((max(var_14, -87)), ((min((arr_19 [6] [i_2]), ((4503599625273344 ? -6763842089918011822 : -3557098024354085167)))))));
        arr_25 [i_2] = ((max(((13965967367381544826 ? var_1 : -40), 17432095460350847658))));
        var_28 = (min((max((!-3257047724540170309), 10542595889528116474)), (((((var_6 + 2147483647) >> (((arr_17 [i_2] [i_2] [i_2]) - 1284720379881011775))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_28 [i_6] [i_6] = ((10542595889528116478 % (arr_6 [i_6])));
        arr_29 [i_6] [i_6] = var_11;
        var_29 += (((var_7 ? 1954114743 : 3766529448553231585)));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_30 = ((((arr_17 [i_7] [i_7] [i_7]) <= (arr_12 [i_7]))));
        arr_33 [i_7] = (max((arr_16 [1] [i_7] [i_7] [i_7]), (((var_1 ? (288229276640083968 >= 3766529448553231593) : -var_0)))));
        arr_34 [i_7] [i_7] = (max(((var_19 ? 7796656500976382823 : var_13)), (arr_32 [i_7])));
    }
    #pragma endscop
}
