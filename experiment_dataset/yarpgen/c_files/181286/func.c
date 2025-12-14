/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181286
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))))) ? (7936LL) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0] [(short)8])), (arr_0 [i_0])))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [18]))))));
                var_16 += ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */short) 2842404252U);
    var_18 = ((/* implicit */short) (-(var_9)));
    var_19 = ((/* implicit */long long int) max((var_19), ((((((((_Bool)1) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) >> (((((/* implicit */int) max((var_2), ((unsigned char)44)))) - (182))))) & (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (_Bool)1)), (var_12))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2))))))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611686018393833472LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1667978025U)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (((!((_Bool)1))) && (((/* implicit */_Bool) var_10)))))));
}
