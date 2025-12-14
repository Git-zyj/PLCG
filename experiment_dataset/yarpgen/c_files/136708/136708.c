/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 185;
    var_17 = (max(((-72 ? -11346 : 989554490)), var_0));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_2] = (((((max(-116, var_15))) ? 32726 : (min(1, (arr_4 [i_2]))))));
                    var_18 *= (min(var_6, (((arr_2 [i_1 + 1]) ? (min(var_3, (arr_1 [11]))) : ((((arr_0 [i_1 - 1]) | (arr_5 [i_0] [i_1] [12]))))))));
                }
            }
        }
        arr_8 [i_0] = (max((arr_4 [i_0 - 1]), var_5));
        var_19 = (max(1, ((16561962222912689838 ? 96 : 1))));
        var_20 = 1;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_21 = ((((((-43 ? 1 : 139)))) ? var_2 : (18446744073709551615 != 1)));
        var_22 = (((((var_2 ? (min(16357162113869175811, (arr_9 [i_3]))) : (2453508896 <= -10)))) ? (3836719663 & -1047602702) : (((((var_1 ? (arr_5 [i_3] [i_3] [i_3]) : 1884781850796861777))) ? 552 : (((arr_6 [i_3]) ? (arr_4 [i_3]) : 1))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_23 = ((~((18420126988637293902 ? 9878169616710704519 : 288102105829963598))));
                        arr_21 [i_4] [i_4] &= (arr_14 [6] [i_6] [i_7]);
                        var_24 = (max(var_24, ((min(2453508896, 255)))));
                    }
                }
            }
            arr_22 [i_4] [i_5] = -var_6;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_25 = (max(var_25, ((((((5795731281693525063 ? 14692458353869453606 : (arr_11 [i_8])))) ? (45 < 1) : 518771429)))));
            arr_25 [i_8] = ((+((min((-1047602711 == 288102105829963589), (!var_5))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            arr_28 [i_4] = (((arr_0 [i_4]) ? (arr_3 [i_4]) : var_8));
            arr_29 [2] [i_9] = (202 ? 10 : 8);
            arr_30 [i_9] [i_9] [1] = ((1650532184 ? 1156453062756313637 : -1));
            var_26 = (!18158641967879588056);
        }
        var_27 = ((!(((288102105829963589 ? 2699666522 : (-127 - 1))))));
    }
    var_28 = (min(202, 3244157417));
    #pragma endscop
}
