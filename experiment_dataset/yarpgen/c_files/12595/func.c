/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12595
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_0) ? ((+(((/* implicit */int) arr_4 [i_1] [i_1])))) : (((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) min(((unsigned char)199), ((unsigned char)199))))))));
                    arr_7 [(short)10] [i_1 - 2] [(short)10] |= ((/* implicit */short) ((((var_0) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_8)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_6)))) != (((/* implicit */int) ((short) var_9)))))))));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) ((short) (unsigned short)42957))))) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_10 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)188)))) / (((/* implicit */int) var_0))))) > (var_8)));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((((/* implicit */int) min((var_7), (var_7)))) << (((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_6)))) + (498163864)))))));
}
