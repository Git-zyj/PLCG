/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123358
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)15680)) > (((/* implicit */int) (short)-15681))));
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((-(min((((/* implicit */int) (short)15674)), (1702999064))))) : (((/* implicit */int) (short)15680))));
    }
    var_20 = ((/* implicit */_Bool) max(((short)-21795), (((/* implicit */short) (signed char)-25))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_15))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        for (int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            {
                arr_10 [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_8 [i_1 + 2] [i_2] [i_1 + 2]), (((/* implicit */short) (_Bool)1)))))));
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15680)) ? ((-(((/* implicit */int) var_13)))) : (((int) var_15))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (short)-13183))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (_Bool)1))));
            }
        } 
    } 
}
