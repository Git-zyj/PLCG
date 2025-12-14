/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111679
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (13)))) * (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 13))))))) || (((/* implicit */_Bool) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_4 [4ULL] = ((/* implicit */long long int) ((unsigned char) var_8));
        arr_5 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)89))));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1 - 2])) | (((((/* implicit */_Bool) 26)) ? (-14) : (((/* implicit */int) (_Bool)1))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((-1) * (((/* implicit */int) arr_3 [i_1]))))))) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((((/* implicit */_Bool) ((2ULL) / (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) ((unsigned char) -1593094650)))))));
        arr_10 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_1]))));
        arr_11 [i_1] = ((/* implicit */unsigned char) (-((~(max((((/* implicit */unsigned int) var_8)), (arr_0 [i_1])))))));
    }
}
