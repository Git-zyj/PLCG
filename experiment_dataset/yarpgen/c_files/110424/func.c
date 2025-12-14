/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110424
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
    var_20 = ((/* implicit */int) 9802669490288781611ULL);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((min(((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0])))))), (max((((/* implicit */unsigned long long int) (!((_Bool)0)))), (max((10534533414483390778ULL), (((/* implicit */unsigned long long int) -2039423169))))))))));
        var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_14))))))));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-(8644074583420770011ULL))))) ? (((/* implicit */long long int) var_11)) : (((((((/* implicit */_Bool) -998941208)) || (((/* implicit */_Bool) 2039423168)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_3)))));
}
