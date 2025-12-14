/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_9) | ((var_2 ? (~22325) : ((23256 ? var_6 : 1))))));
    var_20 = (min(var_20, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((((((((arr_1 [i_1]) ? -946162975704384042 : -8934388460861749708))) ? (arr_3 [i_0]) : (-9223372036854775807 - 1))) + ((((!(arr_5 [i_0] [i_0] [i_1] [i_0])))))));
                    var_21 -= ((var_0 ? (arr_5 [i_2] [i_1] [i_1] [i_0]) : (((max((1940189022941073870 && -1), (!-3)))))));
                    arr_8 [i_0] [1] &= (((((-(arr_3 [i_0])))) ? (((arr_5 [i_0] [1] [i_1] [i_1]) ? -1940189022941073867 : (arr_4 [i_0] [i_0]))) : 13335));
                }
            }
        }
    }
    #pragma endscop
}
