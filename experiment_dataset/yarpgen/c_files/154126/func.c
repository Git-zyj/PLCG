/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154126
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
    var_15 = ((/* implicit */unsigned char) var_8);
    var_16 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) (signed char)-88))));
    var_17 = ((/* implicit */int) var_12);
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((unsigned long long int) var_6)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (var_11)))))))), (var_8))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) (unsigned short)0);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_13);
        arr_4 [i_0] = ((/* implicit */signed char) ((var_0) & (var_10)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) ((var_9) | (((/* implicit */unsigned long long int) var_6))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) ((unsigned int) var_9))))));
    }
    for (unsigned int i_2 = 3; i_2 < 7; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) 9869834104190887971ULL);
        var_23 += ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_6)), (var_9))), (((/* implicit */unsigned long long int) ((short) 8576909969518663649ULL)))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) ((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
    }
}
