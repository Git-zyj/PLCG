/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = ((~(((88 / 117) ? (~var_7) : (var_8 - var_5)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 = (max(671, 156));
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = ((-(((((max(var_0, 255))) || (arr_6 [i_1 - 1]))))));
        arr_8 [i_1] [i_1 - 4] = (((1 + 243) ? ((((var_7 ? 1853576109 : 101)))) : ((1 - (arr_5 [i_1 - 3])))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_13 = ((~(((!((((arr_9 [i_2] [8]) >> (-9106119364342639394 + 9106119364342639423)))))))));
        arr_11 [i_2] [i_2] = 101;
        arr_12 [8] [i_2] = 0;
        arr_13 [i_2] [i_2] = max(11172, 22386);
    }
    var_14 = ((((!(-127 - 1))) ? -54 : var_4));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                {
                    var_15 = 1;
                    arr_21 [i_3] [i_5] [13] [i_3] = (arr_14 [i_3] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
