/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118494
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [4] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))))));
        var_10 &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2996660401997629239LL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))))))))) < (max((((int) (unsigned char)30)), (((int) arr_1 [8ULL]))))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (((-(((/* implicit */int) var_1)))) + (((/* implicit */int) max(((unsigned short)58782), ((unsigned short)6754))))))), (((((/* implicit */_Bool) ((int) 1640759603))) ? (((var_6) & (1758369715U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)6753)))))))));
        var_11 &= var_1;
    }
    var_12 |= ((/* implicit */signed char) var_2);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_2))))))) * (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
}
