/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107231
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) arr_2 [i_1]);
                arr_5 [i_0] = min((((arr_3 [i_0] [5LL]) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)6])) : (((/* implicit */int) arr_3 [i_0] [i_1])))), ((-(((/* implicit */int) arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (unsigned char)252))));
    var_20 = ((/* implicit */signed char) ((((_Bool) min((var_6), (((/* implicit */unsigned long long int) var_3))))) ? (-2147483647) : (((/* implicit */int) var_4))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_3))));
}
