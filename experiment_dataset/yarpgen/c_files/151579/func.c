/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151579
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) min((1984690438934436819LL), (0LL)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_2]))))), (((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1LL))))));
                    arr_8 [i_0] [i_0] [i_1] = (unsigned short)37191;
                }
            } 
        } 
    } 
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */int) var_8))))) ? (var_11) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))));
    var_14 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_12))) != (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)67))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(var_12)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (-13LL))))))) : (((/* implicit */int) var_4))));
}
