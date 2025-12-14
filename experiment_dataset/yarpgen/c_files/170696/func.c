/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170696
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */int) var_1)) / (arr_5 [i_0] [i_2 - 2])))))));
                    var_11 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2 - 2])) ? (((((/* implicit */_Bool) (short)9493)) ? (((/* implicit */int) (_Bool)0)) : (-68198793))) : (((((arr_4 [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [10U])) - (149))))))));
                    var_12 -= ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2]);
                    arr_9 [(_Bool)1] [i_2] [i_0] = ((/* implicit */int) ((unsigned int) (~((~(arr_8 [i_0] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((unsigned char) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((((_Bool)1) ? (2158660905U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
