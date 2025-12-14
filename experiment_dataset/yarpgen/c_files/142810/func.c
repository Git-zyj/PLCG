/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142810
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
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)5)), (1519472565)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = (~(-1519472566));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) max((8771060122679153718LL), (((/* implicit */long long int) var_16))))) || (((/* implicit */_Bool) max((-8771060122679153718LL), (((/* implicit */long long int) var_3)))))))), (((int) var_4))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)166), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)82)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_21 = var_10;
        var_22 = min(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))));
    }
}
