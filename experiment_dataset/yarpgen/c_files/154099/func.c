/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154099
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
    var_14 = ((/* implicit */unsigned int) (~(((((((/* implicit */unsigned int) var_2)) > (var_10))) ? (((((/* implicit */_Bool) (short)26810)) ? (-6716281063139990876LL) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)7907)), (var_11))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 + 1])) : (var_1))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)7907)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (unsigned short)57607)))) & ((+(((/* implicit */int) (unsigned short)224)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)57627)) != (((/* implicit */int) arr_0 [i_0] [i_0]))))), ((unsigned short)65326))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2])) & (arr_1 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65311))) : (max((arr_7 [i_2] [i_1 + 2] [i_0 + 1]), (((/* implicit */unsigned int) arr_1 [(unsigned short)8] [i_2]))))))));
                    var_16 = ((/* implicit */int) var_0);
                }
            } 
        } 
        var_17 = ((/* implicit */short) var_6);
    }
    var_18 |= ((/* implicit */signed char) (unsigned char)169);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 19; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_10 [i_3] [i_3]))));
                    var_20 -= ((/* implicit */short) ((_Bool) ((arr_11 [i_3]) < (((/* implicit */long long int) var_0)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (signed char i_8 = 3; i_8 < 18; i_8 += 3) 
                {
                    {
                        var_21 += ((/* implicit */unsigned int) arr_18 [i_3] [i_6 - 1] [(unsigned short)14]);
                        arr_25 [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_8 + 2] [i_8 - 1] [i_3])) ? (((/* implicit */int) arr_18 [i_3] [i_8 - 1] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_8 + 2] [i_3]))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_3] [i_6 + 2])) ? (arr_21 [i_3] [i_6 - 1]) : (arr_21 [i_3] [i_6 + 1])));
                    }
                } 
            } 
            var_23 = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_19 [i_3] [i_6] [i_3])) ^ (arr_24 [i_6]))));
            arr_26 [(unsigned char)6] [i_3] = ((/* implicit */unsigned char) var_5);
            var_24 = ((((/* implicit */_Bool) arr_21 [i_3] [i_3])) ? (arr_21 [i_3] [i_3]) : (arr_21 [i_3] [i_3]));
            var_25 = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_19 [i_3] [i_6 + 1] [i_6 - 1])) - (((/* implicit */int) var_4)))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_29 [i_3] [(short)8] &= ((/* implicit */unsigned short) arr_24 [i_3]);
            var_26 = ((/* implicit */signed char) arr_24 [i_9 - 1]);
            var_27 |= ((/* implicit */_Bool) var_7);
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_19 [6] [6] [6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7908))))) : (((/* implicit */int) arr_13 [0LL])))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        var_29 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [6]))) / (arr_7 [i_10] [i_10] [i_10])));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10])) ? (arr_12 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7927)))));
        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
        var_32 += ((/* implicit */int) var_6);
    }
}
