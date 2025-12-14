/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128613
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
    var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)109))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned int) (signed char)-102);
                    arr_8 [i_1] [i_2] [i_1] = ((/* implicit */int) (+(((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_2 + 2])))))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */unsigned short) ((unsigned long long int) (signed char)109));
    var_13 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_3)) * ((-(((/* implicit */int) var_9)))))));
    var_14 = min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-109))))), (((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-19040))))))));
}
