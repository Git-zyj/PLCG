/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 61;
    var_13 *= var_2;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((((1840 >> (704953293 - 704953279))) >> (var_9 + 18797)));
                            arr_15 [i_0] [i_1] [1] [i_3] [i_3] [i_4] = 23183;
                            var_14 = (arr_10 [i_0 + 2] [i_2] [i_0] [14]);
                        }
                    }
                }
            }
            var_15 = (((arr_1 [i_0]) << (6579383236019074347 - 6579383236019074340)));
        }
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_16 = ((((((arr_7 [i_5 + 2] [1] [i_0]) ? var_1 : (arr_7 [i_5 + 2] [i_5] [i_0])))) ? -var_1 : 13788118841035652324));
            var_17 = ((-56 ? -31625 : 22261));
            var_18 += ((~((max(198, 22284)))));
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_19 = (max(((var_8 ? 16 : (arr_12 [i_0 - 1] [i_0]))), (((arr_7 [i_0 - 1] [i_0] [i_0 + 2]) << (var_7 - 56082)))));
                    arr_23 [i_0] [i_0 - 1] [i_0] [i_0] = (((100 ? 12891323635969307351 : (arr_12 [i_0 + 2] [i_7]))));
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
