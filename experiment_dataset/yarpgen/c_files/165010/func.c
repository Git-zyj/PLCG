/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165010
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) + (12288U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (((unsigned short) var_4)))))))))));
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = (((!(((/* implicit */_Bool) (+(-8723901868110986280LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (min((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)255)), (arr_3 [i_0] [i_1])))), (arr_2 [i_1] [i_1 - 3] [i_0]))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_0])) * (((/* implicit */int) var_0))));
                arr_6 [i_0] [i_1 - 3] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
}
