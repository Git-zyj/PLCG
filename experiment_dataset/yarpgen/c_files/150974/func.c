/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150974
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (2147418112U)))))) ? (var_15) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71)))))))));
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
    var_18 = ((2147418112U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [6] [i_3] [(short)4] [i_3] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)113)) : (((((/* implicit */int) (signed char)-110)) / (((/* implicit */int) var_13)))))) * (((((/* implicit */int) arr_10 [4LL])) * (((/* implicit */int) (signed char)-99))))));
                                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_20 = ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)22)) * (((/* implicit */int) (short)32764))))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) var_12)), (1031489807U))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0] [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_2])))))) : (((/* implicit */int) var_5)));
                                arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)6144)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned char)245))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) min((((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)104)))), (((/* implicit */int) arr_9 [i_0] [(_Bool)1]))));
                        arr_19 [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) 2934951349603178784LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)122))) : (281200098803712LL))))) >= (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    }
                }
            } 
        } 
    } 
}
