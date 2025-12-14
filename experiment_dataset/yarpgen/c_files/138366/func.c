/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138366
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
    var_13 = (-(288230376151711743ULL));
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) var_6))))), (((((/* implicit */_Bool) var_11)) ? (2934342826804952443ULL) : (2934342826804952443ULL))))) <= (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 1619088302U)) : (var_1))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) arr_1 [i_0] [15ULL])) & (2934342826804952432ULL)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(14241265246635678741ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-1664665686386058176LL) : (var_3)))) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) var_1)))) : (max((((/* implicit */unsigned long long int) ((4253615525284364869ULL) > (18446744073709551611ULL)))), (min((arr_0 [i_0] [i_0]), (8828889493117840526ULL)))))));
    }
}
