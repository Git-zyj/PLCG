/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_11;
    var_14 = (min(((-819676748235808959 ? 248 : 0)), var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = min(-23124, -16);
                                var_15 = (((((23939 ? 42 : (arr_9 [i_0 - 2] [i_1] [i_0] [i_0])))) ? (((((var_12 ? var_10 : (arr_4 [i_1] [i_1] [i_1])))) ? ((min(var_3, var_2))) : (arr_9 [i_3] [i_1] [i_1] [i_0]))) : ((min(16, (arr_8 [i_3 - 1] [i_0 - 2]))))));
                                arr_15 [5] [i_1] [i_2] [i_2] [i_2] [1] [i_1] = ((((min(1055531162664960, var_4))) ? (min(((var_8 ? (arr_5 [i_2] [i_1]) : 1)), ((min(var_11, 0))))) : (((arr_0 [i_0 - 3] [i_0 - 2]) ? (arr_0 [i_0 - 3] [i_0 - 3]) : 1711336895))));
                            }
                        }
                    }
                }
                var_16 += (min(((var_9 ? var_1 : (arr_1 [i_0 - 1] [i_1]))), (((4294967269 ? var_9 : 4)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_6] [i_6] [i_7] [i_8] = (min(-13145, 4080));
                            var_17 = (((min(((min(536870904, -1231428225963181867))), (min(1, (arr_17 [i_5])))))) ? (min((arr_3 [4] [4] [i_5 + 1]), (min(var_5, (arr_16 [i_8]))))) : ((28 ? 1 : 1)));
                            var_18 = (max(var_18, ((min(((var_2 ? var_10 : var_2)), ((min(var_5, 1))))))));
                            arr_27 [i_5 + 1] [i_6] [i_5 + 1] [i_6] = (((((4148450577704541881 ? -19 : var_9))) ? ((3704769325 ? 32677 : 11513249781488749212)) : (((min(var_3, -20744))))));
                        }
                    }
                }
                arr_28 [i_6] = (min(-98, 7319625412818831052));
            }
        }
    }
    var_19 ^= var_2;
    #pragma endscop
}
