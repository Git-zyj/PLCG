/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((-(!75)))), (((max(var_6, 84)) * var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 ^= -1;
                    var_18 = 63;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] [i_3] = (~-1836923549);
        arr_10 [i_3] [i_3] = (max((arr_8 [i_3]), -31));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_19 ^= (((max((max(-725120368358618180, 21)), (!65502)))) || ((!(arr_16 [i_7] [i_5 + 1] [i_4 + 1] [i_4 + 1]))));
                        arr_24 [i_4] [i_5 - 1] [i_5] [i_6] [i_5] [i_7] = (~var_15);
                    }
                }
            }
        }
        var_20 = (max(var_20, (119 > 4294967295)));
        arr_25 [i_4] = (min((min((arr_12 [22]), -84)), 1));
    }
    #pragma endscop
}
