/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151981
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33572)) ? (1096174414) : (((/* implicit */int) (_Bool)1))))));
                var_17 -= ((/* implicit */long long int) (!(((min((arr_6 [i_0] [i_1]), (((/* implicit */long long int) var_3)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_4)))))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(arr_2 [i_1] [i_0])))))) ? (var_2) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_1]) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(arr_0 [i_0])))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_6))))) : (var_9))))));
    var_20 += ((/* implicit */signed char) var_4);
}
