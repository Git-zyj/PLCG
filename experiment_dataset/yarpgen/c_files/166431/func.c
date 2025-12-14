/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166431
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
    var_16 |= ((/* implicit */unsigned int) var_13);
    var_17 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)22111))))))))));
        arr_2 [i_0] = min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) * ((-(((/* implicit */int) (unsigned short)22111))))))), (((unsigned long long int) ((6057150367016377000LL) / (-8825015324807700315LL)))));
        var_19 = min((min((arr_1 [i_0]), (18400540377496721900ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1330729836769699370LL))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_11))) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_1))))));
    }
}
