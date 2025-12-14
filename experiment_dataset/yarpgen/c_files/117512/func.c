/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117512
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((((2210800912U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))));
                arr_4 [(short)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2498617648133852954LL)) || (((/* implicit */_Bool) 23ULL))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) var_19)), (max((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_10))), (((/* implicit */long long int) (_Bool)0))))));
    var_22 = ((/* implicit */_Bool) -479284609064971938LL);
    var_23 = ((/* implicit */unsigned short) 536862720);
}
