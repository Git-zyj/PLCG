/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169377
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
    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) var_10)), (var_6))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((var_2) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (var_5)))) : (((/* implicit */int) var_4)))) | (((/* implicit */int) max((((unsigned short) arr_1 [i_0] [13])), (((/* implicit */unsigned short) (signed char)42)))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)60))));
        var_17 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))) ? (((((/* implicit */_Bool) (short)21658)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)25254)) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */unsigned char) var_8))))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_11)))))) - (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) arr_4 [(unsigned short)12]))))))))));
                var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-19882))));
                var_20 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)-12810)))))))));
            }
        } 
    } 
}
