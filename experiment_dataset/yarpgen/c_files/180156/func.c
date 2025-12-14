/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180156
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_2] [i_1] [i_0] [i_0]);
                    arr_11 [i_0] [14LL] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0 - 1] [(unsigned short)7]);
                    var_10 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_1] [i_1] [11U] [i_2])) * (((/* implicit */int) ((-4) >= (((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2 + 4] [i_2]))))))) < (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) - (arr_4 [i_2] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [1U])))))))));
                }
            } 
        } 
    } 
    var_11 ^= ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_5))) % (var_5)))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) : (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))))));
}
