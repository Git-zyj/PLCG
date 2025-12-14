/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173568
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
    var_10 &= ((/* implicit */unsigned int) max((var_1), (max((var_7), (((/* implicit */short) (signed char)-30))))));
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) 9U)) && (((/* implicit */_Bool) (short)11162)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-11162)))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44997))) : (var_5)))))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
                var_12 = ((/* implicit */long long int) ((int) (unsigned char)146));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_7)))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 894979063U)) / (arr_1 [i_4 + 2]))) / (((((/* implicit */_Bool) (signed char)-9)) ? (arr_1 [i_4 + 2]) : (arr_1 [i_4 + 2])))));
                                arr_18 [i_0] = ((/* implicit */unsigned char) (short)-11174);
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] = (~(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
}
