/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115272
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
    var_15 = ((/* implicit */unsigned short) ((short) (short)-6668));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_0 [i_0 + 2])))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (unsigned short)18349))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((arr_2 [i_0 + 2]) && (arr_2 [i_0 + 2]))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (var_8)))) ? (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_5)))) : (((/* implicit */int) ((arr_0 [i_0]) == (1676147001U)))))) : (((((/* implicit */int) arr_5 [i_0] [i_0])) ^ ((~(((/* implicit */int) arr_4 [i_1] [i_0] [i_1]))))))));
                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1676147004U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (arr_0 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 3] [i_1] [16])) <= (((/* implicit */int) var_7))))))))));
            }
        } 
    } 
}
