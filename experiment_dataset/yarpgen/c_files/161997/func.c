/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161997
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
    var_19 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (((((-503722621281624372LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_16)) - (54750)))))))) ? (((((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 3LL)) ? (arr_1 [(short)11] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) >= (((/* implicit */int) arr_6 [i_4 - 2] [i_0] [i_0]))))))))) ? (max((((/* implicit */unsigned long long int) var_18)), ((~(arr_2 [i_0] [i_0]))))) : (min((((/* implicit */unsigned long long int) 503722621281624371LL)), (arr_2 [i_1] [(_Bool)1])))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_1 [i_4 - 2] [i_4 + 1]))) ? (((/* implicit */int) ((_Bool) 567631166U))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) >= (arr_1 [i_4 + 1] [i_4 - 3]))))));
                                arr_16 [i_0] [i_1] [(unsigned short)3] [i_3] [i_4] = ((/* implicit */signed char) (~(max((var_8), (((/* implicit */long long int) ((short) var_7)))))));
                                var_22 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_7 [i_2] [i_2] [8U])) ? ((((_Bool)1) ? (((/* implicit */long long int) -1950545495)) : (503722621281624371LL))) : (((/* implicit */long long int) ((3727336138U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (567631158U)));
    var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)2692)))))))))));
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 503722621281624371LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))))))))));
}
