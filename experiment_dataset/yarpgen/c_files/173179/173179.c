/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = ((1 ? (min(0, (arr_3 [i_2 - 1] [i_2 - 2] [i_0]))) : (-14743 + 9477294154974987462)));
                            var_17 = (((((0 ? ((max(1, 2702))) : ((-5561267726063853533 ? 1 : 1))))) ? ((((((119 ? 50743 : 1))) ? (54634 <= 30943) : 119))) : (((max(5735546497081765037, 25849)) % 11818))));
                            arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (max(1, ((((((!(arr_6 [i_0] [i_0] [i_0] [i_0]))))) == (max(2917090215068165352, 1))))));
                            var_18 = (min(var_18, 1));
                        }
                    }
                }
                arr_11 [i_1] [i_1] = ((((max((1 / 1), (arr_2 [i_0])))) ? (((((arr_9 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) ? 960 : (arr_7 [i_1] [i_1] [i_0] [i_0]))) ^ ((((arr_6 [i_0] [i_1] [i_0] [i_0]) | 1))))) : (((((max(1, (arr_5 [i_1] [i_0] [i_0])))) - 7)))));
            }
        }
    }
    var_19 = var_12;
    var_20 = ((var_11 % ((min(80, var_3)))));
    var_21 = 1;
    #pragma endscop
}
