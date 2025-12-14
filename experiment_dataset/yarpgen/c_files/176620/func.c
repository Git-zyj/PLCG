/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176620
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
    var_20 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_14)))) < (((((/* implicit */int) var_16)) - ((+(((/* implicit */int) var_9))))))));
    var_21 = ((/* implicit */int) (((+(var_18))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 - 2])), (982539213613634281ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 2])) ? (arr_5 [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1 - 2])))))))));
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) (signed char)40)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */signed char) max((549755551744ULL), (((max((var_7), (((/* implicit */unsigned long long int) var_4)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) (signed char)40))))))))));
                                arr_12 [i_0] [i_3] [i_2] [(short)2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) << (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (18446743523953999866ULL)));
                                var_25 = ((/* implicit */short) 549755551744ULL);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 549755551724ULL)) ? ((+(((/* implicit */int) (signed char)-42)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0])), (var_19))))))) ? (max((((/* implicit */unsigned long long int) 410865110212850314LL)), (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_10 [i_0] [i_1] [i_0] [i_2] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)57149)) ? (((7728133865986292749ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [3ULL]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [2] [i_2] [i_0])))))))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0] [10] [i_1] [i_1] [i_2])) ? (max((((/* implicit */unsigned long long int) max((arr_2 [i_2]), (((/* implicit */long long int) arr_7 [i_2] [i_2] [i_2] [i_0] [i_0] [i_2]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_2 [9ULL])) : (65535ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9700))) != (arr_6 [i_0] [i_1] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_19)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
                }
            } 
        } 
    } 
}
