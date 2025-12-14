/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156014
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [10U] = ((/* implicit */short) (!(((((/* implicit */int) arr_3 [i_1 + 1] [(unsigned char)6])) == (((((/* implicit */int) (short)-12)) | (((/* implicit */int) (signed char)48))))))));
                arr_5 [i_0] &= ((/* implicit */unsigned int) ((unsigned short) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26299)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65535))))))));
                arr_6 [i_0] [i_1] [i_0] = max((2495124118U), (((/* implicit */unsigned int) ((unsigned char) arr_1 [i_1 - 1]))));
                arr_7 [i_0] = var_4;
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)65535));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned int) var_8);
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-92)), (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) (signed char)1))))));
}
