/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171725
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) arr_3 [i_1]);
                            var_15 = ((3508196056537909749ULL) ^ (14938548017171641866ULL));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_1] [i_0 - 1]))))) + ((-(3508196056537909749ULL)))));
                            arr_10 [i_0] [i_1] [1LL] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_3])) + (((/* implicit */int) arr_5 [i_1]))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 12; i_4 += 4) 
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) var_7);
                                var_17 *= ((/* implicit */unsigned short) ((long long int) arr_8 [i_4] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_4 - 2] [i_4 - 1]));
                            }
                            for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2] [i_1] [i_3])) << (((/* implicit */int) arr_6 [i_0 + 1] [i_2] [i_1] [i_5]))))));
                                var_19 -= ((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((arr_0 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (max((((/* implicit */int) arr_7 [i_2])), (1163210731)))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(short)2] [i_0] [i_0]))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) - (((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) var_11))))) ? (((var_10) + (var_10))) : (((/* implicit */unsigned long long int) min((-1799013978), (var_4))))))));
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0 + 2] [i_0]);
                var_22 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            }
        } 
    } 
}
