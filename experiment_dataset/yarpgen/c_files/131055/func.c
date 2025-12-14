/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131055
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
    var_17 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 ^= var_13;
        arr_3 [i_0 + 2] [i_0 + 2] &= ((/* implicit */_Bool) ((int) arr_1 [i_0]));
    }
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((int) var_15)) | (((/* implicit */int) (unsigned short)17200))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)36608), ((unsigned short)36608))))) : (max((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26014)) ? (1491238614) : (((/* implicit */int) (short)-26014)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (~(var_11))));
    }
}
