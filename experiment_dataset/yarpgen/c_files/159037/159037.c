/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((var_15 >> (((min(11436192882677830397, var_5)) - 31023))))));
    var_19 ^= ((var_10 < ((~((max(var_6, var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = var_13;
                arr_4 [i_1] = ((((((arr_3 [12] [i_1] [i_1]) ? (arr_3 [i_1] [4] [8]) : (arr_3 [5] [3] [i_0 - 1])))) / (((max((arr_2 [12] [i_0 + 1] [i_1]), var_6)) / (((arr_0 [i_0 - 1] [i_1]) ? var_17 : var_15))))));

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    arr_7 [0] [2] [i_2] [i_2 - 3] |= (max(((((arr_0 [i_0 + 3] [i_2 + 1]) != (arr_0 [i_0 + 2] [i_2 + 2])))), (arr_0 [i_0 + 3] [i_2 - 1])));
                    var_21 = (min(var_21, ((max(var_10, (((~var_7) & (min(31628, 6087047922921574071)))))))));
                }
            }
        }
    }
    #pragma endscop
}
