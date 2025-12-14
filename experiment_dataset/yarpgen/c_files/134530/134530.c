/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] = -1;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_10 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0] [1]);
                            var_17 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 16699979311863979186 : (((arr_0 [16] [i_0]) ? 1746764761845572458 : var_8))));
                            var_18 = ((var_16 ? (arr_1 [i_0]) : 1));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = 1;
                            var_19 *= ((var_0 ? (!var_15) : var_7));
                        }
                        var_20 = (arr_5 [i_0] [i_0] [i_0]);
                        var_21 ^= ((var_6 ? (arr_8 [i_0] [i_0] [i_2] [i_5]) : var_6));
                    }
                    var_22 = ((6433287474991018735 ? 11252736686383350025 : (!231)));
                    var_23 += ((((((((1 ? (arr_16 [i_0] [i_1] [21] [i_2] [i_2]) : var_16))) ? (var_2 < 16699979311863979162) : (((245 <= (arr_16 [i_2] [i_1] [i_0] [i_0] [i_0]))))))) ? ((1 ? 1 : 1)) : ((max(var_4, (arr_7 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1]))))));
                }
            }
        }
    }
    var_24 = (max(var_24, (((var_14 ? (min((!var_5), ((var_10 ? var_7 : 15892529274874564654)))) : (((min(((max(var_14, var_8))), (max(var_13, 208)))))))))));
    #pragma endscop
}
