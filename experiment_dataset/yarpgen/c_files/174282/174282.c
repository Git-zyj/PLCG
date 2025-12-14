/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (min(var_2, ((max(var_7, var_15)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = -1378591281391263779;
        var_22 = var_0;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_23 = (min((arr_6 [i_2 + 2] [i_2 + 2]), (((-(((arr_9 [i_1] [i_1] [i_1] [i_1]) ^ var_4)))))));
                    var_24 = ((((min((((arr_3 [i_1]) ? (arr_7 [i_1] [i_2 + 2] [i_2 + 2]) : (arr_9 [i_3] [i_1] [i_1] [i_1]))), 1718770879))) || (((((max((arr_3 [i_1]), var_13))) ? (arr_9 [i_2 + 1] [i_1] [i_2 - 1] [i_2 + 1]) : (min(var_19, 121678701)))))));
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_25 = (6413515451123056751 * 193);
            var_26 = (min(var_26, (((var_14 > (arr_6 [i_4] [i_4]))))));
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                {
                    var_27 = ((+(((max((arr_20 [i_5]), var_0)) + var_18))));
                    var_28 = var_2;
                    arr_21 [i_6] [i_5] = (arr_2 [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
