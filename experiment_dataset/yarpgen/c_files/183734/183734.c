/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 90;
    var_20 = 1258280021;
    var_21 = ((((((((var_6 ? var_17 : var_4))) ? (2444 || var_15) : var_10))) ? var_17 : ((var_18 ? -9208 : -var_4))));
    var_22 = (min(var_5, (min(((min(32673, 134217728))), ((var_1 ? -1 : 3592933086))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [4] = (+((((((4005918675 ? (arr_2 [i_0]) : 3592933086))) || (1833750211 & 114)))));
        arr_5 [i_0] = (((arr_3 [i_0 + 2]) * (((((-16 ? 121 : 2796850482))) ? var_12 : (((134217709 ? (arr_1 [i_0]) : var_14)))))));
        var_23 = (((((var_5 > ((var_4 ^ (arr_3 [11])))))) | (((((var_12 ? (arr_3 [i_0]) : (arr_0 [i_0 + 1]))) != var_11)))));
        var_24 ^= (max(137438953471, 104));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_25 = var_4;
        arr_8 [i_1] = ((var_8 && (((min(1766200298, var_18))))));
        var_26 = var_4;
        var_27 = (min(((var_1 >> (((arr_6 [i_1 + 2]) - 6613515631351643195)))), 134217728));
        var_28 = (min(var_28, ((((~1381586213) ? ((((!(((var_6 ? (arr_6 [i_1 - 3]) : (arr_0 [i_1])))))))) : (min((min(var_5, var_6)), (((3027127128416361852 && (arr_3 [i_1])))))))))));
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_29 = ((-((var_2 ? (min((arr_16 [i_2] [i_3] [i_3]), var_4)) : ((((arr_2 [i_3 - 3]) - 1)))))));
                            arr_22 [0] [i_3] [i_3] [1] [i_3] = ((min(var_8, (arr_7 [1] [1]))));
                            arr_23 [i_3] [7] [i_3] = (((arr_11 [1]) ^ ((-(arr_20 [i_3] [i_6])))));
                        }
                    }
                }
            }
            var_30 = var_4;
        }
        arr_24 [i_2] = (-2147483647 - 1);
    }
    for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
    {
        arr_28 [1] = (arr_17 [i_7]);
        arr_29 [i_7 - 3] [i_7 - 1] = var_1;
        arr_30 [i_7 + 1] = -894849992;
        var_31 = var_10;
        var_32 = 1;
    }
    #pragma endscop
}
