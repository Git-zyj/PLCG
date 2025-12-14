/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153330
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
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min(((+(((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */int) var_5))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1])), (arr_3 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 3]))) ^ (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_11) >= (((/* implicit */int) var_5)))))))) : (max((var_0), (((/* implicit */unsigned long long int) var_6))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_6))));
    var_14 &= ((/* implicit */int) var_3);
}
