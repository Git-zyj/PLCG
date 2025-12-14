/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153783
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) + (4294967287U)));
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((var_2) | (((unsigned int) max((((/* implicit */short) var_0)), (var_8)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3365052799U)) ? (((/* implicit */unsigned long long int) -8390954325465730227LL)) : (2ULL)))));
                                var_24 += ((/* implicit */unsigned short) ((int) var_16));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_2 + 2] [i_2 - 1] [i_2 + 1]), (((/* implicit */unsigned long long int) (unsigned char)48))))) && (((/* implicit */_Bool) ((long long int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 2]))))))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) var_15);
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_16 [i_2] [i_2 + 2] [i_2 + 2])) ? (((((/* implicit */int) (unsigned char)42)) - (((/* implicit */int) (signed char)61)))) : (((((/* implicit */_Bool) arr_13 [i_2])) ? (var_4) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                        arr_19 [i_0] [i_0] [i_2 + 2] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)186)) >> (max((((/* implicit */unsigned int) (_Bool)1)), (16U)))));
                        var_26 = ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) arr_13 [i_2]))), (arr_3 [i_0] [i_0] [i_0])));
                    }
                    arr_20 [i_0] [i_0] [22U] [i_2] = ((/* implicit */short) (unsigned char)15);
                    arr_21 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6341)) ? (((/* implicit */long long int) var_4)) : (arr_8 [(signed char)13] [i_2] [(short)20] [i_1] [i_0])))) ? (((/* implicit */int) ((short) arr_13 [i_2]))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) (short)-31852))))))) : (((unsigned int) min((arr_5 [i_0] [i_1] [(short)22] [i_1]), (((/* implicit */unsigned int) (unsigned char)20))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) (-(18446744073709551614ULL)));
}
