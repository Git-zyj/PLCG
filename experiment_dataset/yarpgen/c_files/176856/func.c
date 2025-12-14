/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176856
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
    var_11 = ((/* implicit */unsigned short) ((var_6) * (var_1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) min((arr_0 [8] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_8)))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                var_14 = ((((/* implicit */int) arr_1 [(unsigned short)11])) | ((~((-(((/* implicit */int) (signed char)-30)))))));
                var_15 = ((/* implicit */unsigned long long int) ((((arr_2 [i_1] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) / (((arr_2 [i_1] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_16 = ((/* implicit */unsigned short) arr_2 [i_1] [i_0]);
            }
        } 
    } 
}
