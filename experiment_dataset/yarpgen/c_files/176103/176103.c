/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (min(var_4, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((min(-1007586319976287074, 6336430883883571803)) != ((((((((arr_0 [i_0]) - (arr_1 [i_1])))) && 1489417958)))));
                arr_5 [i_0] [i_1] = ((((arr_0 [i_0]) ? -1489417941 : (((arr_2 [i_0] [i_1]) - 4294967289)))));
                var_19 = ((((((((arr_1 [21]) != (arr_3 [i_1])))))) ^ (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [19] [i_1] [i_1] [14] = (((!((max((arr_6 [12] [i_2 - 2]), 32767))))));
                            var_20 = (min(var_20, (((86 ? (arr_11 [i_0] [i_2 + 1] [i_2 + 1] [i_2 - 1]) : ((~((((arr_3 [i_0]) == 42))))))))));
                            var_21 |= 4294967288;
                        }
                    }
                }
                var_22 = -1489417959;
            }
        }
    }
    #pragma endscop
}
