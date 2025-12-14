/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 -= 17425;
        arr_3 [1] = 10951340138512228354;
        var_21 |= ((var_9 << (70 - 56)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = (min((~var_0), var_0));
        var_23 = ((((var_3 ? var_9 : var_2))));
        arr_7 [i_1] = (max((!var_9), var_12));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_24 = -8405;
            var_25 |= 255;
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_17 [i_2] [i_2] [6] &= var_15;
            var_26 -= ((17447503380397609485 ? -32 : 39));
            var_27 = -22888;
            arr_18 [i_2] [2] [7] &= (var_4 * var_14);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_21 [i_5] [i_2] [i_5] = ((arr_1 [i_5]) ? (arr_0 [i_5]) : 48110);
            arr_22 [3] [i_5] [1] = (((((var_12 ? var_19 : var_9))) ? (((86 >> (var_11 + 83)))) : -6134767134522584910));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_26 [i_6] [1] = (!30233);
            var_28 = var_16;
            arr_27 [12] [12] = 31737;
        }
        arr_28 [i_2] [8] = ((7787713270716779987 ? 119 : -3908397196017090317));
        arr_29 [6] [1] &= -6712897960259372488;
        arr_30 [i_2] |= (arr_14 [5] [i_2] [i_2]);
    }
    var_29 &= var_3;
    var_30 = (min(var_6, (1644919903 / -30975464977320963)));
    var_31 = (min(((((min(var_6, var_12)) <= (var_10 - -112)))), var_9));
    #pragma endscop
}
