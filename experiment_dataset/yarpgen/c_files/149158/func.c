/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149158
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-66), (((signed char) (signed char)101))))) / (((((/* implicit */_Bool) ((short) (signed char)88))) ? ((-(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_13))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)12)) ? (4294967295U) : (11U)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((signed char) (-(56778409U)));
        var_21 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)88))));
            var_23 = ((/* implicit */unsigned int) ((short) (((-(var_5))) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
            arr_6 [i_0 - 2] [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [(short)9])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)85))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (short)19839)) : (((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) (short)17140)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)29439), (((/* implicit */short) (signed char)-88)))))));
        }
    }
}
