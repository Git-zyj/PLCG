/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182254
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((signed char) (~((~(((/* implicit */int) (signed char)-16)))))));
                    var_11 = ((/* implicit */unsigned int) ((var_9) + (7821411680433217313LL)));
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (min((var_5), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_7 [i_0] [i_1]) : (((/* implicit */unsigned int) var_1))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) var_3))))))))));
}
