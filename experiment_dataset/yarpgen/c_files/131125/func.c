/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131125
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
    var_19 = ((/* implicit */unsigned int) -481153404);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 481153401)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (var_15))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min(((+(max((var_6), (var_11))))), (((/* implicit */unsigned long long int) var_10)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        var_22 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_23 = (+(max((((/* implicit */unsigned long long int) ((13465146657156703929ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), ((+(var_11))))));
    }
}
