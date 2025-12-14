/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130081
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
    var_19 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) && (arr_0 [i_0] [i_0]))) ? ((-(((/* implicit */int) (_Bool)1)))) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] &= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) -1566313242)) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)1)))) : (arr_1 [i_0] [12ULL]))) : (((/* implicit */int) (signed char)-118))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((-7143880733684330827LL) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_10))))))));
        arr_5 [i_0] |= ((/* implicit */_Bool) var_12);
    }
    var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) var_18)), (1746912044100054791LL)));
    var_21 = var_12;
}
