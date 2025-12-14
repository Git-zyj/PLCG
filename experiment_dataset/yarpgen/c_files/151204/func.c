/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151204
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
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (arr_0 [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [16U] [16U] [16U]))))))) > (arr_7 [i_0] [i_1 + 2])));
                    arr_8 [(unsigned char)4] [i_1] [5ULL] [16U] = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 2])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    var_13 |= (~((+((~(((/* implicit */int) (signed char)-109)))))));
}
