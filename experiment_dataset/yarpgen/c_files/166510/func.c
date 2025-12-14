/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166510
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
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_2] = ((/* implicit */int) ((unsigned short) min((((long long int) arr_0 [i_0] [i_1])), (((/* implicit */long long int) ((var_10) && (((/* implicit */_Bool) arr_2 [i_0]))))))));
                    arr_10 [(short)15] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)185)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)163)))))))));
                    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (short)-13792))))));
                }
            } 
        } 
    } 
}
