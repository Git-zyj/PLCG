/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((arr_4 [i_0] [i_0]) ? (-127 - 1) : ((((arr_2 [i_1]) > (arr_4 [i_1] [0])))))) & ((((min(var_7, 4161536))) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_2 [i_1]))))))));
                arr_5 [i_0] = ((var_4 > (-4161540 != var_17)));
                arr_6 [i_1] = (var_0 > (min(6794243996815366550, (arr_4 [i_0] [i_0]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = var_7;
        var_19 = (max(var_19, ((min(((((max(-4161537, var_0))) & ((-(arr_1 [i_2]))))), (arr_4 [i_2] [i_2]))))));
        var_20 = (max(var_20, ((((((((((arr_0 [i_2]) ? var_9 : (arr_3 [i_2] [i_2] [i_2])))) || (arr_3 [i_2] [i_2] [i_2])))) != ((((arr_2 [i_2]) > var_16))))))));
        arr_10 [i_2] = (max(67076096, ((~((18374686479671623680 ? -4161544 : var_5))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_21 = (max(var_21, var_15));
        arr_13 [6] &= -67076098;
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] = ((var_0 ? ((min((arr_7 [i_4] [i_4]), (arr_7 [i_4] [i_4])))) : (var_8 >= 4161540)));
        arr_18 [i_4] = (0 > 18446744073709551610);
        arr_19 [i_4] = (((arr_3 [i_4] [i_4] [i_4]) || ((18446744073709551604 > (arr_1 [i_4])))));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_22 ^= ((+(((arr_8 [i_4]) ? (((var_7 || (arr_11 [i_5])))) : ((var_11 ? var_13 : (arr_7 [i_4] [i_5])))))));
            var_23 = (!4161536);
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_24 += (arr_24 [6] [i_6] [i_6]);
            var_25 += ((!((max(((min(var_2, (arr_16 [i_4])))), 72057594037927935)))));
        }
    }
    var_26 += (max(var_10, ((min(4161539, -32748)))));
    var_27 |= (max(((var_7 ? (~var_6) : (max(var_0, var_8)))), 2047));
    #pragma endscop
}
