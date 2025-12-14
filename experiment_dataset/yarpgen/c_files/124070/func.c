/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124070
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 486324797)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [14LL])) : (((/* implicit */int) arr_3 [i_0])))))))) : (max((((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (short)-18030)))), (((/* implicit */int) (unsigned char)255))))));
        var_13 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (((+(var_1))) < (((((arr_0 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) var_11)))))) : (((long long int) 127U))))));
        var_14 = ((((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_1 [i_1] [i_1])))) && (((/* implicit */_Bool) var_0)))) ? (arr_5 [i_1]) : (((((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))) + (arr_5 [i_1]))));
    }
    var_15 -= ((/* implicit */unsigned long long int) (+((+(var_2)))));
}
