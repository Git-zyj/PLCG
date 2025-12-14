/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177903
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
    var_11 = ((/* implicit */unsigned int) min((min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))), (min((2147483647), (-482741015)))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_5))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) | (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))))));
        var_14 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [11])))), (((((/* implicit */_Bool) 800361375)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)51))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_15 -= ((/* implicit */int) arr_1 [i_1] [i_1]);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [10ULL])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
    }
    var_17 = min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)219))))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) (~(1ULL))))));
}
