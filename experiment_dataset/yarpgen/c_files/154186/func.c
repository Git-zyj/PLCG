/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154186
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_7);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min(((-(min((-6609063801237033513LL), (-6609063801237033513LL))))), (((/* implicit */long long int) (-((-(((/* implicit */int) var_4)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))) ? ((-(-6609063801237033509LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_6))))))), (((/* implicit */long long int) (-((~(((/* implicit */int) var_1)))))))));
    }
    var_13 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
    var_14 = ((/* implicit */unsigned int) ((((-6609063801237033528LL) >= (8075825034643355864LL))) ? (((/* implicit */long long int) ((((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (var_1)))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((-6609063801237033516LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (min((((/* implicit */long long int) var_1)), (-6609063801237033537LL)))))));
}
