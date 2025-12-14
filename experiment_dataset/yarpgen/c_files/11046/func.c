/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11046
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned short)64813))));
    var_21 = ((/* implicit */unsigned long long int) max(((unsigned short)1022), ((unsigned short)6714)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) (-(arr_3 [i_0])));
                arr_4 [i_0] = (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)7))))));
                arr_5 [(signed char)3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((min((1754920901U), (((/* implicit */unsigned int) var_19)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1] [12U])))))) / (min((min((var_11), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) min((-5120982988948228200LL), (((/* implicit */long long int) var_12)))))))));
            }
        } 
    } 
}
