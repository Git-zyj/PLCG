/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = var_9;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_18 = (((((arr_2 [i_0 - 3]) > 255)) ? (min((arr_1 [i_0 + 1]), (arr_2 [i_0 - 1]))) : ((-(arr_1 [i_0 - 1])))));
        var_19 -= (((arr_2 [i_0 - 3]) && ((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((-(((!(arr_6 [16] [i_1] [2] [i_1]))))))));
                    arr_10 [i_1] [i_1] [13] [6] = ((~(((arr_1 [i_2]) ? ((((!(arr_0 [i_0 - 3] [i_0 - 3]))))) : -602908367041610956))));
                    var_21 = (min(((((((arr_4 [i_2]) || (arr_5 [i_0]))) ? (!-602908367041610961) : (arr_0 [i_2 + 1] [i_2 - 3])))), (((arr_6 [i_2] [i_2 - 2] [i_1] [i_2]) & 3837622796173257894))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 -= ((((min((arr_17 [i_0] [i_4 - 1]), (arr_17 [i_0] [i_4 - 1])))) && ((max((arr_17 [i_0] [i_4 - 1]), (arr_17 [i_3] [i_4 - 1]))))));
                    var_23 = (max(var_23, (((((((arr_5 [i_3 + 1]) / (arr_4 [i_4])))) ? ((min(-602908367041610956, (arr_3 [i_0 - 1])))) : ((((!((3969166865434506442 >= (arr_15 [i_3]))))))))))));
                    var_24 ^= (arr_0 [7] [i_3]);
                    var_25 = (arr_12 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
