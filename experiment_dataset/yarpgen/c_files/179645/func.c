/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179645
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)85)) & (((/* implicit */int) (unsigned char)255))));
    var_16 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((unsigned char) ((((var_5) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)43553)) : (((/* implicit */int) var_7))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned short) (unsigned char)147))) : ((((+(-613381590))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_0] [i_0]))))))));
            }
        } 
    } 
}
