/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = ((((((arr_1 [1]) <= (arr_2 [4] [1])))) / (((arr_1 [1]) | (arr_2 [i_0] [i_0])))));
        var_21 ^= (((((!(arr_0 [i_0])))) | ((65528 ? 0 : (arr_0 [i_0])))));
        var_22 = (((arr_0 [i_0]) == 18446744073709551597));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [5] [i_1] = (max(((~(((-9223372036854775807 - 1) - (arr_4 [2]))))), (-32767 - 1)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [14] [14] [14] [i_1] [i_4] = ((!((!(32745 - 8162094285316642098)))));
                        var_23 = 19180;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_24 = (arr_16 [i_5]);
        var_25 = (arr_17 [i_5] [i_5]);
    }
    var_26 += ((!(((var_6 << (((max(32753, 4294967282)) - 4294967269)))))));
    #pragma endscop
}
