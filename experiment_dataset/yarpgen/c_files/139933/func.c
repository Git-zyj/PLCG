/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139933
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_13 += ((/* implicit */unsigned short) (~(max((arr_0 [(unsigned short)1]), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)0)))))))));
        var_14 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), (arr_1 [i_0 - 2] [i_0 + 1]))))) ^ ((~(var_12)))));
        var_15 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) (signed char)10))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-8)) + (((/* implicit */int) (signed char)-14))))))) : (arr_2 [12] [(short)4])));
        var_16 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_1 [i_0 - 2] [i_0 - 1]), (((/* implicit */unsigned short) (signed char)24))))), (14609576811902675812ULL)));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [12ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (7078781826099089310ULL) : (17952136909762717814ULL)));
        arr_6 [i_1] = ((/* implicit */long long int) (unsigned char)238);
    }
    var_17 += ((/* implicit */unsigned short) var_1);
}
