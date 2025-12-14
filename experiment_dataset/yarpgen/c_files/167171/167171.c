/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (max(1057603018, 63));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((((-(arr_4 [i_1 - 3] [i_1 - 2] [i_0]))) >= ((6 ^ (arr_4 [i_1 + 2] [i_1] [17])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_10 [19] [i_0] [i_1] = (((arr_4 [i_0] [i_1] [i_0]) ? (((3237364287 ? -77852840 : 1325083356))) : (arr_4 [i_2] [5] [i_0])));
                    var_20 = (arr_3 [i_0]);
                    arr_11 [i_2] [i_1] = arr_4 [i_0] [i_1 + 3] [i_2];
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_15 [4] &= ((~(arr_9 [i_0] [7] [i_0] [i_0])));
                    arr_16 [i_0] [i_1] [i_1] [i_3] = (((arr_4 [i_1 + 2] [i_1 - 2] [i_3 + 1]) ? -1913551596 : (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : 3237364277))));
                }
                var_21 = 13096015135144223140;
            }
        }
    }
    #pragma endscop
}
