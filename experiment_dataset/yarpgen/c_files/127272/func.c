/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127272
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_2))))))), (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (signed char)-32);
                                var_19 = ((/* implicit */signed char) ((unsigned short) var_15));
                                var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_1] [i_1 + 1] [i_1]));
                            }
                        } 
                    } 
                    var_21 = ((((max((arr_2 [i_1] [0ULL]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2])))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 - 2] [i_1]))))) && (((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned short)29447)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */short) var_11);
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (max((arr_0 [i_2]), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned long long int) (~((-(arr_4 [9ULL] [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))) - (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    arr_22 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_7]))) : (arr_6 [i_0 - 1] [i_1 + 1]))) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_0 + 1])))))), ((-(((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0])))))))));
                    arr_23 [3ULL] [i_1] [(signed char)7] [i_7] = ((/* implicit */unsigned short) var_11);
                    var_23 = ((/* implicit */short) arr_21 [i_0] [i_0] [(_Bool)1]);
                    arr_24 [5ULL] [i_1 - 1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned short)29446))))))) : (((/* implicit */int) var_1))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]))))))));
                        arr_27 [i_0] [i_1] [i_1] [i_7] [(unsigned char)3] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_1];
                        arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_14);
                    }
                    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) arr_9 [i_0 + 1] [i_1 - 1] [i_7] [i_7] [i_1])), (((((/* implicit */_Bool) (unsigned short)29447)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_15)) || (arr_14 [i_0 + 2] [i_9 - 2] [i_1 - 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_27 += ((arr_0 [i_0]) <= ((-(var_3))));
                        arr_35 [i_0] [i_10] [i_7] [2LL] |= ((/* implicit */_Bool) ((int) ((short) arr_10 [i_0 + 1] [i_0] [i_1] [i_7] [i_7] [i_10])));
                    }
                }
                var_28 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (var_11)))) ? (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43839))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1 - 1]))))));
                arr_36 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((signed char) max(((_Bool)1), ((_Bool)1))))), ((~(((/* implicit */int) arr_17 [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0] [i_1]))))));
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_1), (((/* implicit */short) var_16))))) : (((/* implicit */int) (_Bool)1)))))));
}
