/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112636
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((unsigned int) arr_0 [i_0]))))), (((max((3195148160388006775ULL), (((/* implicit */unsigned long long int) (unsigned short)14281)))) / (((/* implicit */unsigned long long int) max((var_0), (var_0))))))));
        var_17 = ((/* implicit */unsigned char) ((-1121653140) / (((((/* implicit */_Bool) 1121653131)) ? (-1121653158) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [i_1] = var_13;
        arr_6 [i_1] = 1121653121;
        var_18 = ((/* implicit */int) ((3685825421U) % (((/* implicit */unsigned int) -1121653122))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned char)181))))), (arr_0 [i_1]))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (min((((/* implicit */unsigned int) (unsigned char)255)), (3563724303U)))));
}
