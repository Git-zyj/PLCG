/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156374
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0 + 2] [i_0])))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)15] [(signed char)15])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_6)))) : (arr_0 [i_0 + 4])));
    }
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) var_0);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_1 [i_1 + 2] [i_1 + 3]))))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_23 += arr_4 [i_2];
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -359183162)) - (((((/* implicit */_Bool) -6679776189094035623LL)) ? (6679776189094035622LL) : (((/* implicit */long long int) 799308670))))))) ? (((long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_7 [i_2] [i_2]))))) : (((((/* implicit */_Bool) (+(799308660)))) ? (((long long int) arr_0 [(signed char)21])) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [(short)15] [i_2])) + (arr_0 [i_2]))))))));
    }
    var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) ((var_16) >= (var_2)))) > (((/* implicit */int) var_5)))));
    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) var_19))));
    var_27 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_15))))), ((~(var_13))))));
}
