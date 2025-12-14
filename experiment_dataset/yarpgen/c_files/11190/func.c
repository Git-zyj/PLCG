/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11190
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
    var_19 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2047)))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (unsigned short)2047))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_11)));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 23; i_1 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63478)) - (((/* implicit */int) (unsigned short)2039)))))));
            arr_7 [i_1] [5LL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) ^ (arr_5 [i_0 - 1])));
        }
        for (long long int i_2 = 4; i_2 < 23; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 2]))));
                            arr_17 [i_0] [i_0] [i_0] [i_3] [(signed char)15] [i_0] = ((/* implicit */signed char) (unsigned short)2063);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 24; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_24 [(_Bool)0] [i_3] [i_6] [20U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [15U]))));
                            arr_25 [i_3] [i_2] [0LL] [i_6] [i_7] = ((/* implicit */_Bool) (~(arr_16 [i_3] [i_0 - 1] [i_2] [i_2 - 1] [i_6 - 2] [i_7] [i_7 - 1])));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_12))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                arr_28 [(unsigned char)9] [14U] [i_2] [i_8] = ((/* implicit */unsigned short) var_0);
                arr_29 [i_0] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)63472)) ? (arr_27 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]) : (arr_15 [i_0 + 2])));
            }
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_34 [i_10] [i_9] [i_2] [(short)12] [i_10] = ((/* implicit */long long int) arr_14 [i_10] [i_9] [24LL] [i_10]);
                        var_24 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_6 [i_10])) ? (((/* implicit */long long int) arr_15 [9])) : (arr_9 [7]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2043)) && (((/* implicit */_Bool) (unsigned short)63478)))))))) > (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)2074)) + (((/* implicit */int) (unsigned short)63492)))) / (((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_10] [1LL])) : (((/* implicit */int) (unsigned short)63491)))))))));
                    }
                } 
            } 
        }
        arr_35 [(signed char)13] = ((/* implicit */long long int) var_10);
    }
    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        var_25 = ((/* implicit */long long int) var_11);
        arr_39 [18LL] [(short)9] = ((/* implicit */long long int) arr_2 [i_11]);
        var_26 = ((/* implicit */signed char) (unsigned short)63509);
        arr_40 [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63478))));
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_27 |= ((/* implicit */unsigned char) ((((((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63451))))) >= (arr_2 [i_12]))) ? (((/* implicit */int) (unsigned short)63480)) : (((((/* implicit */_Bool) (unsigned short)63492)) ? (((/* implicit */int) (unsigned short)63483)) : (((/* implicit */int) (unsigned short)63500))))));
        arr_43 [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)63471)) / (var_10))) < (((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)2049))))));
    }
    for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_19 [(signed char)6] [(_Bool)1] [(_Bool)1] [i_13]))));
        arr_46 [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)63483), (max(((unsigned short)63486), (((/* implicit */unsigned short) var_12)))))))));
    }
}
