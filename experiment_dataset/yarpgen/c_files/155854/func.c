/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155854
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
    var_19 = ((/* implicit */unsigned int) ((_Bool) ((int) 347039814U)));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0 + 1] [5] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)40438))));
                    var_20 = ((/* implicit */int) max((((arr_0 [i_0 + 3] [i_1 - 3]) << (((/* implicit */int) arr_1 [i_1 - 4] [i_0 + 1])))), (((((/* implicit */_Bool) (unsigned short)52559)) ? (arr_0 [i_0 + 1] [i_1 - 1]) : (8614956798859645470ULL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (347039826U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10))))));
}
