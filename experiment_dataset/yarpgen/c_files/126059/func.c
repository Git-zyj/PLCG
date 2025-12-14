/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126059
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_10 = ((/* implicit */short) ((unsigned char) min((var_6), (((/* implicit */unsigned short) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
}
