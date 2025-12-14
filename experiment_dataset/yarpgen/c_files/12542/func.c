/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12542
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)51544), (((/* implicit */unsigned short) var_0)))))) * ((((_Bool)1) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))))), (((/* implicit */long long int) min((((var_14) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_5))))))))));
    var_18 = ((/* implicit */unsigned char) ((_Bool) var_13));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)40318)))) + (((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned char)22))))))), (((unsigned long long int) (signed char)-1))));
        arr_3 [i_0] = ((/* implicit */signed char) var_14);
        arr_4 [i_0] = (_Bool)1;
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_1 [i_0]))));
    }
}
