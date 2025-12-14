/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15040
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
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) (~(((((((/* implicit */_Bool) (signed char)-83)) ? (var_10) : (arr_3 [i_0]))) >> (((((var_2) + (arr_3 [i_0]))) + (1203552820)))))))) : (((/* implicit */signed char) (~(((((((/* implicit */_Bool) (signed char)-83)) ? (var_10) : (arr_3 [i_0]))) >> (((((((var_2) + (arr_3 [i_0]))) + (1203552820))) + (410583073))))))));
        var_17 = ((/* implicit */short) var_10);
        var_18 = ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (short)9)) : (-101224880));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_19 = (-(((/* implicit */int) var_11)));
            arr_9 [i_0] = ((((/* implicit */int) (short)-5728)) | (((/* implicit */int) (signed char)92)));
        }
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_20 = max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((+(max((var_8), (((/* implicit */int) (short)-17)))))));
        arr_12 [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */int) ((arr_0 [i_2] [i_2]) > (var_12)))) | (arr_7 [14] [14]))));
    }
}
