/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((!var_5) ? var_8 : var_8))));
    var_14 = (min(var_14, ((((((-14136007910315086378 ? 0 : ((var_11 ? var_2 : var_8))))) ^ ((max(-7611570924287935645, var_3))))))));
    var_15 = (((((((1 ? 1 : 13))) || 2126726209781500977)) ? (((min(var_11, var_0)))) : ((((min(141, var_12))) << (var_0 - 13768828025793076273)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = ((205 ? 15260 : 11308981117400953253));
                    var_17 = (((max(var_4, (arr_3 [i_0] [i_1])))) & (arr_3 [9] [0]));
                    var_18 = (+(((arr_1 [i_0] [9]) ? (arr_1 [i_2] [i_0]) : (arr_1 [i_0] [i_1]))));
                }
            }
        }
    }
    var_19 = ((var_1 ^ ((83 ? var_9 : 7137762956308598355))));
    #pragma endscop
}
