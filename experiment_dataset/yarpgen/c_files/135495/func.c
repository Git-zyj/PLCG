/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135495
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
    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_14))))));
    var_21 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? ((+(((/* implicit */int) ((unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)11))) || (((/* implicit */_Bool) var_15)))))));
    var_22 = ((/* implicit */unsigned char) var_7);
    var_23 -= ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_24 = (~(((/* implicit */int) var_19)));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8834170345044500130ULL)) || (((/* implicit */_Bool) (unsigned char)16)))))));
                }
            } 
        } 
    } 
}
