/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11179
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 &= ((((/* implicit */int) arr_2 [i_2] [i_2 - 4] [i_2 - 2])) | (((/* implicit */int) arr_2 [(signed char)24] [i_2 - 1] [i_2 - 4])));
                    var_13 = ((/* implicit */signed char) max((var_13), (var_6)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (var_5)))), (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned char)162)) - (153)))))) ? (((/* implicit */unsigned int) ((int) 125263004))) : (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
}
