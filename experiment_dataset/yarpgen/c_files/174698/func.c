/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174698
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_17 = (unsigned short)57344;
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), ((-(((/* implicit */int) arr_0 [i_0 - 3]))))));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= ((unsigned short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8192)) && (((/* implicit */_Bool) var_0))))), (min(((unsigned short)8191), ((unsigned short)35912)))));
        var_18 = var_15;
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 - 1])))) <= (((/* implicit */int) (unsigned short)32031))));
        arr_7 [i_1] [i_1] = (unsigned short)31582;
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)51630)) ? (((/* implicit */int) (unsigned short)36910)) : (((/* implicit */int) (unsigned short)6519)))), (((/* implicit */int) (unsigned short)14844))));
    }
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2 - 2] = var_12;
        var_19 = ((/* implicit */unsigned short) max((var_19), ((unsigned short)61587)));
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((unsigned short) min(((unsigned short)57344), (var_5))))));
}
