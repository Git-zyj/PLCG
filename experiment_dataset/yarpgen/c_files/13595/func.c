/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13595
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((-1982098950), ((-(((/* implicit */int) (signed char)122))))))) ? (((/* implicit */unsigned int) -1253493557)) : (max((((/* implicit */unsigned int) ((var_9) / (((/* implicit */int) var_7))))), (var_8)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned char)10] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) >= (((/* implicit */int) min((var_11), (((/* implicit */short) var_4)))))))), (min((((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (signed char)112)) - (112))))), (max((var_6), (var_6)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */signed char) var_12)), (arr_3 [i_0])))))) : (((((((/* implicit */int) (signed char)-113)) + (2147483647))) << (((((/* implicit */int) var_13)) - (49)))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_3 [(unsigned char)6]))));
            }
        } 
    } 
}
