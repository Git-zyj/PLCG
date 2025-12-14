/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165855
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
    var_15 = min((max((17764370576803553681ULL), (((/* implicit */unsigned long long int) 1174096918)))), (((/* implicit */unsigned long long int) var_6)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned long long int) max((min((798614241U), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) ((unsigned char) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1174096915)) ? (max((7ULL), (((/* implicit */unsigned long long int) 4294967283U)))) : (((/* implicit */unsigned long long int) 2767019166U)))))));
    }
}
