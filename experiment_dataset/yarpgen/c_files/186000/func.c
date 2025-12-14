/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186000
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
    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_11)) - (108)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((var_9), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((min((var_2), (var_1))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [(unsigned char)4])) : (((/* implicit */int) arr_1 [i_3]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [(signed char)10] [(signed char)10] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_2])))) : (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1 - 4] [(short)7] [i_1 - 4])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1 - 3] [i_2] [i_3]))))));
                            var_16 = arr_4 [i_0] [i_0 + 1] [(_Bool)1];
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)236)))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_2] [i_1]))) * ((-(18446744073709551615ULL)))));
                                var_19 = ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]);
                            }
                            for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                            {
                                arr_15 [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */short) min(((unsigned char)236), ((unsigned char)220)));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5] [i_0 + 1] [i_0 - 1] [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_0 + 1] [i_0 - 1] [i_0] [i_5])))))) : (((((/* implicit */_Bool) var_3)) ? (arr_13 [i_5] [i_5] [i_0 + 1] [i_0] [i_5]) : (arr_13 [i_5] [i_0] [i_0 + 1] [i_0] [i_5])))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_0])))))));
                                arr_16 [i_0] [(short)9] [i_2] [i_5] [i_5] = ((/* implicit */short) var_1);
                            }
                            for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (((/* implicit */int) arr_1 [i_1 - 1]))))) && (((/* implicit */_Bool) min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 1]))))));
                                var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)35))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_13)), (arr_3 [i_0]))))));
                            }
                            arr_20 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) arr_3 [i_0 - 1]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (short)19844)) : (((/* implicit */int) (short)32767)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) var_11);
                    var_27 = ((/* implicit */_Bool) min((var_27), (((arr_17 [i_0 + 1] [i_0 - 1] [i_0] [(_Bool)1] [(_Bool)1]) || (((/* implicit */_Bool) arr_19 [i_0] [i_0 - 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 4; i_8 < 8; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_28 = (unsigned char)215;
                                var_29 = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_1] [(short)2] [i_8] [(signed char)1] [(signed char)1]);
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 1] [i_7] [i_0] [i_0] [i_0]))) != (arr_24 [i_0] [i_0] [i_7] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_12);
}
