/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181346
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
    var_11 = var_2;
    var_12 = (unsigned char)27;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [(unsigned short)6])) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) arr_8 [(unsigned char)9] [i_1])))), (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 4] [i_2 + 1]))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((unsigned short) arr_7 [i_0] [i_2 - 1] [i_2 + 1])), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)22622)) >= (((/* implicit */int) (unsigned short)41109)))))));
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)264)) >= (((/* implicit */int) (unsigned char)156)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)100)), ((unsigned short)0)))) ? ((-(((/* implicit */int) (unsigned char)252)))) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) - (((/* implicit */int) var_5))))))));
                    var_15 ^= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [(unsigned char)11] [i_1] [i_1])) : (((/* implicit */int) arr_3 [(unsigned char)18] [(unsigned char)18])))), (((/* implicit */int) max((arr_3 [i_0] [(unsigned char)21]), ((unsigned short)47706)))))) * (((/* implicit */int) arr_3 [(unsigned short)16] [i_1]))));
                }
            } 
        } 
    } 
}
