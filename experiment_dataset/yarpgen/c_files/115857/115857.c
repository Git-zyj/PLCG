/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_18 = (((arr_0 [i_0] [i_1]) > var_13));
                        var_19 *= ((((((arr_6 [i_2]) ? (arr_7 [1] [1] [1] [1] [i_3]) : var_5))) ? ((3591543402671367681 ? var_10 : (arr_1 [2] [2]))) : (103 << 0)));
                        var_20 = (max(var_20, ((((arr_4 [i_1] [18]) >= ((((arr_5 [i_0]) - (arr_6 [i_0])))))))));
                        var_21 = (min(var_21, (arr_1 [1] [i_3])));
                        arr_8 [i_0] [i_2] [i_0] = ((!(arr_1 [i_0] [i_3])));
                    }
                    arr_9 [i_0] [i_0] [i_1] [i_1] = (18446744073709551615 / 37143);
                    var_22 = (arr_5 [i_1]);
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
