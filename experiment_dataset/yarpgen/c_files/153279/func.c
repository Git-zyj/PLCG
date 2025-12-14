/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153279
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
    var_20 = ((/* implicit */unsigned int) ((var_16) == (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((((/* implicit */_Bool) var_16)) ? (var_19) : (((/* implicit */int) var_1)))))))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_5 [3U] [i_0] [(unsigned char)10])) >= (var_6)))), (min((((/* implicit */unsigned int) var_5)), (4294967275U)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((((/* implicit */_Bool) 927915223U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_3 [i_1 + 1] [12]))) < (((/* implicit */unsigned long long int) arr_4 [i_0 - 3] [i_0 - 3] [i_1 + 1]))))))))));
                var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4095))))) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_7))))))))));
                var_24 = (-(min((max((4294967295U), (((/* implicit */unsigned int) (unsigned char)74)))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0 - 2])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [12U] [i_2] [i_1] [i_4] [i_2] = ((/* implicit */unsigned int) (unsigned char)240);
                                var_25 &= ((/* implicit */int) (+((-(max((9007061815787520ULL), (((/* implicit */unsigned long long int) 21U))))))));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)12)))) + (((/* implicit */int) (_Bool)0))))), (arr_7 [i_4] [(_Bool)1]));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) && (arr_1 [i_0 - 2] [i_1 + 1])))), (18446744073709551588ULL)))));
            }
        } 
    } 
}
