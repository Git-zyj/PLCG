/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163918
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1231018051) : (-1231018040))))));
    var_11 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (-1231018066))))))));
    var_12 = ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? ((~(arr_3 [i_0] [6U]))) : ((~(var_8))))))));
                var_14 = ((/* implicit */int) ((unsigned int) max((((((/* implicit */_Bool) -1231018040)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
}
