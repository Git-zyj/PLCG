/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123932
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_13);
        var_15 = ((/* implicit */short) ((signed char) ((signed char) -5256040217719410841LL)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)3072)));
        var_17 -= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1]))) : (9LL))), (min((-6534143048383775440LL), (((/* implicit */long long int) (_Bool)1))))))) && (arr_1 [i_1]));
        var_18 = ((/* implicit */unsigned long long int) (+(max((((long long int) (signed char)1)), (((/* implicit */long long int) arr_1 [i_1]))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((((((/* implicit */int) var_10)) * (((/* implicit */int) ((((/* implicit */_Bool) 9LL)) || (((/* implicit */_Bool) (signed char)-91))))))), (((/* implicit */int) arr_3 [i_2] [i_2]))));
        var_20 *= ((/* implicit */unsigned int) ((-3174209319037002144LL) == (((/* implicit */long long int) (+(max((((/* implicit */int) (signed char)-91)), (1993319819))))))));
    }
    var_21 *= ((/* implicit */unsigned int) min(((~(min((((/* implicit */long long int) var_2)), (var_6))))), (var_6)));
}
