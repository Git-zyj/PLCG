/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127469
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
    var_15 = max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (7148787165439316519ULL)))) ? (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))) : (var_1))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 98938261)) || (((/* implicit */_Bool) 11297956908270235116ULL))))))));
    var_16 = ((/* implicit */short) (~(((/* implicit */int) (signed char)84))));
    var_17 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((int) var_2)))))));
    var_18 = var_6;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) || (((/* implicit */_Bool) var_8)))))) ^ (((((/* implicit */_Bool) 98938261)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1152921496016912384LL))))));
                    var_20 = ((/* implicit */unsigned int) (+(min((arr_5 [(signed char)7] [i_0] [i_0]), (arr_5 [i_1 + 1] [i_0] [i_0])))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0])), (arr_2 [i_0])))) ? (((/* implicit */int) min((var_11), (var_11)))) : ((~(((/* implicit */int) var_10)))))));
                }
            } 
        } 
    } 
}
