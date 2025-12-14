/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108488
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */signed char) var_9)), (((signed char) ((((/* implicit */_Bool) (short)18993)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18994))) : (3309833596U))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(10650215469058898614ULL))))));
                    var_15 = ((unsigned int) (!(((/* implicit */_Bool) 15101571271707064722ULL))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [(signed char)8] [i_2] [2U] [2U] [(_Bool)1] = ((((/* implicit */_Bool) (short)-9219)) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_6)));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned int) 1226637695U))))) || (((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (short)32759)), (var_10)))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_0 - 1] [(_Bool)1] [i_0 - 1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_18 = ((/* implicit */unsigned int) (~(var_11)));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (var_7)));
                    }
                    arr_15 [i_2] [i_2] [i_2] [(signed char)16] = arr_1 [(short)4];
                    arr_16 [i_2] [i_2] [i_2] [i_0 - 1] = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_12);
}
