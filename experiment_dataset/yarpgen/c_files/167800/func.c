/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167800
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
    var_10 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (max((var_9), (var_9))) : (min((((/* implicit */unsigned int) (_Bool)0)), (var_1)))));
    var_11 -= (unsigned short)16352;
    var_12 = ((/* implicit */_Bool) min((min((var_7), (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) : (arr_1 [i_0])));
            arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
            arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8U])) ? ((+(var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0])))))));
            arr_6 [i_0] [i_1] [i_0] = (!((((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_0])))));
        }
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2 + 2] [i_2 - 2])) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
            var_14 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_4))))));
            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (unsigned short)0)))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_0])) ? (arr_2 [i_0] [(_Bool)1] [i_0]) : (2179885408U)));
            var_17 += (!(((/* implicit */_Bool) arr_2 [(unsigned short)4] [i_2 + 1] [i_2])));
        }
        arr_10 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
        var_18 = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_0] [i_0] [i_0]));
    }
}
