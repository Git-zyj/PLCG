/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_16 > var_16);
    var_19 = ((((((((var_9 ? var_7 : var_5))) ? (~var_0) : 6798448025315255466))) ? (-6798448025315255467 / 18387537417862710525) : (min(var_5, (var_2 / var_3)))));
    var_20 -= 57;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = arr_6 [i_0] [i_1 + 2] [i_2];
                    var_22 = ((((-4 || (((arr_1 [i_0 - 2]) <= 6798448025315255475)))) ? (((~(arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : (max((((arr_1 [i_0]) ? (arr_1 [i_1]) : 1111490446821527384)), ((200 ? 8206460227632541803 : 1111490446821527384))))));
                    var_23 = (arr_1 [i_0 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
