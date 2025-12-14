/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189222
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
    var_11 = ((/* implicit */_Bool) var_8);
    var_12 = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) : (3802242139U))) <= ((-(var_7))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)114))))), (var_1))) : ((-(var_0)))));
    var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) (short)28692)), ((((-(var_1))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)155)), ((short)28695)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) arr_0 [i_0])), (min((1153627858U), (arr_1 [i_0 + 1]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_1]), (arr_0 [i_1])))) ? ((~(((/* implicit */int) (short)28683)))) : (((/* implicit */int) arr_0 [i_0])))))));
            arr_4 [i_0 - 1] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 122033705U)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_2]) : (4097012551U))) : (arr_7 [i_0] [i_0] [i_0]));
            arr_8 [i_0] [(unsigned char)11] [i_2] = ((/* implicit */int) 4097012539U);
        }
        var_17 = ((((/* implicit */int) (signed char)21)) << (((((/* implicit */int) (signed char)117)) - (96))));
        var_18 = ((/* implicit */_Bool) (unsigned char)91);
        var_19 = ((/* implicit */unsigned int) min((var_19), (min((arr_1 [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28708)))))))));
    }
}
