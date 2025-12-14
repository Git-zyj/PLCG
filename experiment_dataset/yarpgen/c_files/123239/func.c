/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123239
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) var_5);
                var_13 = ((/* implicit */signed char) (+(((unsigned int) (unsigned short)21301))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1218889744U)) ? (var_10) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-9969)) && (((/* implicit */_Bool) (unsigned short)44263)))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1]))))) ? (((((/* implicit */int) var_9)) << (((((((/* implicit */int) (signed char)-67)) + (96))) - (17))))) : (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16179)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))) & (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((-(var_10))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)26325)) : (((/* implicit */int) (_Bool)1))))))));
}
