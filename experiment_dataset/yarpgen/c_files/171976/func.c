/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171976
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
    var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_13)), ((unsigned char)122)))) - ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (308915433)))))) - (((var_6) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_13)))))))));
    var_17 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_2 + 1])) : (((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0] [15])) : (((/* implicit */int) var_10)))))));
                    var_18 = ((((/* implicit */_Bool) 34847774755372775LL)) ? (((/* implicit */int) (unsigned short)8082)) : (((/* implicit */int) (signed char)24)));
                    var_19 -= min((((((/* implicit */int) arr_6 [i_0])) / (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)57452)))))), (((/* implicit */int) ((arr_8 [i_2 + 1] [i_2 + 2]) < (arr_8 [i_2 - 2] [i_2 + 2])))));
                }
            } 
        } 
    } 
}
