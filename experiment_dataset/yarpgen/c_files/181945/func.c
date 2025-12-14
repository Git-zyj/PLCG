/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181945
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
    var_15 = ((/* implicit */signed char) -1048576);
    var_16 = ((/* implicit */unsigned long long int) var_6);
    var_17 |= var_4;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_11);
        var_18 *= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))) <= (arr_1 [i_0 + 3]))) ? (min((0ULL), (((((/* implicit */_Bool) arr_0 [i_0])) ? (0ULL) : (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_1 [i_0 + 1])))) ? (((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        var_19 = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (_Bool)0)), (arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (max((((/* implicit */unsigned long long int) arr_2 [6U] [i_0 + 3])), (var_4))) : (((/* implicit */unsigned long long int) (+(7703878986089365293LL)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_9 [i_1 + 1] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        var_21 -= ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
        var_22 += ((/* implicit */_Bool) (short)21973);
        var_23 ^= ((/* implicit */signed char) ((arr_7 [i_1 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))));
    }
    for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 2) 
    {
        var_24 = ((/* implicit */signed char) var_7);
        var_25 = ((((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((var_1) + (8018719744690420374LL))) - (3LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_5))))) | (((((/* implicit */long long int) var_12)) & (arr_12 [i_2])))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 101700687))))));
        var_26 = ((/* implicit */unsigned int) -101700703);
        var_27 ^= ((/* implicit */int) arr_10 [i_2]);
    }
    var_28 -= ((/* implicit */unsigned short) (unsigned char)0);
}
