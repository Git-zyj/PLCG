/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117860
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) min(((~(-585399571))), (((1805418524) | (((/* implicit */int) (short)10170)))))))));
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_13 = ((/* implicit */int) var_6);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = (-(((-1805418525) + (1805418524))));
        var_14 = ((/* implicit */unsigned int) var_0);
        var_15 = ((/* implicit */int) var_4);
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) 1805418533));
        arr_10 [i_2] = ((/* implicit */int) ((unsigned char) arr_4 [i_2 - 1] [i_2 - 1]));
        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1])) ? (arr_7 [i_2 - 1] [i_2 - 1]) : (((/* implicit */int) arr_3 [(short)20]))));
    }
    var_17 = ((/* implicit */int) max((var_17), (min((-1805418540), (((/* implicit */int) (unsigned char)249))))));
}
