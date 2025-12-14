/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179226
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) || (((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (min((arr_1 [15] [i_0]), (((/* implicit */unsigned long long int) 9223372036854775802LL)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) -9223372036854775804LL);
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 3901025326U)) > (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [0ULL])))))) : (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_18 = ((/* implicit */long long int) ((short) arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_19 = ((((/* implicit */_Bool) max((-3331949234279152808LL), (max((-3331949234279152808LL), ((-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [5] [5]))) & ((~(arr_3 [i_1] [i_1]))))) : (((/* implicit */long long int) arr_6 [i_1])));
        arr_7 [i_1] = ((/* implicit */short) 9223372036854775807LL);
        var_20 = ((/* implicit */unsigned long long int) var_7);
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_13)) ^ (var_11)));
        arr_12 [i_2] = ((/* implicit */unsigned char) (short)1023);
        var_22 = ((/* implicit */long long int) ((((((/* implicit */long long int) var_5)) >= (arr_11 [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 1]))) : (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-1982)))))));
    }
    var_23 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_3)) - (((((/* implicit */_Bool) 645260616120949268LL)) ? (((/* implicit */unsigned long long int) 393941966U)) : (var_10))))) != (((((/* implicit */_Bool) var_0)) ? (var_6) : (max((((/* implicit */unsigned long long int) (short)-32764)), (var_6)))))));
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_2))));
}
