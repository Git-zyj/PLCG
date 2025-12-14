/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176924
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
    var_18 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_7))))));
    var_19 = var_5;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (unsigned short)37916))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) <= (6626788668843285109ULL)));
        var_21 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27620))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) max(((unsigned short)33950), ((unsigned short)37930)));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)35332)) <= (((/* implicit */int) (unsigned short)37920)))))));
    }
    var_22 = ((/* implicit */unsigned short) var_12);
}
