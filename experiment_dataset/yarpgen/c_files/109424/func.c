/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109424
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (signed char)-19))));
                    arr_8 [i_0] [4LL] [6LL] = (-(3805832807U));
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) 602501916)) : (var_17)))) ? (max((var_0), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) max((5529688020097206664LL), (((/* implicit */long long int) (short)27992)))))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 2])))));
                    var_21 = ((((/* implicit */_Bool) ((1769432191U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))) && (((/* implicit */_Bool) var_13)));
                }
            } 
        } 
    } 
    var_22 *= ((_Bool) var_2);
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_3)) % (((((/* implicit */_Bool) 1331580714405924936LL)) ? (((/* implicit */int) (short)-14378)) : (((/* implicit */int) (signed char)92)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-14378)) : (((/* implicit */int) var_7))))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) / (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((1355206475U) - (((/* implicit */unsigned int) -247600919))))) : (((((/* implicit */_Bool) (short)14378)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))))));
    var_25 = ((/* implicit */int) (short)-20227);
}
