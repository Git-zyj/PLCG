/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_9;
    var_11 += (!203);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 2] [i_0] [i_0] [1] = ((!(570340632 * 102)));
                    var_12 &= (((((~(arr_2 [i_1 - 1] [i_1 - 2] [i_0 - 2])))) ? ((+(((arr_3 [i_1] [1]) ? -32765 : 4294967295)))) : 1717489718));
                    arr_7 [i_0 + 1] [i_1 + 1] [i_2] = (max(((min(((min(-30879, 53))), (max((arr_5 [i_0 - 1] [i_0] [i_0 + 2]), (arr_4 [i_0] [i_1 - 2])))))), (max(570340632, ((((arr_2 [i_0] [i_0] [i_2]) != 28432)))))));
                    var_13 += (((((arr_0 [i_0] [i_1]) ? ((2641602524678791160 & (arr_0 [i_0] [i_0 - 1]))) : (((((arr_5 [i_0] [i_0] [i_0]) == 49829)))))) <= (max((max((arr_3 [i_0] [i_1]), (arr_4 [i_1] [i_2]))), ((((arr_3 [5] [5]) ? (arr_0 [1] [1]) : (arr_1 [i_1 - 2] [i_0]))))))));
                }
            }
        }
    }
    var_14 = (min(var_0, (!var_3)));
    #pragma endscop
}
