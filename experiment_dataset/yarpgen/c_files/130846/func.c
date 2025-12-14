/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130846
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_12))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_1 [(unsigned short)19]))))), (((/* implicit */unsigned long long int) ((unsigned char) -1210978545163047401LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (short i_6 = 4; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) arr_3 [i_2 - 2] [i_6 - 1] [i_2 - 1]);
                                arr_21 [i_0] [23ULL] [(unsigned short)8] [0U] [(unsigned short)23] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-98)) - ((+(((/* implicit */int) arr_9 [i_2 + 4] [i_6 - 4] [i_6 - 4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        for (short i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 2; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (signed char i_11 = 4; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((long long int) var_9));
                                arr_35 [(short)9] [i_10] [i_8] [i_8] [(unsigned char)17] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_16 [i_8 + 1] [i_9] [i_10] [(unsigned char)11])) ^ (((/* implicit */int) arr_16 [i_11 + 4] [i_10] [i_9 - 1] [i_8]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    for (signed char i_13 = 4; i_13 < 20; i_13 += 1) 
                    {
                        {
                            arr_43 [i_12] [i_8] [i_8] [i_13] [2LL] [i_8] |= ((/* implicit */int) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) / (var_7))))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)66)), (-1))))));
                            arr_44 [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */short) var_12)), (arr_10 [i_8])))) ? (min((-3553053362587935168LL), (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) arr_27 [i_7] [23U] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-8940642849047717824LL))))) % (((/* implicit */long long int) var_5))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 307369902U)) ? (2167960383659701834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23148)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((300664591U) - (((/* implicit */unsigned int) -166049188))))))))) : (((((/* implicit */_Bool) arr_34 [i_8 + 1] [i_13 - 3] [i_7] [i_8 + 1] [i_8])) ? (186863490885186268ULL) : (((/* implicit */unsigned long long int) (-(1048560))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
