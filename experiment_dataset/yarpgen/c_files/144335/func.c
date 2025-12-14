/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144335
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_12 *= ((/* implicit */short) arr_7 [i_0] [i_1] [i_1]);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                            {
                                var_13 = ((arr_2 [i_3] [i_2]) != (((/* implicit */long long int) arr_5 [i_2])));
                                var_14 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_0]);
                            }
                            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                            {
                                var_15 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [(unsigned char)15] [i_0])))) : ((~(arr_3 [i_2])))))), (min((arr_2 [i_0] [i_5]), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_1])), (arr_9 [i_1] [i_3] [i_5]))))))));
                                arr_17 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_1 [i_1] [(_Bool)1]);
                            }
                            var_16 = ((/* implicit */unsigned long long int) (-(((arr_4 [i_3] [i_2]) ? (((/* implicit */int) arr_11 [i_3] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_3]))))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_7 - 1]))))) && ((!(((/* implicit */_Bool) 4294967292U))))));
                            arr_22 [i_7 - 2] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_7] [i_7]))));
                            var_19 = ((/* implicit */long long int) min((arr_10 [i_7 - 2] [i_7] [i_7] [i_7 - 1]), (min((arr_10 [i_7 - 2] [i_7] [i_7] [i_7 - 1]), (arr_10 [i_7 - 2] [i_7 - 1] [i_7 + 3] [i_7 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((_Bool) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
    var_21 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_8 = 2; i_8 < 6; i_8 += 2) 
    {
        for (signed char i_9 = 2; i_9 < 8; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 3; i_11 < 8; i_11 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_13 [i_9 - 2] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9 - 1])) / (((/* implicit */int) arr_13 [i_9] [i_9] [(_Bool)1] [i_9 - 2] [i_9] [i_9 - 1] [21LL]))))))));
                        var_23 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)53914)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_23 [i_8 + 4] [i_10])) ? (((/* implicit */int) arr_21 [2LL] [(unsigned char)17] [15LL])) : (((/* implicit */int) arr_21 [i_8] [i_9] [i_11 + 2]))))))));
                        var_24 = ((/* implicit */short) ((unsigned char) arr_26 [i_11 - 2]));
                        arr_32 [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned long long int) (((!(arr_4 [i_8] [i_9 + 1]))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_8 + 1] [i_9 - 1])) : (((/* implicit */int) arr_31 [i_8 + 4] [i_9 - 1] [i_8 + 4] [i_11] [i_8 + 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_8] [i_9 - 2] [i_8 + 2] [i_9 - 2] [i_11])) >= (((/* implicit */int) arr_31 [(short)9] [i_9 - 1] [i_8 + 2] [(unsigned char)8] [i_11])))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            {
                                arr_38 [i_8 - 2] [i_8 + 1] [i_9] [i_12] [i_13] [i_8 + 1] = ((/* implicit */_Bool) arr_5 [i_8 - 1]);
                                var_25 = ((/* implicit */signed char) max((((unsigned long long int) (-(((/* implicit */int) arr_11 [i_8 + 4] [i_13]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_9 - 1] [i_8 - 1] [(signed char)2] [i_9] [i_13])) && (((/* implicit */_Bool) arr_37 [i_9 - 1] [i_8 + 3] [i_10] [i_12] [i_13])))))));
                                arr_39 [i_9] [i_13] [i_12] [i_9] [i_9] [i_9] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_12])) ? (((/* implicit */int) ((unsigned char) arr_1 [i_9 - 2] [i_8 + 4]))) : (((/* implicit */int) (_Bool)1))));
                                var_26 = ((/* implicit */short) min((((/* implicit */signed char) arr_15 [i_8] [i_9] [(signed char)9] [i_12] [i_13])), (var_1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_47 [i_8] [i_9 + 2] [i_10] [i_14] [i_15] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) arr_29 [i_8 + 2] [i_9 - 1] [i_10] [i_15]))));
                                arr_48 [i_8] [i_9] [i_8] [i_14] [i_14] [i_15] [i_15] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8 - 1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3379392288U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_9] [i_10] [i_15]))) : ((((_Bool)1) ? (var_5) : (var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
