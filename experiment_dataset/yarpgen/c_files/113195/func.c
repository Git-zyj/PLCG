/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113195
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))) != (min(((~(var_7))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) >= ((~(((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */long long int) -1)) : (var_8)))))));
                    arr_7 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((-18LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 3]))))))));
                    arr_8 [i_2] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
}
