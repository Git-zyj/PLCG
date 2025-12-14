/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131305
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */signed char) ((var_4) <= (((/* implicit */unsigned long long int) var_13))))), (((signed char) max((var_13), (((/* implicit */long long int) var_17)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (+(var_16))))))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((int) var_9))) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_0 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [16LL] [10ULL] [(unsigned char)14] [i_3] [i_1] [i_4] [i_4 - 1] |= ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (short)19093))))) ? (((((((/* implicit */int) var_15)) + (((/* implicit */int) (short)17351)))) & (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_6))))))) : (((((/* implicit */_Bool) min(((signed char)-70), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((var_0) ^ (((/* implicit */int) (short)-2332)))))));
                                var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_1))))) : (var_4))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) (unsigned char)173)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))) <= ((-(18446744073709551602ULL)))));
                                var_22 &= ((/* implicit */short) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)12871)) : (((/* implicit */int) (short)-2348))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) (-(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2343))) : (var_11))), (max((var_5), (((/* implicit */unsigned long long int) var_10))))))));
                    var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0 - 2] [2ULL] [i_0 - 1] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : ((+(arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_1 + 3])))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_4);
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) var_15)), (var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1233669413)), (var_13)))) : (var_4))) : ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749))) : (var_5)))))));
}
