/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164488
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) min((max(((-(((/* implicit */int) var_4)))), ((-(((/* implicit */int) arr_2 [i_0 - 1] [i_1])))))), (((/* implicit */int) ((unsigned short) (signed char)-122)))));
                var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */int) min(((unsigned short)49152), ((unsigned short)16383)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 3])))) * ((-(((/* implicit */int) arr_2 [i_2] [i_0 - 1]))))));
                                var_18 = ((/* implicit */unsigned int) (signed char)-118);
                                var_19 = ((((/* implicit */long long int) (-((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))))) != (min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0 + 2] [i_1])), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))))));
                                arr_12 [i_0 + 3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 1])) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0 - 2]))))), (((/* implicit */long long int) (unsigned short)55971))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((var_9), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) (unsigned char)0)))))))));
}
