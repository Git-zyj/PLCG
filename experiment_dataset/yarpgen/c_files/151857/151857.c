/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((max(((max(var_8, 30485))), (min(var_0, 1362787774)))));
    var_19 += (~((-((max(255, 0))))));
    var_20 = 23218;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] = max(830963131, (((((-9223372036854775807 - 1) ? 0 : 3448795568)))));
                var_21 += ((((min((~2283155637155442148), 103))) ? (min(((-2014212398 ? (arr_3 [0] [i_1 - 1]) : var_7)), var_13)) : ((-(min(104596041, (arr_2 [i_1] [i_0])))))));
                var_22 = (((!((max((arr_5 [i_0] [i_1]), (arr_0 [i_0])))))));
            }
        }
    }
    var_23 = (max((max(1811176260, 16185967367807620909)), (((528302314 ? 255 : var_14)))));
    #pragma endscop
}
