/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -25;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [9] [i_2] &= (max(25, (arr_7 [i_2 - 2] [i_2 - 3] [i_2 - 3] [i_2 - 2])));
                    var_11 -= 101;
                }
                var_12 += arr_7 [i_0] [i_0] [i_0] [i_0];
                arr_9 [i_0] [i_1] = ((((arr_5 [i_0]) ? ((-(arr_4 [i_0] [5] [i_1]))) : (arr_0 [i_0] [i_1]))));
                var_13 = ((((max((((-25 ? 25 : 101))), ((2297012845 ? 1997954444 : (arr_2 [i_0] [i_1])))))) ? (((10 ? (((arr_6 [i_0] [i_1] [i_1]) ? 0 : -69)) : (arr_2 [i_0] [i_1])))) : (max(4790445480545605144, (((arr_3 [i_0]) / (arr_6 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    var_14 = (((0 | var_2) ? (max(-183, -82)) : ((((!(var_6 | 72)))))));
    #pragma endscop
}
