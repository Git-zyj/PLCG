/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154928
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
    var_16 = ((/* implicit */unsigned int) var_13);
    var_17 = ((/* implicit */short) var_12);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_7)))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max(((~(((/* implicit */int) ((unsigned short) arr_6 [4ULL]))))), (((/* implicit */int) ((unsigned short) ((long long int) var_10)))))))));
                var_20 |= ((/* implicit */unsigned int) arr_0 [i_0]);
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (13561064045122331024ULL))), (((/* implicit */unsigned long long int) arr_2 [i_1])))))));
                arr_7 [i_0] [(signed char)6] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((unsigned int) min((((/* implicit */signed char) var_5)), (var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (229116099)))) || (var_4)))))));
                arr_8 [i_0] = ((/* implicit */int) ((var_5) ? (17014187112060318396ULL) : (max((max((18358161110998128753ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))))));
            }
        } 
    } 
}
