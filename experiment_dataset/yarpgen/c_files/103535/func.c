/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103535
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_4)) : (var_6)));
    var_11 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) var_4)))) : ((~(var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) var_7);
                        arr_8 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_3)), ((short)-16384)))) && (((/* implicit */_Bool) min((((/* implicit */int) var_9)), (-407698651)))))))) : (arr_6 [i_2] [i_1 - 1] [15ULL] [i_4])))));
                                var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 8485653433897003319ULL))) && (((((/* implicit */_Bool) -268435456)) && (((/* implicit */_Bool) (short)29687))))));
                                arr_15 [i_1] [i_1] [i_1] [i_4] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_4] [i_2] [i_1 + 1] [i_0 - 2]);
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0 + 1] [i_0 + 2])))) ? (((max((1975402071), (-1975402071))) << (((arr_13 [i_2] [i_2] [1U] [1ULL]) - (15251327105655797197ULL))))) : (((/* implicit */int) ((unsigned char) ((var_1) >> (((((/* implicit */int) var_0)) - (202)))))))));
                    arr_17 [i_0 + 2] [i_1 - 1] [i_0 + 2] [i_0] = ((((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) var_3)), (arr_5 [i_0] [i_1 - 1] [(short)6] [i_2]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1]))) : (var_6))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_4))) < (((unsigned long long int) (signed char)32)))))));
                }
            } 
        } 
    } 
}
