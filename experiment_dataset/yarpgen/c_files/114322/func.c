/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114322
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
    var_10 = ((((/* implicit */_Bool) max((((4294967282U) + (1175508767U))), (((unsigned int) 16777215U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8)))))))) : (((((var_8) <= (var_0))) ? ((~(843140431U))) : (var_7))));
    var_11 = ((/* implicit */unsigned int) max((var_11), ((-(((unsigned int) min((371514874U), (var_8))))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (var_9)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = (-((~(var_9))));
        arr_5 [i_0] = min((max((((((/* implicit */_Bool) arr_1 [i_0] [7U])) ? (arr_2 [i_0]) : (arr_0 [i_0 - 2]))), (var_8))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (var_2) : (min((600216490U), (var_0))))));
        var_13 = var_2;
    }
}
