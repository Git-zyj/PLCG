/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181573
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
    var_19 = ((unsigned short) var_7);
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_16))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1] [(unsigned short)0])))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((unsigned long long int) (unsigned short)0)) : (68719214592ULL)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) min((min((((((/* implicit */int) var_18)) + (((/* implicit */int) var_18)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))), (((/* implicit */int) ((unsigned short) (unsigned short)1536)))));
        var_23 -= ((/* implicit */unsigned long long int) arr_3 [i_1] [(unsigned short)14]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) (+((((+(((/* implicit */int) (unsigned short)65535)))) << (((((/* implicit */int) max((var_0), (var_18)))) - (36344)))))));
        var_25 = ((/* implicit */unsigned short) arr_6 [i_2] [6ULL]);
    }
}
