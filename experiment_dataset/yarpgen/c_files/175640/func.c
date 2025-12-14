/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175640
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((((/* implicit */_Bool) var_2)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_2)))) > ((-(((/* implicit */int) var_1)))))))) : (min((((/* implicit */unsigned int) ((var_1) && (((/* implicit */_Bool) var_7))))), (((unsigned int) var_2))))));
    var_11 = ((/* implicit */short) min((((/* implicit */int) var_6)), (((((((/* implicit */int) var_7)) - (((/* implicit */int) var_2)))) ^ (((/* implicit */int) var_6))))));
    var_12 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)23195))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] [(short)5] = ((/* implicit */_Bool) arr_0 [(short)11]);
                var_13 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)179)), ((unsigned short)41227)));
            }
        } 
    } 
    var_14 = ((((/* implicit */int) var_5)) ^ ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)76))))))));
}
