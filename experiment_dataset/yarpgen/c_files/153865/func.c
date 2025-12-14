/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153865
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_14) >= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((9223372036854775791LL) - (9223372036854775763LL))))))))))))));
    var_18 = ((/* implicit */unsigned short) var_13);
    var_19 = ((((/* implicit */int) var_9)) / (((/* implicit */int) var_3)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] = -4626541823031178970LL;
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (((var_5) >> (((11057480186959707533ULL) - (11057480186959707505ULL))))))))))));
                var_21 *= ((/* implicit */short) max((((((/* implicit */int) arr_1 [i_0] [i_1])) & (((/* implicit */int) arr_1 [i_1] [i_0])))), (((/* implicit */int) max((arr_1 [i_0] [i_1]), ((unsigned short)58901))))));
                var_22 += ((/* implicit */unsigned short) ((signed char) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))));
            }
        } 
    } 
}
