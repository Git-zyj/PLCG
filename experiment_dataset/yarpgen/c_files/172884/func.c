/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172884
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((max((arr_0 [i_0] [(unsigned short)23]), (((/* implicit */long long int) var_16)))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                var_17 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65024)))))))), ((+(((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned short)65029)) - (65018)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) var_15)) + (2147483647))) >> (((arr_2 [i_1]) - (6401050665043218685ULL)))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(arr_2 [i_0]))))));
                                arr_15 [i_1] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48)) >> (((((/* implicit */int) (short)26819)) - (26788)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)124)) : (arr_4 [i_0]))) : (arr_9 [i_1] [i_1] [i_2] [i_1]))) % ((-(arr_9 [i_0] [(unsigned short)11] [i_3] [i_4])))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_2);
}
