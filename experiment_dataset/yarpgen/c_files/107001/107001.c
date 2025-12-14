/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] [i_0] [i_0] = 7137009844856904130;
                var_20 -= ((!((max((!119), (~-93))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_21 += var_8;
                    arr_12 [i_3] [i_3] [i_4] = (((34 ? 91 : (max(3, (arr_2 [i_2]))))));
                    arr_13 [i_3] [i_3] [i_4] = (arr_10 [i_2] [i_2] [i_3] [i_3]);
                    arr_14 [i_3] = ((27441 ? ((15661797421824073097 ? (var_1 >= 1) : (((!(arr_10 [i_4] [i_4] [i_3] [i_4])))))) : var_18));
                    arr_15 [i_3] [i_3] = (min(((((((var_14 ? 32752 : var_14))) && 4))), 4543681593983454913));
                }
                arr_16 [i_3] = ((((max(((min(3072261861, -2147483638))), var_13))) ? ((-47 ? (arr_9 [i_2 - 4] [i_3]) : ((1 ? (arr_6 [i_2] [i_3]) : 27452)))) : (((!(!1))))));
                arr_17 [i_3] = ((!((114 > (min(-2147483646, 4496977785402150004))))));
            }
        }
    }
    #pragma endscop
}
