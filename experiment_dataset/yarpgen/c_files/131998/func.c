/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131998
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
    var_20 = ((/* implicit */unsigned int) (((((+(((/* implicit */int) (unsigned short)32513)))) + (((/* implicit */int) max(((unsigned short)33023), (((/* implicit */unsigned short) (short)20196))))))) | (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)32513))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_21 = 4294967295U;
        arr_3 [i_0] = ((/* implicit */unsigned short) max(((_Bool)1), (((_Bool) ((((/* implicit */int) (unsigned short)33023)) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21550))) & (17951886745456809484ULL)))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((9055556597182754261LL) / (min((807094563162940542LL), (var_7)))));
}
