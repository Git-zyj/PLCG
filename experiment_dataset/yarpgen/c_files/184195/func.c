/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184195
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
    var_12 &= (!(((/* implicit */_Bool) (+(((/* implicit */int) ((2147483647) == (((/* implicit */int) var_0)))))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 2147483647)), (var_6))))))) ? (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-2147483647) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) ^ (var_1)))) ? (var_3) : (((/* implicit */int) (unsigned char)83)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [(unsigned char)2] [i_2] [i_2] &= ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                    arr_7 [i_1] [i_2] = ((/* implicit */_Bool) 2067945440U);
                }
            } 
        } 
    } 
}
