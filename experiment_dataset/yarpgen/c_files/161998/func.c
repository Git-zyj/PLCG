/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161998
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
    var_20 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [5LL]))))) ? (((/* implicit */long long int) max((var_11), (((/* implicit */int) (_Bool)0))))) : (max((((/* implicit */long long int) arr_1 [(signed char)6])), (arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] [(unsigned char)2] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)9)), ((unsigned short)33742))))) : (var_7))), (((/* implicit */unsigned int) (!((_Bool)1))))));
        var_23 = ((/* implicit */signed char) min((var_23), ((signed char)(-127 - 1))));
    }
    var_24 = ((/* implicit */signed char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_17))));
    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
    var_26 = ((/* implicit */_Bool) var_16);
}
