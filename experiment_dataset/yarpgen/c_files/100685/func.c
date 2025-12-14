/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100685
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (25))) - (17)))))) * (0ULL)));
        var_14 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [(short)4]) > (arr_0 [i_0]))))) < ((-(arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (short)24890);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) 3685491178U);
        arr_5 [i_0] = -1932651159;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 549755813887LL))));
        var_16 -= ((/* implicit */short) (-(-549755813888LL)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) 154714330279634321ULL);
        var_18 = ((/* implicit */short) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (609476117U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-49)))))));
        var_19 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (arr_1 [14])))));
        var_20 -= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)25356)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_2])))) : (var_8)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_2]);
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (18446744073709551612ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (var_12))))))));
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4580117000187333720LL)), (18292029743429917297ULL)))) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
