/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155026
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [(_Bool)1] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65504)))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (short)-7362))) / (var_8))), (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)24))))) * (((long long int) (_Bool)1)))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_13);
    var_19 = ((/* implicit */unsigned int) max((((((_Bool) var_12)) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) min(((unsigned short)3260), (((/* implicit */unsigned short) var_2))))))), ((~(((/* implicit */int) max((var_11), (((/* implicit */short) var_9)))))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((max((min((((/* implicit */unsigned long long int) var_10)), (var_3))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)73))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)4)), (3511680178U)))))))));
}
