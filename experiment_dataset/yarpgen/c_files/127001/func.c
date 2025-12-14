/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127001
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
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) ((int) arr_0 [i_0]))), (min((((/* implicit */long long int) var_1)), (arr_1 [i_0] [i_1]))))) : (((/* implicit */long long int) min((((302967791U) >> (((((/* implicit */int) var_1)) - (55377))))), (min((((/* implicit */unsigned int) var_7)), (var_3))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))), (((unsigned long long int) ((long long int) var_10)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */_Bool) var_4)) ? (var_12) : (arr_10 [i_2] [i_2]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4294967295U)))))));
                                arr_22 [i_5] = ((/* implicit */signed char) ((short) min((var_8), (((/* implicit */long long int) arr_14 [i_4 + 2] [i_3])))));
                            }
                        } 
                    } 
                    var_15 = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (var_4) : (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3] [i_3])) >> (((((/* implicit */int) var_11)) - (36262))))))))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_16 = ((/* implicit */int) ((short) arr_21 [i_7] [i_7] [i_7] [i_3]));
                    arr_25 [i_2] [i_2] [i_2] [i_2] = var_5;
                }
                arr_26 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_9 [i_2] [i_2]))))) ? ((-(((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) ((_Bool) arr_12 [i_2] [i_2] [i_3])))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((min((min((var_6), (var_8))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (unsigned char)237))));
}
