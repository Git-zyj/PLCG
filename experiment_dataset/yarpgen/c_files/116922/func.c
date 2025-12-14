/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116922
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
    var_13 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_14 = (!(((/* implicit */_Bool) (~(arr_1 [i_0])))));
        arr_3 [10LL] [10LL] |= ((/* implicit */long long int) (-((+(arr_1 [20ULL])))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (((/* implicit */int) (_Bool)1)) : ((+(((((/* implicit */int) var_6)) | (arr_1 [i_1])))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(((arr_2 [4U]) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) arr_2 [24U])))))))));
        var_16 = ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))))), (arr_5 [i_1] [i_1]))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_0 [i_1])))) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])) : (arr_10 [i_2]))) << (((/* implicit */int) arr_2 [(unsigned short)4]))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_18 &= ((/* implicit */_Bool) ((arr_18 [i_5] [i_3] [i_4] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_4])))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_6 [i_3]))) || (((/* implicit */_Bool) arr_9 [i_5]))));
                        arr_21 [i_2] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */signed char) arr_14 [i_3]);
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) arr_13 [i_3] [i_5]))));
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                            arr_26 [i_2] [i_2] = ((/* implicit */unsigned char) arr_19 [i_2] [i_5] [i_4] [i_5]);
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_30 [i_3] [i_4] [i_5] [i_5] &= ((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_2] [(_Bool)1] [i_2] [(unsigned char)5])) + (2147483647))) << (((((((/* implicit */int) arr_16 [i_7] [i_3] [i_4] [i_5])) + (22401))) - (22)))));
                            arr_31 [i_2] [i_2] [i_2] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) arr_5 [i_5] [i_5]);
                            arr_32 [i_2] [i_4] [(unsigned char)13] = ((/* implicit */unsigned short) ((long long int) arr_19 [i_7] [i_5] [(short)2] [(short)2]));
                            var_22 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)90)))));
                        }
                    }
                } 
            } 
        } 
    }
    var_23 = var_12;
}
