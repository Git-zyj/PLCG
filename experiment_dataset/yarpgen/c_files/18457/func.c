/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18457
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
    var_14 += ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0 + 2] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (830498638U))) >> (((8348028478221082099LL) - (8348028478221082069LL)))));
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned char)106)))))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) var_8))))) : (25ULL)));
            }
        } 
    } 
}
