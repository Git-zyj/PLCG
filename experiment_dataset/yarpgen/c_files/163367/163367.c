/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_14 = (((arr_8 [i_3 - 2] [i_1] [i_1] [i_0 - 1]) ? (4713123443911456197 | -1) : (~162)));
                        var_15 = (max(var_15, ((((arr_4 [0] [i_0 - 2] [0]) ? (arr_4 [6] [i_0 - 1] [6]) : (arr_4 [0] [i_0 + 1] [i_0 + 1]))))));
                        arr_12 [i_0] [10] [i_0] [i_1] = 17989;
                        var_16 = (max(var_16, (((((4713123443911456197 ? (arr_3 [i_1]) : (arr_5 [i_2 + 3] [i_1]))) != (((-2584520819703724734 ? -1907405512 : 1219915440))))))));
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_17 = (((1577160798 ? 7599827101560428307 : (~-7599827101560428300))));
                        var_18 = var_0;
                        var_19 ^= ((~((max((!156207093464991154), (arr_8 [i_0] [0] [2] [i_4 - 3]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_20 = (min((arr_10 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0] [9]), var_10));
                                var_21 -= ((((arr_16 [i_2 + 3] [i_6]) + 3680925837953023782)));
                                arr_21 [i_0] [i_1] [i_2 + 2] [i_1] [i_5] [i_2] |= (max(((-1 ? var_7 : -2912928815975571641)), (((-4713123443911456220 ? 14478063 : 91)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 ^= (max(27, -10703));
    #pragma endscop
}
