/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1607
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
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (signed char)-112)), (var_5))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((((/* implicit */_Bool) (unsigned short)60470)) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))) * (((/* implicit */unsigned long long int) ((unsigned int) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((393852846), (((/* implicit */int) var_8))))) ? ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */signed char) ((var_16) ? ((-(min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) var_12)) : (var_7))) < (var_0)))))));
    var_19 = ((/* implicit */signed char) var_15);
    var_20 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) arr_5 [i_2])))))) == (min((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_2]))))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_7 [i_1] [i_0]), (arr_7 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
