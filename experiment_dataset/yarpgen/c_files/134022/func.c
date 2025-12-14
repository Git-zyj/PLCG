/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134022
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
    var_10 = ((/* implicit */short) min((((/* implicit */int) (!(var_8)))), (((((/* implicit */_Bool) -857376394)) ? (((/* implicit */int) max((var_3), (var_3)))) : (((((/* implicit */_Bool) 857376393)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+((-(((/* implicit */int) ((857376395) > (((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 1]))))))))))));
                    arr_6 [i_2] [i_1] [i_0 + 1] [i_0 + 1] = (((-((+(((/* implicit */int) var_1)))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 857376377)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_2]))))) ? (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1])) % (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2)))));
                    arr_7 [i_0] [i_0] [i_1 + 1] [4ULL] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)4)), ((-(((/* implicit */int) (signed char)-103))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) max(((+(((long long int) var_7)))), (((/* implicit */long long int) ((short) (signed char)92)))));
    var_14 = (~(((var_9) + (((((/* implicit */int) var_8)) - (var_9))))));
}
