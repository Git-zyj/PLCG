/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185175
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((unsigned char) ((signed char) ((((/* implicit */int) arr_7 [i_0])) <= (arr_5 [2LL] [i_0] [2LL]))));
                var_18 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_3 [i_1]), (arr_1 [i_1] [i_0])))), (max((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])), (max((((/* implicit */int) arr_7 [i_0])), (arr_5 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1588641100)) ? (-1588641084) : (((/* implicit */int) (unsigned char)208))));
    var_21 |= ((/* implicit */unsigned long long int) ((signed char) ((((var_15) % (((/* implicit */unsigned long long int) 1246808911)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8281))))));
}
