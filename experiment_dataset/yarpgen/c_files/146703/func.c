/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146703
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)129))));
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)255))));
    var_18 |= ((/* implicit */unsigned int) ((unsigned short) var_4));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)120))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [(unsigned short)10] [(unsigned short)10])) : (((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned int) arr_6 [(unsigned short)0] [(unsigned short)0])), (arr_1 [i_1 + 1])))));
                var_20 = ((/* implicit */signed char) (-(((arr_2 [i_1] [i_0]) + (((/* implicit */int) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
}
