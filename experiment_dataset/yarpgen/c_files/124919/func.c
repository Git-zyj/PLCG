/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124919
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
    var_15 &= (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_14))))) > (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_10))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)104)))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((_Bool) var_1))) & (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))))));
    }
}
