/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155694
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
    var_11 = ((/* implicit */unsigned int) (~(var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)41664)) == (((/* implicit */int) (unsigned char)223))));
                var_13 = ((/* implicit */unsigned int) min((((var_6) << (((arr_1 [i_0] [i_0]) / (arr_4 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (arr_3 [i_0] [i_0 + 4]))))));
                var_14 = ((/* implicit */int) ((((((/* implicit */long long int) var_7)) & (arr_3 [i_0] [i_0]))) & (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
