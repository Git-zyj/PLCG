/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16358
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6)))) & (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) (signed char)-38))))))) ? (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (signed char)37)))) : (((/* implicit */int) var_0))));
    var_11 = ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */signed char) (~(((((/* implicit */int) ((unsigned char) 16725873571499059869ULL))) * (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)47))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_1))))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)58738))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)0])) ? (((((/* implicit */int) (short)26503)) + (((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (short)-26504))))))), (((unsigned long long int) ((-1549757115) & (1549757110)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_3);
}
