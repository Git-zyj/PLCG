/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132440
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
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) arr_3 [i_1]);
                    arr_9 [i_0] [i_0] [i_1 - 1] [i_2 - 1] = arr_5 [i_0] [i_0] [i_0];
                    arr_10 [i_0] [i_0] [i_0] = (+(50331648));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_9))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */short) max((var_11), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-60)) || (var_3)))) : (((/* implicit */int) var_0)))))));
}
