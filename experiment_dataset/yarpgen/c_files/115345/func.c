/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115345
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((unsigned short) (~(var_9)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned long long int) max((-6785316427415972568LL), (((/* implicit */long long int) arr_2 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) var_8);
        arr_10 [i_1] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) && (arr_2 [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [14U])) || (((/* implicit */_Bool) (short)3216))))) : (((/* implicit */int) arr_7 [i_1] [(short)13]))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) ((signed char) var_2));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((int) (~(var_10))));
    }
}
