/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1333
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)71)) ? (-2823261868461582425LL) : (((/* implicit */long long int) 2082166983)))))) << (((max((((/* implicit */unsigned int) 2082166996)), (2486026939U))) - (2486026925U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) != (max((((/* implicit */int) (!(var_6)))), (((((/* implicit */int) arr_3 [i_0] [i_1] [i_3])) + (((/* implicit */int) arr_5 [i_0]))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_8 [i_0] [i_2] [i_2] [i_4]) && (((/* implicit */_Bool) ((int) arr_11 [i_1] [i_0] [i_1] [i_2] [i_4])))))) | (((((((/* implicit */_Bool) arr_2 [i_0] [15U])) || (((/* implicit */_Bool) arr_1 [i_2] [i_0])))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [8U] [i_2] [(short)11])) : (((/* implicit */int) var_7))))));
                        arr_13 [i_0] [i_0] [i_2] [i_4] = ((((/* implicit */_Bool) ((unsigned short) ((arr_8 [i_0] [i_2] [i_1] [i_0]) ? (arr_4 [i_0] [i_0]) : (-2082166984))))) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((arr_8 [i_0] [3ULL] [i_1] [i_0]) ? (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [i_2]) : (((/* implicit */long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_19 = -1192119957;
                        var_20 = ((/* implicit */short) ((int) ((arr_6 [i_0] [i_0]) > (((/* implicit */long long int) 1021323075U)))));
                        arr_17 [i_1] |= ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_5])) & (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_5])))) ^ (2082166996)));
                        arr_18 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-2082166972), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_14 [i_0] [18] [i_0])) : (min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5])), (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_21 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0]))))), (arr_11 [i_0] [i_1] [i_2] [i_6] [i_2])));
                        arr_23 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-60)) ? (3918604865516231486ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_6])) : (((/* implicit */int) arr_12 [i_6] [i_2] [i_2] [i_1] [i_0])))))));
                        arr_24 [i_2] [i_1] [i_0] [16ULL] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (12U)));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_30 [16LL] [i_1] [16LL] [i_0] [i_7] [i_1] = ((/* implicit */int) ((unsigned long long int) -1LL));
                                arr_31 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */short) arr_25 [i_2]);
                            }
                        } 
                    } 
                }
                arr_32 [i_0] = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_19 [i_0])), (arr_16 [i_0] [i_0] [i_1])))), (arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])));
            }
        } 
    } 
}
