/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128318
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
    var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_3))) && (((/* implicit */_Bool) var_7))));
    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 67076096)) ? (((/* implicit */long long int) 0)) : (-575285951355701015LL)))))))));
    var_15 = ((/* implicit */signed char) ((max((var_3), (((/* implicit */unsigned int) ((-1) + (((/* implicit */int) var_4))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 *= 0;
                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4110025756U))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_0])))) : (((arr_3 [i_0]) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))));
            }
        } 
    } 
}
