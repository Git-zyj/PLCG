/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_15 = ((((~(!233)))) ? ((-(arr_0 [i_0]))) : var_13);
                            arr_14 [i_4] [i_3] [i_4] [i_2] [i_4] [i_1] [4] = 52639;
                        }
                    }
                }
            }
            var_16 *= ((-(arr_1 [i_0] [i_0])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [8] [i_6] [i_0] [i_5] [i_0] = ((25 ? -2107449311 : ((8489124166299152339 >> (4146369097 - 4146369086)))));
                        var_17 &= (arr_5 [i_0] [i_0]);
                    }
                }
            }
            var_18 = (arr_22 [i_0]);
            arr_26 [i_0] [1] = ((~(arr_22 [i_0])));
        }
        var_19 &= var_14;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_20 = -16102;
        var_21 ^= (arr_16 [i_8] [16]);
        var_22 &= ((9957619907410399275 ? 117 : 1));
        var_23 *= 1228309136;
    }
    var_24 ^= 3433807637;
    #pragma endscop
}
