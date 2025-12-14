/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 ^= ((~((229376 ? -1 : (min(var_5, -2377092250419843793))))));
                var_15 *= var_11;
                arr_6 [i_1] = (min((((!(!1077654428)))), (max((((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))), -4))));
                arr_7 [i_1] [i_0] [i_0] = (max(1758304917, 13880));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 -= (min(0, ((((-172957774 ? 7303441623273573980 : -451594992)) * 0))));
        arr_11 [i_2] [i_2] = (((min(3021, 1783363106)) ^ (((((((arr_3 [i_2]) == 1770904955))) + ((max(-2, 242))))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_17 ^= (min((((arr_13 [i_6]) ? (((-(arr_12 [i_3])))) : ((var_10 ? var_0 : 13764798000961846990)))), (12913 <= 0)));
                        var_18 = (max(var_18, ((((max((arr_19 [i_6] [i_4] [i_4] [i_3]), (arr_12 [i_3])))) ? (((max((2942183944 == var_13), (min((arr_12 [i_3]), (arr_16 [i_3]))))))) : (min(-var_10, (max(4294967283, var_7))))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_28 [i_9 - 1] = ((((~((min((arr_16 [i_7]), (arr_17 [i_3] [i_7] [i_8])))))) / (max((max(var_0, (arr_13 [11]))), (((!(arr_20 [i_3] [i_3] [i_3]))))))));
                        var_19 = (arr_15 [i_3] [i_7] [i_8]);
                    }
                }
            }
        }
        var_20 += ((!((((arr_27 [i_3] [i_3] [i_3] [i_3]) * 0)))));
    }
    #pragma endscop
}
