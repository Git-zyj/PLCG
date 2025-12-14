/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125046
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (unsigned char)167)))))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)28))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (signed char)3))));
                        arr_13 [i_2] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                        arr_14 [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned char)77)) ? ((+(var_15))) : (((arr_2 [i_3]) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (short)11800)))));
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_2] [i_1] [i_2 + 1] [i_2 + 1]))));
                    }
                    var_21 = ((/* implicit */short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (short)1920))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((var_8) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) max(((signed char)10), (var_5)))) ? (((((/* implicit */int) (signed char)-18)) / (((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))))))));
    var_23 = ((/* implicit */_Bool) min((var_9), (max((((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-17)))), ((unsigned short)0)))));
}
