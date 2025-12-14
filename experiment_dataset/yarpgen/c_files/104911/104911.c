/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (15574645042173047289 / 1436083704);
                var_16 = (min(var_16, (((((max(-3280025582067177882, (((8767603112185951908 ? (arr_2 [1]) : (arr_2 [8]))))))) ? var_12 : (((!((max(60677, (arr_3 [14]))))))))))));
                var_17 = (min(var_17, ((max((-3280025582067177882 / 3280025582067177882), var_13)))));
            }
        }
    }
    var_18 -= 1172991720;
    var_19 = ((var_4 ? var_4 : ((var_4 ? ((4294967284 ? var_13 : -8767603112185951908)) : (max(8767603112185951908, var_6))))));
    #pragma endscop
}
