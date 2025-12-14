/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114893
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
    var_10 = ((/* implicit */unsigned int) (unsigned char)144);
    var_11 ^= min((min((max((((/* implicit */unsigned long long int) var_2)), (6460604804598121269ULL))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) min((var_4), (var_0)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0 + 1]);
        arr_3 [(_Bool)1] = ((/* implicit */signed char) min((min((-1808003253646912008LL), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)247))))))), (min((((/* implicit */long long int) 1892665424U)), (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))))));
        var_12 = ((/* implicit */unsigned long long int) (-((~(min((arr_1 [i_0]), (1808003253646912023LL)))))));
    }
    for (signed char i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (unsigned short)65355);
        arr_8 [i_1 - 2] [i_1] = ((/* implicit */signed char) (+((+(min((4294967295U), (((/* implicit */unsigned int) var_9))))))));
    }
    for (signed char i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */short) var_7);
        arr_12 [i_2] = ((/* implicit */signed char) arr_9 [i_2] [i_2]);
        var_14 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) max((arr_4 [i_2] [8U]), (arr_4 [i_2] [(_Bool)1])))), (min((((/* implicit */unsigned long long int) (unsigned short)181)), (9ULL))))), (max((max((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))))));
        arr_13 [i_2] = ((/* implicit */long long int) var_9);
    }
    var_15 = ((/* implicit */int) var_7);
    var_16 = ((/* implicit */unsigned char) 2143548187);
}
