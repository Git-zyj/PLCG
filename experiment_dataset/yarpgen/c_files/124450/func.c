/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124450
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
    var_16 &= ((/* implicit */_Bool) var_14);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((signed char)10), (((/* implicit */signed char) arr_0 [(_Bool)1] [i_0]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL))) : (min((1ULL), (((/* implicit */unsigned long long int) 961225956))))))));
        arr_3 [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [1U]))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)8] [i_0]))))))), (max(((-(18446744073709551601ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7861274695914190614ULL)) ? (2369160168U) : (var_5))))))));
        arr_4 [i_0] = max((((arr_0 [i_0] [i_0]) ? (var_4) : (((/* implicit */int) (short)(-32767 - 1))))), ((((!(((/* implicit */_Bool) arr_1 [(short)12])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min(((_Bool)1), (arr_0 [i_0] [i_0])))))));
        arr_5 [(_Bool)0] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + (18446744073709551615ULL)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) arr_6 [i_1])))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (18446744073709551599ULL)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_6 [i_1])) / (18446744073709551615ULL)));
        var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))) ? (16ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7861274695914190614ULL)) ? (((/* implicit */unsigned int) arr_8 [i_1] [i_1])) : (arr_7 [i_1] [i_1]))))));
    }
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) 960U))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-25760))))))) || (((((/* implicit */_Bool) var_4)) || ((!(((/* implicit */_Bool) var_11))))))));
}
