/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148244
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) (signed char)59)))) != (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_2]))));
                        arr_12 [i_0] [i_0] [(unsigned char)10] [i_0] [i_1] = ((/* implicit */short) arr_5 [i_1]);
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) var_4))));
        var_12 = ((/* implicit */short) var_7);
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+((~((~(((/* implicit */int) var_4)))))))))));
        arr_16 [(signed char)4] &= ((/* implicit */signed char) ((var_6) << (((arr_15 [(short)2]) - (1609933095U)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_14 = ((/* implicit */short) (((+(((/* implicit */int) arr_18 [i_5])))) <= (((/* implicit */int) arr_17 [i_5]))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5])) >= (((/* implicit */int) arr_17 [i_5]))));
        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (signed char)-52)))) - (((/* implicit */int) arr_18 [i_5]))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (short i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        {
                            arr_29 [i_8] [i_9] [i_7 - 1] [i_6] [i_9] = arr_24 [i_8 + 1] [i_6] [i_7 + 2];
                            var_17 -= ((/* implicit */signed char) arr_24 [i_5] [i_5] [(unsigned char)12]);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_26 [i_6] [i_6] [(unsigned char)15] [i_6]))) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_5])) <= (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [i_5] [(short)7] [i_6] [i_6])))))));
        }
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-2924)) ^ (((/* implicit */int) (unsigned char)11))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3454497183U))))))))));
}
