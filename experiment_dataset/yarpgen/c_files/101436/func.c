/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101436
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
    var_14 ^= ((min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (min((var_2), (var_10))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8751)) ? (1170380104) : (((/* implicit */int) (signed char)-1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_5)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_13)))))) ? ((+((-(var_2))))) : (((29741057U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2321230252U)))))))))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) (!(max((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) var_12))))))));
                        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) == (var_10))))) : ((~(var_13))))) : (((/* implicit */unsigned int) var_4))));
                    }
                }
            } 
        } 
    } 
}
