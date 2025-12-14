/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136495
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
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) var_5)), (((((/* implicit */int) (unsigned short)36472)) + (((var_2) ? (((/* implicit */int) (_Bool)0)) : (var_9)))))));
    var_17 = ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13))))))) : (((/* implicit */int) ((_Bool) var_2))));
    var_18 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                {
                    var_21 = ((_Bool) (short)-26409);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [23])) ? (min((((/* implicit */long long int) (+(-1595118358)))), (((((/* implicit */_Bool) arr_11 [i_5] [i_4] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0]))))) : (((/* implicit */long long int) (+(arr_13 [i_5 - 1] [i_0] [i_5 + 1] [i_5 - 1] [i_5 - 3] [i_0] [i_5]))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [(unsigned char)14] [i_0] [(unsigned char)14] [i_4]);
                                arr_15 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */short) arr_13 [i_5] [i_0] [20U] [(unsigned short)5] [i_1] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                {
                    arr_19 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) (-(arr_1 [i_1])));
                    var_23 = ((/* implicit */short) ((((_Bool) var_13)) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (arr_17 [i_0] [i_1] [i_6]) : (arr_17 [i_0] [i_0] [i_0]))) : (((((arr_17 [(_Bool)1] [i_1] [(_Bool)1]) + (2147483647))) << (((((arr_17 [i_6] [i_1] [i_0]) + (24330191))) - (10)))))));
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))));
                    var_25 = ((/* implicit */unsigned int) (-((+(((((/* implicit */int) (signed char)-13)) * (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))))));
                    arr_20 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) (unsigned short)36120)));
                }
                for (short i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_7] = ((/* implicit */long long int) 1438911775373190937ULL);
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_10))));
                }
                var_27 = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_28 = ((/* implicit */short) arr_2 [i_0]);
            }
        } 
    } 
}
