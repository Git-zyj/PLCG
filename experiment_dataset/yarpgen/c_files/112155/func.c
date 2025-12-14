/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112155
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
    var_20 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_4 [(unsigned char)9] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [8LL]))))), ((-(arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) var_15);
        arr_10 [i_1] [(unsigned short)15] &= ((/* implicit */unsigned long long int) (~(var_2)));
    }
    var_22 = ((/* implicit */unsigned long long int) var_14);
    var_23 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned long long int) (unsigned char)255))));
    var_24 = ((/* implicit */unsigned short) max((3000187113U), (max((((/* implicit */unsigned int) var_18)), (max((((/* implicit */unsigned int) (unsigned char)255)), (0U)))))));
}
