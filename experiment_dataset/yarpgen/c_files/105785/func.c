/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105785
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1 - 3] = ((/* implicit */signed char) min((min((arr_2 [i_0] [i_0]), (((((/* implicit */int) (signed char)106)) >> (((((/* implicit */int) (short)22660)) - (22636))))))), (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned char)13])) == (arr_2 [i_0] [i_0])))) : ((~(arr_2 [i_0] [i_1 - 4])))))));
                arr_5 [i_1 - 2] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */int) ((-1249988802) < (((/* implicit */int) (short)1920))))), ((+(((/* implicit */int) (short)22661)))))) % (((max((((/* implicit */int) (short)1905)), (arr_2 [(short)15] [(unsigned char)3]))) & (((((/* implicit */int) (short)1905)) - (((/* implicit */int) var_0))))))));
                arr_6 [i_0] [(short)16] [i_1 - 2] = ((/* implicit */signed char) ((arr_2 [i_0] [i_0]) <= ((((~(((/* implicit */int) arr_0 [(short)2])))) & (((/* implicit */int) max(((signed char)125), (arr_1 [i_1 - 2]))))))));
            }
        } 
    } 
    var_12 = var_3;
}
