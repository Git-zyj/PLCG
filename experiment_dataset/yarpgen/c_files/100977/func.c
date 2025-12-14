/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100977
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((21U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) != (((int) ((unsigned int) (short)-32748)))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)25993)) == (((/* implicit */int) (signed char)-103))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (arr_5 [i_0])))));
                    var_22 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_15);
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
    var_25 *= ((/* implicit */long long int) (!(((((/* implicit */int) var_13)) > (((((/* implicit */_Bool) 526995376564622563ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
}
