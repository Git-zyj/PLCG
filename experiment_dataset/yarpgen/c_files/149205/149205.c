/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] = ((((((arr_3 [i_0] [i_1 + 2]) ? -var_11 : (arr_0 [i_1 - 1] [i_1 - 1])))) ? (arr_6 [i_2] [i_1] [i_0] [i_0]) : ((((-(arr_6 [i_2] [i_1 + 2] [i_0] [i_0]))) * 3013107187))));
                    var_14 = (min(var_14, (((!(((1 ? 255 : 1))))))));
                    var_15 = (max(var_15, (((((((arr_8 [10] [i_2] [i_2]) ? var_9 : (arr_8 [i_0] [i_2] [i_2])))) ? (((!116) << ((((max(1, var_12))) - 2792)))) : 3)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_16 = (max(var_16, 102));
                    var_17 = ((max(255, 51576)));
                }
                var_18 = (((max(-1172501654, 1)) >> (37052 - 37032)));
            }
        }
    }
    var_19 = (max(var_19, ((max((var_11 ^ var_0), (var_8 * var_0))))));
    var_20 |= var_7;
    #pragma endscop
}
