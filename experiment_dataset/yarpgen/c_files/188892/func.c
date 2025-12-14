/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188892
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
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned int) var_5);
                    arr_10 [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */short) ((signed char) (short)8128))), (min((((/* implicit */short) (unsigned char)109)), ((short)-14634)))));
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */int) min(((short)8987), (((/* implicit */short) arr_0 [i_1]))))) & (((/* implicit */int) ((var_6) != (((/* implicit */long long int) 0U))))))) / (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [13U]))) : (arr_3 [i_2] [i_2]))) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2]))))))));
                    arr_11 [i_0 + 2] = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_14)) : (var_8)))))));
}
