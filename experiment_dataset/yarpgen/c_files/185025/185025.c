/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_11 = (min(var_11, (((var_3 / (+-1))))));
            var_12 = 377691858913743503;
            var_13 = (((min(((var_9 >> (198 - 168))), (((~(arr_4 [i_0] [i_0])))))) <= (-2147483647 - 1)));
            arr_6 [i_0] [i_0] = (((377691858913743511 / 21926) * (arr_4 [i_0] [i_0])));
            arr_7 [i_0] [i_0] = (((arr_2 [i_0]) ? (((((4095 ? 4251162757 : var_5))) ? 18446744073709551615 : 60)) : ((((((var_1 ? var_2 : (arr_3 [i_1] [i_0])))) & var_8)))));
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_11 [i_0] [i_2 - 3] = ((!((max(((var_9 << (((-377691858913743503 + 377691858913743558) - 55)))), (arr_4 [i_0] [i_0]))))));
            var_14 = (max(-377691858913743504, 43608));
            arr_12 [i_0] [i_0] = var_8;
        }
        var_15 = 1740563082758873827;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_23 [i_3 - 2] [i_3 - 2] [i_4] [i_5 - 1] [i_3 - 2] = ((!17118115891467018474) ? ((var_2 ? 3965810448 : 59)) : (var_9 > -1653040871));
                        arr_24 [i_4] = ((2769575330 ? 43804537 : 2990814377));
                    }
                }
            }
        }
        arr_25 [i_3] [i_3] = (((((arr_13 [i_3 - 2]) ? 1 : 1)) << (-var_2 + 29)));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_16 = (min(var_16, (((-1 ? 13439442164348683774 : 120)))));
        arr_28 [i_7] = var_4;
    }
    var_17 = ((((var_10 ? var_0 : var_5)) & 16036209760187056295));
    var_18 = ((-((8181075054195093844 ? ((max(1696847283, var_6))) : var_0))));
    var_19 = ((max(18446744073709551615, (var_10 & var_8))) >> ((((var_2 - ((16036209760187056295 << (13040726634238126233 - 13040726634238126195))))) - 1837422743356702699)));
    var_20 = (max(var_20, ((max((((-7783895513491655097 + -1952395285) ? (max(var_0, var_8)) : (((7347571033413113274 ? 36314 : 1))))), var_6)))));
    #pragma endscop
}
