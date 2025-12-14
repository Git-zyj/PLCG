/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14796
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    var_13 -= ((/* implicit */signed char) var_0);
    var_14 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-23965)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)1)))))))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (_Bool)0))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) * (70368744177663ULL)));
        arr_4 [i_1] = ((/* implicit */_Bool) (+(18446744073709551615ULL)));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1])))))))));
        var_19 = ((/* implicit */short) arr_3 [i_1] [i_1]);
    }
    var_20 |= ((/* implicit */_Bool) (-(var_8)));
}
