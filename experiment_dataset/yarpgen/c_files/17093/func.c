/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17093
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3 - 3] [i_1] [i_4] [i_3] [i_4] [i_2 - 1] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_3 - 2] [i_3] [i_4 + 1] [i_2])) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_2] [i_3] [i_3] [i_4 + 1])) : (((/* implicit */int) var_11))))), (max((((/* implicit */unsigned long long int) var_8)), (arr_1 [2ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4 + 1] [i_4]))) ^ (arr_10 [i_3 - 1] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1] [i_4]))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((16383ULL), (((/* implicit */unsigned long long int) (unsigned short)1920)))), (((/* implicit */unsigned long long int) arr_12 [i_4] [i_2 - 1] [i_3] [(_Bool)1] [i_3 + 3] [i_4 + 1]))))) ? ((-(((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (arr_6 [(unsigned short)13] [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63615)) ? (((((/* implicit */int) arr_14 [i_4] [i_4])) >> (((((/* implicit */int) (unsigned short)63634)) - (63616))))) : (((/* implicit */int) (_Bool)0)))))));
                                var_15 = ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned short) ((arr_1 [i_0]) >> (((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1]) << (((18446744073709535217ULL) - (18446744073709535215ULL)))))))))));
                var_16 *= ((/* implicit */_Bool) ((short) ((unsigned char) max((arr_7 [i_0]), (((/* implicit */unsigned short) var_0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 3) 
    {
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) max(((unsigned short)34894), (arr_7 [i_6])));
                /* LoopNest 3 */
                for (short i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_32 [i_5] [10LL] [i_5] [i_7 - 1] [i_5] [i_9] [i_9] = ((/* implicit */short) 18446744073709535221ULL);
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)63613)) == (((/* implicit */int) var_8)))))))))));
                                arr_33 [i_5] [i_5] [i_5] = ((/* implicit */short) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                var_19 = ((/* implicit */unsigned short) ((6911952958663891594LL) >= (((/* implicit */long long int) (-(((/* implicit */int) ((short) 60061704U))))))));
                                arr_34 [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_5 - 1] [i_7 + 2])) == (((/* implicit */int) arr_9 [i_5 - 2] [i_5 - 2] [i_6 + 1]))))) * (((/* implicit */int) arr_14 [i_6] [i_9]))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_5] = ((/* implicit */unsigned char) arr_21 [i_6] [i_6 + 1] [i_5]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)63613)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))))) + (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_0))), (var_8)))))))));
}
