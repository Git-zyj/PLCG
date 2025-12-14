/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148373
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(-4LL))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_20 = ((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)240)))), (((arr_0 [i_0]) | (arr_0 [i_0])))))));
        var_21 = ((/* implicit */unsigned short) var_8);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_14)), (-4LL))) + (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))) && (((/* implicit */_Bool) var_5))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) var_0))))) & (-6LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (64))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) var_18)) : (((/* implicit */unsigned int) ((/* implicit */int) ((-1223812735976157416LL) > (((/* implicit */long long int) (-(var_9))))))))));
    }
}
