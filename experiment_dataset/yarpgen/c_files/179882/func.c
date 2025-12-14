/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179882
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)86)) ? (var_7) : (((/* implicit */int) (_Bool)0)))))))) <= (max((var_8), (((/* implicit */unsigned long long int) (signed char)-126))))));
    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) var_2);
                    arr_10 [i_0 + 1] [(unsigned short)13] [(short)4] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 1] [i_2]);
                    arr_11 [i_0 + 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_5))) != (min((-363036383), (((/* implicit */int) var_3))))));
                    arr_12 [i_0 + 1] = ((/* implicit */unsigned char) ((min((arr_0 [i_0 - 1] [i_1 + 4]), (arr_0 [i_0] [i_2]))) ? (((((/* implicit */int) arr_0 [i_2] [i_0 - 1])) >> (((/* implicit */int) arr_0 [i_0 + 1] [i_2])))) : ((~(((/* implicit */int) (unsigned short)53034))))));
                }
            } 
        } 
    } 
}
