/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161201
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((unsigned int) max((min((((/* implicit */int) (unsigned short)65535)), (-1868561084))), (((int) -1868561084)))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((long long int) 805306368U)) > (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (-1868561085))))))), (((long long int) (unsigned short)65532)))))));
        var_18 = ((/* implicit */int) 6354985936101189326ULL);
    }
    for (signed char i_1 = 3; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((int) arr_4 [i_1])))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(unsigned short)2])) && (((/* implicit */_Bool) var_2)))))));
    }
    for (signed char i_2 = 3; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */long long int) ((1868561079) % (((/* implicit */int) (unsigned short)14))));
        var_21 &= ((/* implicit */signed char) 9223372036854775807LL);
    }
    var_22 = ((/* implicit */long long int) (unsigned short)65534);
}
