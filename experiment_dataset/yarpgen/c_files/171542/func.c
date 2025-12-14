/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171542
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 6; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_3] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)6))));
                            var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1 - 1]))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)250)))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1 - 1] [(unsigned char)3] &= max((max((((/* implicit */int) (unsigned short)0)), (var_4))), (((/* implicit */int) arr_1 [i_0])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((max((4294967295U), (((/* implicit */unsigned int) (signed char)-1)))), (((/* implicit */unsigned int) var_12)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (((~(-2119554711))) < (((/* implicit */int) var_11))))) : (((/* implicit */int) (unsigned char)243))));
}
