/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 58702));
    var_15 = (~var_5);
    var_16 = (min(var_16, ((((((var_3 ? var_1 : ((var_1 ? var_10 : 17274))))) ? (((-1130299855 > ((max(46532, var_13)))))) : (((((58702 ? 46168 : 1357262085535041755))) ? (min(var_13, 6)) : ((min(58702, 21))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((((((((min(var_4, 935081722))) ? (arr_3 [i_0]) : -46158)) + 2147483647)) >> (((max((((-888 + 2147483647) >> (((arr_3 [i_0]) + 110)))), ((58706 >> (var_12 - 48765))))) - 2097141))));
                var_18 = (min(12853511176637495719, ((((((arr_2 [i_0] [i_0]) - var_13)) >= var_6)))));
                var_19 = 1;
                var_20 = (min(56, ((-4407 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
