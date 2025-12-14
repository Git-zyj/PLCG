/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149862
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 3184517506146699726LL))))), (var_5)))), (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_1 + 1] [i_1]))))));
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1]) < (arr_3 [i_1] [i_1])))), (((((((/* implicit */_Bool) (unsigned short)2047)) ? (1672010367276262122ULL) : (16774733706433289498ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-12570)) && (((/* implicit */_Bool) var_9))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */int) var_8);
    var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
    var_18 = ((/* implicit */int) var_4);
}
