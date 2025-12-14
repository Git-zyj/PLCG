/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133426
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2120387553392700892LL) << (((arr_0 [i_0]) - (4038510442U)))))) ? (14618867529911568653ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)53)) << (((((/* implicit */int) (signed char)41)) - (40)))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -1805823227156339675LL)) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) -7445622182468196250LL);
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_4 [i_1] [i_1]))));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min(((unsigned short)60976), (((/* implicit */unsigned short) (signed char)-60)))))));
    var_23 = ((/* implicit */long long int) var_0);
}
