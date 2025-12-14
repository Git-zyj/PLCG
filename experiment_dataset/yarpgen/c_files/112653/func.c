/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112653
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = (_Bool)1;
                arr_8 [i_1] [i_0] [0U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) min((var_5), ((unsigned char)34))))))) ? (((((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_0])))) * (((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) arr_1 [i_1]))));
                var_11 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned int) (_Bool)1);
}
