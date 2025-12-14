/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((arr_3 [i_0 + 1]) | var_16)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = -8634681778126510762;
                        arr_15 [i_0] [i_0] [i_0] [i_1] = (arr_8 [i_1]);
                        var_18 = ((((min(1, 255))) + (((var_5 == -1481461364) ? ((20 | (arr_13 [i_0] [i_0] [i_2] [i_3]))) : -1246587226))));
                    }
                }
            }
        }
        var_19 = ((((arr_10 [i_0] [i_0] [i_0 - 2] [1]) ? var_8 : var_1)));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((!(((max(1, 230521486))))));
        arr_20 [i_4] = ((((max(var_4, var_6))) ? (min(1898438892674960732, 122)) : (((((var_9 <= (arr_5 [14] [14] [i_4]))) ? (~1) : -1246587240)))));
        arr_21 [i_4] = ((-(((!(arr_14 [i_4]))))));
    }
    var_20 = var_3;
    var_21 = -1656740302702237958;
    #pragma endscop
}
