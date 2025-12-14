/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17843
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
    var_18 *= ((/* implicit */short) var_0);
    var_19 = max((max((var_17), (((((/* implicit */_Bool) var_9)) ? (var_7) : (var_17))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_13))))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) + (59)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) max((((unsigned long long int) -4822221549913218753LL)), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0])))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -4822221549913218749LL)), (9006682793109275776ULL))))))) >> (((((/* implicit */int) min(((short)-7), (((/* implicit */short) arr_0 [i_0 - 1] [i_0 + 1]))))) + (24))))))));
        arr_2 [1U] [i_0 - 3] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) (short)12))) >> (((max((var_6), (((/* implicit */long long int) (signed char)-14)))) - (8751308569045485650LL))))) - ((+(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_0 [7LL] [7LL])))))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_16)))))) - (((((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))) >> (((2147483647LL) - (2147483617LL)))))));
        var_23 += ((/* implicit */long long int) ((short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) min((min((arr_3 [i_1]), (((/* implicit */long long int) arr_4 [i_1] [i_1])))), (((arr_3 [i_1]) % (var_14)))));
        arr_7 [18U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (+((+(var_6)))));
        var_24 ^= ((/* implicit */short) (+(min(((~(arr_5 [(unsigned char)17]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (signed char)18)))))))));
    }
}
