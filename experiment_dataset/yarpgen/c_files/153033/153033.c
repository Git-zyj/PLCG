/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((~var_5) ? -37 : (var_11 < -37)))) == var_10))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((((((max((arr_3 [i_0]), -1876128341))) ? ((var_1 ? var_7 : 9)) : (((2248 ? 1876128329 : 54))))) ^ (!27))))));
        var_15 = (max(var_15, (((+((((((arr_2 [i_0] [i_0]) == 2248))) >> (((arr_1 [i_0] [i_0]) - 16465)))))))));
        var_16 += ((((min(((-51 ? -72 : (arr_2 [2] [2]))), ((2236 ? (arr_2 [i_0] [i_0]) : var_9))))) ? (1 == 16899555979261833246) : ((((((arr_1 [i_0] [i_0]) | 65535)) != (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((-(((var_9 <= (arr_2 [i_1] [i_1])))))) != 1));
        var_17 = 2147483623;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, (min(((((((arr_2 [i_1] [i_2]) <= 10))) + ((47912 ? 127 : var_4)))), ((((var_11 ? 1876128341 : 60539)) | ((((-127 - 1) != -37)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_19 = -62;
                                arr_18 [i_2] [2] [i_4] [i_3] [i_2] [i_2] [i_2] = (((arr_16 [5] [i_3] [i_3] [i_3 - 1] [i_3]) ? (((max(32765, (arr_3 [i_4]))))) : (max((((32764 ? (arr_2 [i_1] [i_2 - 1]) : -119))), (((-2147483647 - 1) ? var_0 : (arr_12 [i_2])))))));
                            }
                        }
                    }

                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        var_20 = ((((max(29092, (min((arr_20 [i_1] [i_2 - 1] [i_3 - 1] [0]), 1117301568184964308))))) ? ((max((arr_8 [i_2] [i_2]), var_4))) : ((((min(59, -6892882062451160211))) ? ((((((arr_20 [6] [i_2] [i_3] [i_6 - 1]) + 2147483647)) >> 0))) : var_12))));
                        arr_21 [i_2] = (((((((max(60556, 144115170895986688))) ? ((36444 ? -6994560022315393050 : -117)) : (!var_5)))) ? (((((arr_12 [i_2]) && (arr_16 [i_1] [i_2] [i_2] [i_3] [i_6 + 1]))) ? (((!(arr_14 [i_2])))) : ((max(18921, var_3))))) : ((((((arr_15 [i_1] [i_3] [i_6]) || (arr_4 [i_2]))) && ((var_9 || (arr_17 [i_1] [3]))))))));
                    }
                    arr_22 [i_1] [i_2] [i_3] = (((((-126 == ((1 ? 56 : -32752))))) ^ ((((max(562949953159168, var_12))) ? (((arr_5 [i_1] [i_1]) ? var_4 : (arr_16 [i_3 - 1] [i_3] [i_2 - 1] [i_2] [i_1]))) : 115))));
                }
            }
        }
    }
    #pragma endscop
}
