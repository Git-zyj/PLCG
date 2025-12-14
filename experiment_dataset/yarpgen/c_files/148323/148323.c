/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 += (min((((((((!(arr_2 [i_0]))))) != 14927485917645442931))), (((~var_2) ? (arr_1 [i_0]) : 3519258156064108675))));
        var_17 = (min(var_17, (((((-(arr_1 [i_0]))) ^ var_5)))));
        var_18 = (min(var_18, ((((!var_9) + (((!(arr_3 [i_0])))))))));
        var_19 = (min(var_19, ((((5 != var_14) > (14927485917645442920 || 67553994410557440))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    arr_13 [i_3] &= ((!((-1 || (((-(arr_2 [i_2]))))))));
                    var_20 = ((((+((var_2 ? (arr_10 [i_1] [i_1] [i_3]) : -1264070667)))) < (arr_6 [i_1])));
                    var_21 &= -3519258156064108696;
                    var_22 *= (!var_13);
                }
            }
        }
        var_23 -= min((((var_8 + var_15) ? 29 : ((2305807824841605120 * (arr_10 [i_1] [i_1] [i_1]))))), -43);
        arr_14 [i_1] = ((var_7 + (var_1 / -1264070660)));
    }
    var_24 = var_15;
    var_25 |= (((((var_2 ? var_10 : var_6)))));
    var_26 = var_14;
    var_27 |= (((max(var_1, (var_6 || var_13)))) ? ((((min(1, var_11))))) : ((3519258156064108717 ? -48 : 16140936248867946496)));
    #pragma endscop
}
