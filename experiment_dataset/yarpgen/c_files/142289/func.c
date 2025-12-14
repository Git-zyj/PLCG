/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142289
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) -4592654378679298152LL)))))));
    var_15 = ((/* implicit */unsigned long long int) var_13);
    var_16 += (+(var_2));
    var_17 = ((/* implicit */unsigned short) ((unsigned int) 4592654378679298166LL));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */_Bool) max((((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned long long int) max((3018268428U), (((/* implicit */unsigned int) (_Bool)1))))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [6LL]))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -4592654378679298163LL)) ? (((/* implicit */unsigned long long int) 4592654378679298151LL)) : (((unsigned long long int) -4592654378679298151LL))));
        var_21 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (-7880232713770368881LL)));
        var_23 = ((((/* implicit */_Bool) (signed char)-57)) ? (arr_7 [i_1 - 1]) : (((/* implicit */long long int) arr_4 [i_1 + 1])));
    }
}
