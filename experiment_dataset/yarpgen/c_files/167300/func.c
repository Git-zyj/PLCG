/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167300
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) (signed char)-110))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((341948432U) - (341948428U)))))) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_5))))) <= (var_8))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) var_10);
                    var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1]))))));
                    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3584))));
                }
            } 
        } 
    } 
}
