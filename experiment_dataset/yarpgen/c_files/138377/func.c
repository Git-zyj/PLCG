/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138377
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
    var_14 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */int) (signed char)-61)) > (((/* implicit */int) (signed char)-35))))) ? (((((((/* implicit */_Bool) 6441083328499431444LL)) ? (17159811527735165658ULL) : (((/* implicit */unsigned long long int) var_13)))) / (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (var_4) : (((/* implicit */unsigned long long int) var_9))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((arr_0 [i_0 - 1]), (((/* implicit */int) var_12)))));
        arr_3 [i_0] = ((/* implicit */short) var_4);
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) - (((((/* implicit */_Bool) 6441083328499431444LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16256))) : (var_4))))));
        arr_8 [23ULL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1405952194)) ? (((/* implicit */int) (short)4369)) : (((/* implicit */int) (signed char)62))))), (max((arr_5 [i_1 - 2] [i_1 - 2]), (arr_4 [i_1 - 2] [i_1 - 2])))));
    }
}
