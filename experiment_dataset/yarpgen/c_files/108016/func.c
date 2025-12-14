/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108016
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
    var_12 ^= ((/* implicit */signed char) min((77815190), ((-2147483647 - 1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_0 [i_0 + 2] [i_0 + 3]))))));
                var_13 -= ((/* implicit */_Bool) min((535045105), ((+(((/* implicit */int) var_6))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0 - 1] [(short)11])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) > (min((1169921703), (((/* implicit */int) var_1)))))))));
}
