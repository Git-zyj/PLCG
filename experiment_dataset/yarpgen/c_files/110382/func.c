/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110382
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [(unsigned char)0] [i_2 + 1] = ((/* implicit */int) ((((((/* implicit */int) arr_2 [i_2 + 1])) != (((/* implicit */int) arr_2 [i_2 + 1])))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_2 - 1]), (arr_2 [i_2 - 1])))))));
                    arr_11 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 - 1])))))) : (arr_5 [i_0 - 3])));
                }
            } 
        } 
    } 
    var_11 = var_0;
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (var_5))))));
    var_13 = ((/* implicit */unsigned char) var_7);
}
