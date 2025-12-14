/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176295
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(288221580058689536ULL)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (min((8588886016LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((18158522493650862086ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((signed char) 4294967295U))))) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_0]))) : (1324840848438803712ULL)));
        arr_2 [i_0] [16U] &= ((_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned short)8096))))) : (288221580058689536ULL)));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (short)-256)))))), ((~((+(((/* implicit */int) (short)-31573))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */signed char) var_0);
    }
}
