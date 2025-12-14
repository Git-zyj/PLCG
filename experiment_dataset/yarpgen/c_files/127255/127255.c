/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((~((((-86 ? (arr_5 [i_0] [i_1] [i_0]) : 45433)) | 0))));
                    var_13 = 45433;
                }
            }
        }
        var_14 = ((((min((~var_0), 4250800785504210266))) ? (((var_11 ? var_9 : 24231))) : (~var_9)));
        var_15 = var_1;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_16 = 14195943288205341352;
        arr_11 [i_3] = (((((var_6 ? -208811035 : (arr_10 [i_3])))) ? (max((!1), var_11)) : (((14195943288205341352 >= -9023336938717657707) ? var_0 : -1594214162256933996))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_14 [i_4] = 208811034;
        var_17 = -83;
    }
    var_18 = var_1;
    var_19 = (max(var_19, ((-var_7 ? (((max(var_6, var_12)))) : ((var_8 ? ((765391599369149651 ? 243 : -8352232611438575202)) : ((var_7 ? 9023336938717657720 : 2144854861898892747))))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                arr_19 [i_6] = (max(3348308306, ((var_11 ? 26114 : var_11))));
                var_20 = ((((max(20103, -91))) > var_8));
                arr_20 [i_5 - 1] [i_5 - 1] = ((((((!var_11) ? (var_4 && 0) : (!8352232611438575201)))) ^ 4250800785504210263));
            }
        }
    }
    #pragma endscop
}
