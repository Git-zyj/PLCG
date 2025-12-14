/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151778
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
    var_17 = ((/* implicit */signed char) min((var_17), (((signed char) (~(((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1 - 2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [(signed char)19])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_3 [i_1 + 2])))) >= (((/* implicit */int) ((unsigned char) arr_3 [i_0 + 1])))));
                arr_5 [(signed char)5] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_1 [i_1] [i_1 + 4])) & (((/* implicit */int) arr_0 [i_0] [i_1 + 4])))), (((/* implicit */int) min((arr_0 [i_0 - 2] [i_1 - 2]), (arr_0 [i_0 - 2] [i_1 + 2]))))));
            }
        } 
    } 
    var_18 = var_8;
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) < ((+(((/* implicit */int) var_11)))))))) & (min(((~(var_3))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_3)))))));
}
