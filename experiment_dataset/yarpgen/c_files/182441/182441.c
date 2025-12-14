/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 += ((17667 >> ((((((max(var_13, (arr_3 [i_1 + 1])))) ? (min(-596954240, 0)) : 52)) + 596954255))));
                arr_4 [i_0] [i_0] [i_0] = (((((((1367930099 || (arr_1 [i_0]))) ? ((62747 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : (!3)))) ? ((-(arr_1 [i_0]))) : (((!var_15) ? ((((arr_3 [i_0]) == var_15))) : (arr_0 [i_0])))));
                var_18 = ((-var_16 ? ((-1306513472 - (((arr_3 [i_0]) * (arr_0 [i_0]))))) : (arr_1 [i_0])));
                var_19 -= (4294967295 ? ((max((1 || 640041929), -1367930099))) : (1239261710693931292 + 9579));
                var_20 ^= 1872154604;
            }
        }
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_21 = (max(var_21, (!15659489665409186681)));
        var_22 = (((arr_6 [i_2 + 3]) || (((165555963 ? 1 : ((min(var_10, var_16))))))));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        var_23 = (((((193 ? -var_8 : ((~(arr_6 [i_3])))))) ? 0 : (((737109231 ? 33843 : -1306513472)))));
        var_24 = arr_8 [i_3 + 3] [i_3];
        var_25 = (((~1306513471) != (!1367930086)));
        arr_10 [1] = ((!((max(var_15, (arr_8 [i_3 + 2] [i_3]))))));
    }
    #pragma endscop
}
