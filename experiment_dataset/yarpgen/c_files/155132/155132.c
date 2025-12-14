/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = -2;
                arr_7 [i_1] = 4294967280;

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [5] = ((1023 ? (-10320 || 4294967290) : -var_9));
                    var_16 -= ((+(((((arr_9 [i_0]) ? 4209386528 : 11))))));
                    var_17 = (min(var_17, ((((max((var_15 | -10067), -10048))) & 1653837958))));
                }
                arr_11 [i_0] = (((~22579) - (min((arr_0 [i_1 - 2] [i_1 + 1]), (((arr_3 [4] [i_1] [i_1]) & 1187491168))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_18 = (-(((min(-21852, (arr_2 [i_4] [i_4]))) * 4294967285)));
                    var_19 = (max(var_19, ((((max(1746049754, 954453526)) >= (arr_3 [i_5] [i_4] [i_3]))))));
                    arr_20 [i_3] &= (~((20 ? (((-(arr_0 [11] [16])))) : ((1344016431 ? (arr_13 [i_3]) : 3)))));
                }
            }
        }
    }
    var_20 = ((-(((!((max(31153, var_3))))))));
    var_21 = (-((~(~var_9))));
    var_22 &= ((var_11 ? var_12 : var_13));
    #pragma endscop
}
