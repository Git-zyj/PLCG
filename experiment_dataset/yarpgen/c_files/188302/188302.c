/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_0] [1] = (((arr_6 [i_2] [9]) ? (~566187884) : ((255 ? -1624163901 : ((-117 ? 1886923244 : 0))))));
                    var_19 = (((((89 ? (arr_10 [i_0] [i_1]) : (arr_10 [i_1] [i_2])))) ? ((((((arr_10 [i_0] [i_0]) ? 3250 : 1))) ? (arr_11 [i_0] [i_0]) : 225)) : 65535));
                }
            }
        }
    }
    var_20 = (max(1, 50));
    var_21 = ((var_11 ? (149 > 134217727) : var_2));
    var_22 = (min(566187884, 225));
    #pragma endscop
}
