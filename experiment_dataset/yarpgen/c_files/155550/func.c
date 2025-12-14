/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155550
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? (arr_0 [i_0 + 1]) : (((((/* implicit */int) (unsigned short)22308)) + (arr_0 [i_0 - 1])))));
        var_13 = (~(var_0));
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -930093329)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (var_7)))), (540827370089011502ULL)));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (((int) var_4))))) ? (((int) arr_0 [i_0 + 1])) : (min(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_2))))));
        arr_3 [0U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((11010027439338694743ULL) >> (((11893789425602087240ULL) - (11893789425602087187ULL))))))));
    }
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((17702483035863381466ULL), (((/* implicit */unsigned long long int) var_1)))))));
}
