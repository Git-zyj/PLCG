/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156562
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
    var_14 = ((/* implicit */unsigned int) ((unsigned char) (!(((7431899141091060127ULL) != (((/* implicit */unsigned long long int) var_8)))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) -3163000184525749975LL)) || (((/* implicit */_Bool) 4948902054282400361LL))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 3053482933873990513LL))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (1738900881U))))) >> (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
}
