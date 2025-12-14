/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105126
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((_Bool) ((unsigned long long int) (unsigned char)255)));
        var_19 = ((/* implicit */unsigned char) ((unsigned int) ((long long int) var_7)));
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((signed char) ((unsigned int) ((signed char) 2639313488U)))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) ((short) var_0)))))));
    var_22 = ((unsigned long long int) ((unsigned char) ((unsigned int) var_0)));
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((unsigned int) ((unsigned short) ((long long int) arr_4 [i_1] [i_1]))))));
        var_24 = ((/* implicit */int) ((unsigned long long int) ((short) ((long long int) 8292119518920124913ULL))));
        var_25 = ((/* implicit */int) ((unsigned long long int) ((signed char) ((unsigned int) var_2))));
        arr_6 [i_1] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) ((long long int) var_14))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((int) ((unsigned char) ((unsigned long long int) arr_5 [i_1] [i_1]))));
    }
}
