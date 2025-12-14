/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184180
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
    var_18 = ((/* implicit */signed char) (short)-32753);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) - (arr_0 [i_1] [i_2])))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) arr_4 [i_0] [i_1] [i_2]))), (arr_5 [i_0] [(short)11] [i_0] [i_1]))))));
                }
            } 
        } 
        arr_6 [(unsigned short)2] = ((unsigned int) ((((arr_5 [i_0] [(unsigned char)1] [(unsigned char)7] [i_0]) * (18U))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)37)) + (((/* implicit */int) arr_2 [i_0] [(short)1] [i_0])))))));
        var_21 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (-(44U)))) - (((var_0) - (((/* implicit */unsigned long long int) 17U)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 4; i_3 < 12; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (short)2980)))));
                    arr_12 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_3 - 4] [i_3 - 3] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 1] [i_3] [i_4])) && (((/* implicit */_Bool) arr_3 [i_0] [i_4 + 2])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))) : (arr_0 [i_0] [i_3 + 1])))))));
                }
            } 
        } 
    }
}
