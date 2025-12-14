/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110879
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_9))));
    var_11 |= ((/* implicit */unsigned long long int) var_1);
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-122)), (var_4)));
    var_13 = min((((/* implicit */long long int) var_7)), (((var_8) + (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)29), (((/* implicit */unsigned char) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */long long int) arr_0 [i_1]);
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_0))))), (min((((/* implicit */long long int) var_7)), (arr_4 [i_0] [i_0] [i_1])))))) ? (((/* implicit */int) max((((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_1 [i_0])))), (var_0)))) : ((+((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                var_17 += ((/* implicit */int) (short)32738);
            }
        } 
    } 
}
