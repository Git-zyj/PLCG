/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134790
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned char)230))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_0 [i_0]) <= (arr_0 [i_0])))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_4 [i_0] = ((((/* implicit */_Bool) min(((unsigned char)234), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)234)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned char)176))))))));
    }
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((signed char) (unsigned char)238)))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)12)) ? (6191170143020056820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))));
}
