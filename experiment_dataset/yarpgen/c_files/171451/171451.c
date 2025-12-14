/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_10 = (((((arr_0 [i_0]) ? var_2 : 18446744073709551607))) ? var_3 : -3513054952);
                            arr_13 [i_0] = ((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (max(3513054952, 781912329)) : (arr_9 [i_4] [i_0] [11] [i_1] [i_0] [i_0])))) ? (((-(min(1329919430, var_5))))) : (min(var_2, (1 * 0)))));
                            var_11 = (max(var_11, 1));
                        }
                        var_12 = min((max((arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] [i_0]), 75)), (((var_5 || (!5522317400183466012)))));
                    }
                }
            }
        }
        var_13 = (max(var_13, (((+((max((arr_11 [4] [i_0] [4] [i_0] [i_0] [i_0]), 5522317400183466017))))))));
    }
    var_14 = (-(~var_0));
    var_15 = (max(var_15, ((((~(-18 == 2147483648)))))));
    #pragma endscop
}
