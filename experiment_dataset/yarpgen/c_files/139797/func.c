/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139797
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
    var_14 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) var_2))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) var_7)))))) ? (((int) ((((/* implicit */_Bool) (short)14146)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14147))) : (169696255U)))) : (((/* implicit */int) ((unsigned short) var_6))))))));
    var_16 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) (short)-9344)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (26ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (20ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_17 = ((/* implicit */unsigned char) ((signed char) (short)9344));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 134217720)) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */int) ((unsigned char) var_5)))));
}
