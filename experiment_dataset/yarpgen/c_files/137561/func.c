/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137561
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
    var_10 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) (-((+(arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) (-((~(arr_2 [i_0])))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned int) arr_4 [i_1 - 1])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (1472140303U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((8981119394142357565ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))), (min((((/* implicit */long long int) arr_2 [i_1])), (arr_5 [i_1] [i_1 + 1])))))) ? (arr_4 [(unsigned short)14]) : (((/* implicit */int) var_6))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) 530831761))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((long long int) arr_1 [i_1])) - (((/* implicit */long long int) (+(960079092U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2822826989U)))))) / ((~(var_4)))))) : (max((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [6U])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (8981119394142357577ULL) : (10ULL)))))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (1329648880)))) ? (((((/* implicit */int) (unsigned short)255)) ^ (((/* implicit */int) (short)-24502)))) : (((/* implicit */int) ((short) 1472140306U)))))) ? (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_0)), (0U))), (((/* implicit */unsigned int) var_1))))) : (((long long int) var_1))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)60))) : (1125899890065408LL)));
}
