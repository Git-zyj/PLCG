/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12937
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21972))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)4)), (-3203370790667742059LL))))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (unsigned short)41864)) : (((/* implicit */int) var_9))))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)64)), (var_10)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_3);
    }
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (3203370790667742057LL)))), (18ULL))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-19))))) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (var_6)));
    var_15 = ((/* implicit */_Bool) (+((+(var_10)))));
}
