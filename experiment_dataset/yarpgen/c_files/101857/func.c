/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101857
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_16), (((signed char) var_2))))) > (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))));
    var_20 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 ^= ((_Bool) max((3285525904321033877ULL), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) var_5)) + (((/* implicit */int) var_11)))))) | (((/* implicit */int) (_Bool)0)))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) arr_4 [i_2] [i_2]);
                    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */signed char) var_7))))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
                }
            } 
        } 
    } 
}
