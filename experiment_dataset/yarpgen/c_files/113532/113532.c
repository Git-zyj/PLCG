/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 |= max(1, 6109554488179185787);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_14 = ((~(116 && 2178519698)));
                        var_15 = ((max((2474819885 || 26030), ((var_1 && (arr_10 [i_0] [i_1]))))));
                        arr_11 [i_2] = ((-((116 ? -1255339262989706990 : 25197))));
                        var_16 = (((((2009136441723951391 ? -1255339262989706990 : (arr_3 [i_1])))) ? ((-1255339262989706990 ? 1930 : 1)) : (arr_2 [i_0])));
                        arr_12 [i_2] [i_2] [i_1] [i_2] = var_5;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_17 = 1;
                        arr_17 [i_0] [i_1] [i_2] [1] [i_4] [i_4] |= var_0;
                        var_18 = (+(min((arr_6 [i_4] [i_2]), (arr_6 [i_4] [i_2]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_19 = (((((~1) + 2147483647)) >> (((var_5 % 1934) - 475))));

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_0] [i_2] [i_2] = 1255339262989706990;
                            arr_24 [i_0] [i_0] [i_0] [i_5 - 1] [i_6] |= (((arr_20 [i_5] [i_0] [i_0] [i_2]) + (arr_13 [1] [i_5] [i_5 - 1] [i_5] [i_5])));
                        }
                        var_20 = (max(var_20, ((var_3 <= (arr_6 [i_0] [i_0])))));
                        arr_25 [i_2] [i_2] = ((~(arr_8 [i_0] [i_2] [i_2] [i_5])));
                    }
                    var_21 = ((((((1 << (6109554488179185787 - 6109554488179185782))) ? -var_10 : ((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1048576 : (arr_10 [i_0] [i_1 - 2]))))))));
                }
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
