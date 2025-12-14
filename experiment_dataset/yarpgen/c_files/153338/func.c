/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153338
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_8)));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-43)) && (((/* implicit */_Bool) var_18)))))))) | (((/* implicit */int) max((arr_0 [i_2 - 1] [(unsigned char)2]), (((/* implicit */unsigned char) (signed char)57)))))));
                    arr_8 [i_0] [i_0] [7] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */short) ((unsigned char) var_13));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-29330)) & (((/* implicit */int) var_9)))))))))))));
}
