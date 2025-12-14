/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133666
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)16)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((_Bool) (-(arr_2 [i_0] [i_0])))) ? (min((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((int) (!((_Bool)0)))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_11))))))) - (max((((unsigned long long int) arr_3 [i_0] [i_0] [i_1])), (((/* implicit */unsigned long long int) (-(arr_2 [i_1] [i_0]))))))));
            }
        } 
    } 
}
