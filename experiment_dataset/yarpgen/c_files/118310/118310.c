/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((143 == var_5) ? ((((((var_7 + 2147483647) >> (133 - 120)))) ? (((min(160, var_7)))) : (min(151, var_6)))) : ((((-15 != 112) ? 46 : ((min(164, 94))))))));
    var_14 = var_1;
    var_15 = ((((4132421070 != var_10) == (8731877480323182106 - var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((!15731680579092146692) | (min(((151 ? -14358 : 255)), (!7057))))))));
                var_17 = (max(var_17, (((!((((((2241843619 ? -119 : (arr_5 [i_0])))) ? (min((arr_1 [1]), (arr_2 [9] [i_0]))) : (((3468121951949720398 ? 6509364728918388931 : 32842)))))))))));
                arr_6 [3] = (min((arr_5 [i_1]), ((((arr_5 [i_0]) != (arr_5 [3]))))));
            }
        }
    }
    var_18 = (((((((11055 ? var_12 : var_11)) | 1832))) ? ((max(-5, 0))) : (((min(21, var_10))))));
    #pragma endscop
}
