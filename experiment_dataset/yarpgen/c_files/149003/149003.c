/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((1 ? 2017612633061982208 : -16384)) ? 0 : ((-693481415 ? var_5 : 1))))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = (max(((~((0 ? 188 : 2935888714)))), 3874726666));
            var_15 |= (min(((((((arr_1 [16] [i_1]) ? 8388096 : var_4))) ? (arr_2 [i_1] [i_0] [i_0]) : 8)), (((!((min(1, 17760))))))));
        }
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_12 [i_4] [8] &= var_6;
                    arr_13 [i_3] = ((((((((1 ? var_10 : (arr_1 [i_3] [i_3])))) ? (arr_7 [i_2] [i_2]) : 42))) && -var_5));
                }
            }
        }
        var_16 = 16256;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                {
                    var_17 ^= (max((min(-var_9, ((4203290082 << (-17743 + 17756))))), (((-((-(arr_9 [1]))))))));
                    arr_20 [i_5] [i_5] = (((((arr_7 [i_2 + 3] [3]) <= (!-12))) ? ((var_11 ? 0 : (arr_0 [i_6 + 1]))) : 0));
                }
            }
        }
    }
    var_18 *= ((17743 ? 0 : 881697975));
    #pragma endscop
}
