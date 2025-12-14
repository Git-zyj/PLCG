/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((38 ? 17041666404737682008 : 17041666404737682008))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((17041666404737682008 ? 1 : (((!((max(1, 8750875968984371485))))))))));
                                arr_15 [i_2 + 2] [i_0] [18] = max(156, (var_1 * var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 ^= var_9;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_17 = (((((var_6 ? -24530 : var_6))) ? 11280 : 103));
                arr_22 [i_5] [i_5] [i_5] = ((var_7 > 87) ^ ((((((arr_9 [i_6] [14] [i_5] [i_5]) == 12293))))));
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_18 ^= (((max(5970566458404713541, 87)) >= (max((((156 ? 1086852517602880086 : 164))), (arr_29 [i_7 - 1] [i_7 + 2])))));
                                arr_31 [i_8] [i_6] = 8750875968984371485;
                            }
                        }
                    }
                }
                arr_32 [i_6] [i_5] = ((!(((((var_1 << (var_12 - 1161894820))) + var_7)))));
            }
        }
    }
    var_19 ^= (((var_6 * var_0) >= (((~var_13) ? (!24458) : ((-727795853 ? 1634586988 : 87))))));
    #pragma endscop
}
