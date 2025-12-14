/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 -= (max(((((arr_8 [i_0] [i_1] [i_2]) + 1))), (!var_12)));
                    arr_9 [i_0] [i_1] [i_2] = ((-15477 ? 200 : -15477));
                }
            }
        }
    }
    var_21 = var_8;

    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((-(max(-15455, ((~(arr_11 [11])))))))));
        var_23 = (~13281074153294458214);
        arr_13 [i_3] = var_0;
        var_24 = ((((-(arr_12 [i_3]))) / (((-(arr_11 [i_3]))))));
        arr_14 [i_3] [i_3] = ((-(((arr_12 [i_3]) ? (!var_17) : (arr_12 [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (~12371);
        var_25 = 13419217658241101093;
        var_26 = (((arr_16 [i_4] [i_4]) ? var_2 : (arr_16 [i_4] [i_4])));
        arr_18 [i_4] = (arr_10 [i_4]);
        arr_19 [i_4] = var_11;
    }
    #pragma endscop
}
