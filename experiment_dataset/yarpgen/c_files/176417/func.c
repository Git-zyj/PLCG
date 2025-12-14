/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176417
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
    var_18 |= ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(var_5)))));
                    var_19 &= ((/* implicit */int) min((min((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_1])), (var_0)))), (((((/* implicit */_Bool) arr_4 [i_2] [2] [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_4 [i_0] [(signed char)2] [(signed char)2]))))), (((/* implicit */long long int) var_8))));
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */signed char) arr_0 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((var_1), (((/* implicit */unsigned long long int) var_15)))) == (((/* implicit */unsigned long long int) max((-1711421230860107569LL), (((/* implicit */long long int) (unsigned char)225))))))))) : (((((/* implicit */_Bool) ((var_1) << (((/* implicit */int) var_4))))) ? ((-(arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))));
                    var_21 = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
}
