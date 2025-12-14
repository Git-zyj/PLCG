/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1494
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
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (var_14))) : (var_14)))) ? ((~(((((/* implicit */_Bool) 16433691919114758393ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)0)))))) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)35371))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (+(7929615566441525818ULL)));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1]);
                arr_5 [i_0] [1ULL] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_3 [i_0 - 1])))) ? (((arr_0 [i_0 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_2 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)27428))))) % (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)47)), (arr_3 [i_1])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_14);
    var_20 &= ((/* implicit */_Bool) (signed char)0);
}
