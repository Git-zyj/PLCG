/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104078
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((~(arr_0 [i_0] [i_0]))) > (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) * (arr_1 [i_0] [i_0]))) >> (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)177))))))));
        var_16 = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0] [i_0]));
    }
    var_17 = min((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (var_9))))) : (((1198501430U) + (0U))))), (min((min((var_14), (var_13))), ((+(3060392967U))))));
    var_18 = var_1;
}
