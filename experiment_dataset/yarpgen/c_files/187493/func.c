/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187493
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) ((min((((((-1) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (-8))) >= (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [i_0]))))))));
                arr_4 [(unsigned short)12] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 19)) ? (((/* implicit */int) (unsigned short)65366)) : (((/* implicit */int) (signed char)-82))))) ? (((/* implicit */int) min((arr_1 [i_0]), ((unsigned short)52201)))) : ((~(12)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_4)))), ((-((((_Bool)1) ? (((/* implicit */int) var_5)) : (-1884649997)))))));
}
