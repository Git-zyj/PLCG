/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142226
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
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [(unsigned char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)1149)) : (((/* implicit */int) (_Bool)1)))))))));
        var_20 = ((/* implicit */unsigned short) (((~(arr_0 [i_0] [i_0]))) ^ (max((((/* implicit */long long int) var_9)), (arr_0 [i_0] [i_0])))));
        var_21 ^= ((/* implicit */short) ((((((/* implicit */_Bool) max((var_18), (((/* implicit */signed char) arr_1 [0U] [0U]))))) ? (((long long int) arr_1 [20LL] [i_0])) : (((/* implicit */long long int) (~(((/* implicit */int) var_13))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) != (((/* implicit */int) arr_1 [(unsigned char)20] [i_0]))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0] [9LL]))))))) ? (max((((/* implicit */long long int) ((_Bool) -4611686018427387904LL))), (max((-3LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0] [i_0])), ((~(var_8))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_4 [(short)8])))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -5800088002086286069LL)) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) : (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) arr_4 [i_1]))));
    }
}
