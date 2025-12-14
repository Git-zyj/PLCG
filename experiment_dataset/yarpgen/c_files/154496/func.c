/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154496
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
    var_15 = ((/* implicit */signed char) var_14);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_0 [i_0] [i_0])))) ? (-9223372036854775794LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_9) : (((/* implicit */int) (unsigned short)1)))))));
        var_17 = ((/* implicit */unsigned int) var_3);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned char) (+(max((var_14), ((~(arr_3 [18U] [i_1])))))));
        var_19 = ((/* implicit */unsigned int) (_Bool)0);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max(((~(arr_3 [i_1] [(unsigned short)5]))), (((((/* implicit */int) var_5)) / (arr_3 [i_2] [i_1])))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (arr_6 [i_2] [i_2] [i_1]) : (((/* implicit */long long int) var_9))))));
            arr_9 [i_1] &= ((((/* implicit */_Bool) ((int) (~(var_9))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_2]))) : ((((((~(((/* implicit */int) (signed char)127)))) + (2147483647))) << ((((((~(((/* implicit */int) var_5)))) + (12937))) - (2))))));
            arr_10 [16LL] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)255))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)63)), (var_2)))) : (((/* implicit */int) max(((unsigned short)65534), ((unsigned short)65534))))))) ? ((~(arr_3 [i_1] [i_2]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1))))) ? (((arr_3 [i_1] [i_2]) - (((/* implicit */int) var_3)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)32)), (var_8)))))));
            var_20 ^= ((/* implicit */unsigned long long int) (~((~(8U)))));
        }
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (((unsigned int) 34359738367LL)))))))));
    }
    var_22 = ((/* implicit */unsigned int) (unsigned short)65534);
    var_23 = ((/* implicit */long long int) var_10);
}
