/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123008
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
    var_11 = ((/* implicit */long long int) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_2)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_10)))))) : (max((((/* implicit */unsigned long long int) var_1)), (var_5))))) : (((/* implicit */unsigned long long int) var_0))));
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_5))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) var_5);
                    var_14 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (arr_5 [i_0 - 4] [i_2 - 1] [i_2 + 1]))))));
                    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) (unsigned char)240)) ^ (((/* implicit */int) ((min((arr_2 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_8)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))))))))));
                }
            } 
        } 
    } 
}
