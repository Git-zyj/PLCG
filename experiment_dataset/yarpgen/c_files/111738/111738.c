/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0] [i_1]);
                arr_5 [i_0] [i_0] = ((1209815917 ? (min(4214617257, 4214617257)) : ((1307462099 ? 4214617271 : (arr_3 [i_1 + 1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (10335131241072642848 << 63);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_19 &= 2918150678;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_20 = (min(var_20, -1376816627));
                        arr_19 [i_3] [i_3] [i_3] [i_3] = (((var_10 + 80350035) ? ((((arr_1 [i_2]) ? (!var_12) : (!60000)))) : ((((((arr_6 [i_2] [i_4]) ? var_5 : (arr_1 [i_2])))) ? 1 : ((4214617259 ? (arr_3 [i_5]) : var_5))))));
                        arr_20 [i_5] [2] &= var_3;
                    }
                }
            }
            var_21 = var_3;
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_22 = (min(var_22, (((((2918150656 & (((arr_21 [i_2]) % 3541318578)))) / ((((arr_13 [i_2] [i_2] [i_2] [i_2]) ^ -1))))))));
            var_23 &= ((~(((4214617250 != (arr_12 [i_2] [i_2]))))));
        }
        arr_23 [12] &= (((arr_16 [i_2] [i_2] [i_2]) >= (min((~80350039), -var_6))));
        var_24 = (max(var_24, (arr_6 [i_2] [i_2])));
    }
    var_25 = var_17;
    var_26 = var_14;
    var_27 = (((var_0 >> (var_17 + 8544))) << ((((((max(92, -32761)))) <= var_5))));
    #pragma endscop
}
