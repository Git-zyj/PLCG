/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105872
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
    var_12 &= ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) var_6)) < (var_5)))), (var_1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (((((-(((/* implicit */int) (short)30839)))) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) var_10)))) - (41882))))))));
                var_14 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0 - 1]))))));
                arr_5 [i_0] = ((/* implicit */short) 2047);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((8247511411824218592LL), (8247511411824218587LL)));
}
