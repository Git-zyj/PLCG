/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161053
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_15))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) 491669898U)) ? (22ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) arr_2 [i_1])))))))));
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_1])), ((unsigned char)180))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (-1709711419139720404LL))))));
            }
        } 
    } 
}
