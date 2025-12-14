/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_14 = (max(var_14, ((max(((~((58222 ? 32767 : 15797143401551195730)))), -7313)))));
            arr_5 [i_0 - 1] [i_0] = ((~((max((((!(arr_4 [i_0] [i_1 - 1] [i_0])))), (max(var_3, 32767)))))));
            var_15 = -1419196739;
        }
        for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_16 = (max((((!(arr_8 [i_0 - 1] [i_2 - 2] [i_2])))), (min(2147483647, 1409419368))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_17 *= -1397947201;
                            var_18 = ((((((arr_0 [i_0 + 4] [i_4 + 3]) ? (arr_9 [i_0 + 3]) : var_7))) * ((((min(var_9, var_3))) ? (!15102) : ((-(arr_6 [i_0])))))));
                        }
                    }
                }
            }
            var_19 = ((~((((max(32762, 1419196729))) ? var_1 : -24))));
            var_20 = ((-((~(arr_13 [0])))));
            arr_17 [i_2] [i_0] = (((min(((max(var_11, (arr_1 [1])))), (((arr_11 [14] [i_0] [0] [i_2 - 1]) ? (arr_0 [12] [17]) : var_0)))) > (((~(~-1232396954))))));
        }
        arr_18 [i_0 + 3] = (!1);
    }
    var_21 = var_7;
    var_22 = var_11;
    var_23 = 1;
    #pragma endscop
}
