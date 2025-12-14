/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~var_1) ? (((((2286154107 ? -7119787867162330976 : var_11)) == var_16))) : (((var_16 ? 47 : 46408)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (min(((!(arr_4 [i_0] [i_0]))), (max((arr_0 [i_0] [i_0]), ((!(arr_2 [i_0])))))));
                    var_19 = (((((-(max(var_6, 15558694910421452100))))) ? 36985754 : (((2808103019298317184 >= var_9) ? ((3720766547 ? 127 : var_2)) : ((((var_3 != (arr_8 [i_0] [12] [i_1])))))))));
                    var_20 = (min(var_20, ((max((((!(arr_4 [1] [i_2 + 1])))), (min((arr_1 [i_2] [i_2 + 1]), (arr_4 [0] [i_2 + 2]))))))));
                    var_21 = ((~(min((arr_1 [i_1] [i_2 + 1]), ((65535 ? (arr_8 [i_0] [i_1] [i_2 + 2]) : (arr_1 [i_2] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
