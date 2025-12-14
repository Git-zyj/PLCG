/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140012
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_0);
                var_10 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (unsigned char)214)))));
                var_11 ^= ((/* implicit */long long int) ((((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))))) < (((/* implicit */int) (_Bool)1))));
                arr_8 [i_0] [i_1] [i_0] = (_Bool)1;
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned long long int) var_2);
    var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5)));
}
