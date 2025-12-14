/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137024
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-70)), (var_10)))) <= ((-(((/* implicit */int) var_9)))))));
                    var_14 += ((/* implicit */int) ((17591917608960LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) <= ((+(var_11)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0] [i_1 + 1] [i_3] [i_3])), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) arr_3 [i_0])))))) : (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) : (2881566848U)))))));
                                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 3] [i_3] [i_4 - 3] [i_4 - 3])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (4039851938U))))) <= (var_11)))) : (((/* implicit */int) var_1))));
                                arr_17 [i_3] [i_1] [i_4 + 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) | (arr_14 [i_1 + 3] [i_4 - 2] [i_4 - 2] [i_1 + 3] [i_1 - 2] [i_1 + 3] [i_1 + 3])));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_2] |= ((/* implicit */int) ((arr_13 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0] [i_2]) <= (min((arr_13 [i_1 + 3] [i_1 + 3] [i_2] [i_1] [i_2]), (arr_13 [i_1 + 3] [i_1] [i_2] [i_0] [i_0])))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1 + 3] [i_2]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_9);
}
