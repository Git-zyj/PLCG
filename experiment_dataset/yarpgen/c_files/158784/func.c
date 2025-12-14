/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158784
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
    var_11 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (short)1022)))) : (((/* implicit */int) var_5))));
    var_12 -= ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (min(((signed char)-4), (var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((arr_2 [i_0] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)6))))))), ((+(((((/* implicit */_Bool) var_9)) ? (2388749258U) : (((/* implicit */unsigned int) arr_5 [i_0]))))))));
                var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned short)1696), (((/* implicit */unsigned short) (unsigned char)6))))), (max((max((2275935551U), (var_6))), (((/* implicit */unsigned int) ((arr_0 [(signed char)11]) || (((/* implicit */_Bool) var_7)))))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)1696)))))))));
                arr_8 [(unsigned char)1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)9079)))), (((/* implicit */int) max((((/* implicit */short) arr_6 [(unsigned char)0])), ((short)1048))))))) ? ((+(var_1))) : (((/* implicit */int) arr_6 [i_0]))));
            }
        } 
    } 
}
