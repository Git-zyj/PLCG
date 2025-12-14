/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101049
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(unsigned short)0] [i_0] = ((/* implicit */unsigned char) (-(-9223372036854775781LL)));
        var_10 ^= ((/* implicit */signed char) 9223372036854775780LL);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_11 *= ((/* implicit */_Bool) (((!(var_4))) ? (((/* implicit */long long int) arr_5 [(unsigned short)2])) : (9223372036854775780LL)));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1]) + (((/* implicit */int) arr_0 [i_1] [i_1]))));
        var_12 = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
    }
    var_13 = max((((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)-45))))))), (((max((4294967292U), (((/* implicit */unsigned int) var_4)))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))))));
}
