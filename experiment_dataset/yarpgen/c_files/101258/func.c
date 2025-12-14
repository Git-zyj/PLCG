/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101258
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
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) (!((!(arr_2 [i_0 + 3])))));
        var_17 = ((/* implicit */unsigned int) (!(arr_2 [i_0 - 1])));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (arr_2 [(unsigned short)15])))))))) ? (((/* implicit */unsigned long long int) ((((long long int) (_Bool)1)) - (((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (arr_1 [i_0 - 1])))))))) : (arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)9950)))) - (((/* implicit */int) arr_2 [i_1 + 2]))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-25932)) + (25951))))) <= (arr_4 [i_1 + 3] [i_1 + 3]))))));
        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned char)157))));
    }
}
