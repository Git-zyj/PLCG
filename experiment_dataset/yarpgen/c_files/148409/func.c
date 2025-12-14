/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148409
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
    var_11 -= ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_12 = ((/* implicit */int) (_Bool)1);
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)10093)) : (((/* implicit */int) (unsigned char)144)))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_5)))))) >= (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1]))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 2])) || (((/* implicit */_Bool) ((arr_4 [i_1] [i_1] [i_1 - 1] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))))))));
                    var_13 -= ((/* implicit */unsigned char) ((var_9) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_1 [i_2]))));
                }
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_7);
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned int) arr_6 [i_0 + 3] [i_0 - 2] [i_0] [i_1 - 1])), (var_4))) : (((/* implicit */unsigned int) ((int) arr_6 [i_1] [i_1 - 1] [i_0] [i_1])))));
            }
        } 
    } 
}
