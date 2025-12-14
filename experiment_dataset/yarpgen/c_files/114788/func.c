/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114788
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
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (8U))))));
    var_14 = ((/* implicit */signed char) ((unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((33776997205278720LL) | (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0])))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? ((-(((/* implicit */int) arr_2 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))))));
                    var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_6 [i_0 - 2])))) % (((((/* implicit */int) arr_6 [i_0 + 1])) << (((((/* implicit */int) arr_6 [i_0 - 1])) - (51)))))));
                }
            } 
        } 
    } 
}
