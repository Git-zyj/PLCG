/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119993
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55267))) ^ (12124472450576240204ULL))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((/* implicit */unsigned long long int) ((_Bool) var_10))), (var_9)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65142)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_15)));
        var_18 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_9 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((short) arr_7 [i_0]));
            arr_10 [i_0] [i_1] = ((/* implicit */short) ((unsigned short) var_6));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_19 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1] [i_3 + 1] [i_2] [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
            arr_15 [i_1] [i_0] = ((/* implicit */signed char) (+(arr_13 [i_0] [i_1] [i_0] [i_0])));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            arr_19 [i_4] = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_0 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_0] [i_4]))) | (var_1)))));
            arr_20 [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_4] [i_4] [i_0]);
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_30 [i_7] [i_6] [i_5] [i_4] [i_0] = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
            } 
            arr_31 [i_0] = ((/* implicit */signed char) ((arr_26 [i_4] [i_4] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)51))))));
        }
        for (short i_8 = 1; i_8 < 7; i_8 += 4) 
        {
            arr_35 [i_0] [i_0] [i_8] = var_7;
            arr_36 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_8] [i_8] [i_8 - 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [i_8 + 2]))));
            arr_37 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_5 [i_8 - 1]))));
        }
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((var_15) <= (arr_39 [i_9])));
        arr_41 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) arr_38 [i_9]));
        arr_42 [i_9] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_38 [i_9]))));
    }
}
