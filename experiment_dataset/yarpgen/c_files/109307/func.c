/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109307
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0 - 1] = ((/* implicit */long long int) var_10);
        arr_3 [i_0 - 1] &= (!(((/* implicit */_Bool) (-(511LL)))));
        arr_4 [i_0 + 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6400)) ? (511LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225)))));
        var_14 = ((/* implicit */signed char) min(((-(-1LL))), (((/* implicit */long long int) (!((_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((short) (+(807312494U)))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) arr_5 [i_1])) : (arr_6 [i_1] [i_1 + 1])));
        arr_8 [i_1] [i_1] = ((/* implicit */int) (~(arr_6 [i_1] [i_1 - 1])));
    }
    var_16 = ((/* implicit */int) var_11);
}
