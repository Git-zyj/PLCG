/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18654
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_2);
        arr_4 [i_0] = ((/* implicit */_Bool) min((min((arr_2 [i_0]), (var_4))), (((/* implicit */unsigned int) (short)896))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((((unsigned long long int) var_10)) << (((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)896)))) + (82))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))))));
    }
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_3)))))), (((signed char) var_9))));
    var_15 = min(((short)896), (((/* implicit */short) (signed char)-85)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)33068)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((unsigned short) 0ULL)))))) ? (((/* implicit */unsigned long long int) var_9)) : (max((((/* implicit */unsigned long long int) (unsigned short)55624)), (min((var_11), (((/* implicit */unsigned long long int) var_2))))))));
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((max(((signed char)84), ((signed char)80))), (min(((signed char)-85), (var_1))))))));
}
