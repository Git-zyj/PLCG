/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120935
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
    var_14 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) 18169725875704945101ULL)) ? (277018198004606524ULL) : (277018198004606515ULL)))))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (var_2)))) ? (((/* implicit */unsigned long long int) var_1)) : (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (277018198004606523ULL)))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = (~(min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (max((((/* implicit */long long int) var_4)), (var_8))))));
        arr_2 [4U] |= ((/* implicit */unsigned short) (+(((277018198004606529ULL) - (18169725875704945092ULL)))));
        var_17 = ((/* implicit */long long int) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_7))))) < (((/* implicit */unsigned long long int) var_9))));
    }
    var_18 = ((min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) var_1)), (18169725875704945102ULL))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) 18169725875704945102ULL)) ? (var_12) : (((/* implicit */unsigned int) var_4))))))));
}
