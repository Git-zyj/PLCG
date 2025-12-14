/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145185
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((var_7) > (-176007307))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))) : (min((-1938329871), (-1938329871))))))));
    var_16 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 4])) < (((/* implicit */int) arr_2 [i_0 + 2])))))) : ((~(max((((/* implicit */unsigned int) var_12)), (var_5)))))));
                arr_5 [i_1 + 1] = ((/* implicit */unsigned short) 1938329870);
                var_18 = ((/* implicit */_Bool) (~(var_10)));
                arr_6 [i_1 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)32)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_13)))) ? (((var_11) + (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) max((1938329870), (((/* implicit */int) (short)3440)))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1938329871)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))), ((-(var_0))))) : (var_0)));
    var_20 = ((/* implicit */short) var_14);
}
