/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1585
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
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-109))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) 3540915488833707091ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) & (13744561969286432119ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                    var_17 = ((/* implicit */unsigned char) ((signed char) (signed char)-109));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_5), (((/* implicit */signed char) var_6))))), (max((16646144U), (((/* implicit */unsigned int) var_3)))))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((var_6) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)102))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((8611166026090796158ULL), (5581542934075271153ULL)))))))));
}
