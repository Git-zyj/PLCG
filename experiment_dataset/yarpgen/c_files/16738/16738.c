/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -590529597;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [17] [i_0] [i_2] = (((((39861 ? -6886167302811758456 : -7601519898104168483))) ? (((~(~61)))) : 5132178508228477478));
                    var_13 = ((((233 ? -148 : 94))) ? 255 : ((6500767472911147351 ? -8082455682503991988 : 16149)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0 - 1] [i_1] [i_2] [i_2] [i_0] = (((((25 ? 0 : 14105759834469042957))) ? 3007644850273495458 : ((((((-6776299260460646109 ? 0 : 1196522549))) ? (((44 ? 254 : 23))) : (~6246359500063130874))))));
                                var_14 = -6776299260460646089;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, (((var_8 ? (!-1196522550) : var_4)))));
    var_16 = ((0 ? (((9223372036854775807 ? -25674 : 1937729740))) : 14142940323576359015));
    #pragma endscop
}
