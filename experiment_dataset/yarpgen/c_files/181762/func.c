/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181762
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
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8190))) : ((+(arr_4 [(unsigned char)12] [i_1])))))) && (((/* implicit */_Bool) min((var_1), (arr_6 [i_0 - 1]))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) (((((~(((((arr_1 [(signed char)14]) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0 - 1])) - (38148))))))) + (2147483647))) << (((((arr_1 [(_Bool)1]) + (1332471109))) - (26)))));
            }
        } 
    } 
    var_16 -= (-(((/* implicit */int) (_Bool)0)));
    var_17 = (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))) ? (var_9) : ((-((+(((/* implicit */int) (unsigned char)12)))))));
}
