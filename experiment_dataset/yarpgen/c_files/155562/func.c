/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155562
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)6] [i_0] [6ULL] |= ((/* implicit */int) arr_4 [i_0] [9LL]);
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [4U] [5U]), (((/* implicit */signed char) (_Bool)1))))))))) ? (min((max((1197242358U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), ((unsigned char)230)))) ? (((/* implicit */int) max((var_9), (((/* implicit */signed char) arr_0 [(_Bool)1] [i_1]))))) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (var_11)))) : (((int) (unsigned char)15)))) & (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)230)) != (((/* implicit */int) var_12))))))))));
}
