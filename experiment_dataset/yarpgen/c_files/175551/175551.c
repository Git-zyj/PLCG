/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((-(11 / var_7)))) ? var_2 : (arr_2 [i_0]));

        for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, (((-(max((max((arr_6 [i_0] [i_1 - 3] [i_2] [i_3 - 1]), var_6)), ((((arr_1 [i_0]) / var_6))))))))));
                        var_11 = ((+(max((((arr_0 [i_1]) / var_3)), ((59421 & (-2147483647 - 1)))))));
                        var_12 = (min(((-(min(1, var_7)))), (min((max(1, 1275041363474512836)), (arr_0 [i_1 - 1])))));
                    }
                }
            }
            var_13 += 6067;
        }
        for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_14 += var_5;
            var_15 &= (arr_12 [i_0]);
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = (max(((((arr_17 [i_5] [i_5]) > (arr_16 [i_5] [i_5])))), ((-(arr_16 [i_5] [i_5])))));
        arr_18 [i_5] = (((((+(((arr_16 [i_5] [i_5]) + (arr_16 [i_5] [i_5])))))) ? ((((((arr_17 [i_5] [i_5]) % (arr_17 [i_5] [i_5])))) ? ((((arr_17 [i_5] [i_5]) ? var_1 : var_1))) : ((1275041363474512836 ? (arr_17 [i_5] [i_5]) : (-2147483647 - 1))))) : ((((!((min(234, var_0)))))))));
        var_17 = 238;
    }
    var_18 = var_2;
    var_19 = (min(var_19, var_3));
    #pragma endscop
}
