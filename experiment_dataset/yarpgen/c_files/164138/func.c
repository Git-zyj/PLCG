/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164138
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_5))))))), (var_9)));
    var_17 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = arr_4 [i_0] [i_2];
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [6LL] = ((/* implicit */unsigned char) arr_5 [i_1] [i_3] [i_4]);
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((arr_3 [9]) * (((/* implicit */int) var_10))));
                            var_18 = ((/* implicit */int) 19U);
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_1] [i_2] [i_1] [i_1]);
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21203))) | (var_11));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((2556183224U) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                            arr_21 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((var_0) <= (((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]))));
                        }
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_2] [i_2] [3ULL] = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_1] [i_2]) + (((/* implicit */int) arr_11 [(short)6] [i_1] [i_2] [i_2] [10ULL] [i_6]))));
                            arr_26 [i_0] [i_0] [i_2] [i_3] [(_Bool)1] = ((/* implicit */int) (unsigned char)126);
                            var_19 = ((/* implicit */signed char) (unsigned short)65525);
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_6);
                            var_21 = ((/* implicit */unsigned char) var_12);
                            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]))));
                        }
                    }
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_28 [i_0]);
                        var_23 = ((/* implicit */short) var_7);
                    }
                    for (unsigned char i_9 = 3; i_9 < 23; i_9 += 1) 
                    {
                        arr_37 [i_9] [i_9] [i_9] [i_9] [i_9 - 3] = ((/* implicit */signed char) arr_4 [i_9 + 1] [i_9 - 2]);
                        var_24 = ((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1]) : (((/* implicit */int) arr_0 [i_1])));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        arr_41 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)65525));
                        var_25 = ((((/* implicit */_Bool) (unsigned char)116)) || (((/* implicit */_Bool) 13489804004912948883ULL)));
                    }
                    var_26 = ((/* implicit */long long int) (unsigned char)121);
                }
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8388352U)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)10))));
                var_28 = ((/* implicit */unsigned long long int) min(((unsigned short)10), (((unsigned short) ((((/* implicit */int) (unsigned short)10)) << (((/* implicit */int) (signed char)12)))))));
            }
        } 
    } 
}
