/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123307
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (((+(var_11))) != (var_11))))));
                    var_17 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0])))));
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [12U])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (23U)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_1);
}
