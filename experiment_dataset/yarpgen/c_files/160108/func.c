/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160108
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (unsigned short)32430));
    }
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */int) (+(min((((arr_3 [i_1] [i_1]) ? (((/* implicit */unsigned int) var_12)) : (arr_4 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((1806312865) - (1806312860))))))))));
        arr_6 [i_1 - 2] = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)33105), ((unsigned short)33105)))) | (((/* implicit */int) min((arr_3 [i_1] [i_1 + 1]), (arr_3 [i_1] [i_1 - 1]))))));
    }
}
