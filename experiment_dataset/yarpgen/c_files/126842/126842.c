/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((var_8 - var_1) || ((var_0 > (224 / 3))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 -= (((((((var_6 ? (arr_4 [i_0]) : (arr_3 [i_1])))) ? var_7 : (((!(arr_2 [1])))))) ^ ((~(min(var_12, var_4))))));
                var_19 = var_3;
                var_20 = (!((max((arr_2 [i_0]), (arr_2 [i_0])))));
                var_21 ^= (((+(max((arr_1 [i_0]), var_16)))) <= (159 || var_1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_22 = (max((((13839740718537850646 ? 207 : 1))), ((~(arr_5 [i_2] [i_3 + 1] [i_4])))));
                    var_23 = ((((min((((arr_7 [i_4]) ? var_5 : -281642549)), ((1 ? var_1 : 67108608))))) ? (arr_11 [i_3] [2]) : (max(var_11, -var_5))));
                    var_24 = -var_11;
                }
            }
        }
    }
    #pragma endscop
}
