/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127341
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
    var_12 = ((/* implicit */signed char) var_6);
    var_13 ^= ((/* implicit */short) ((((/* implicit */int) var_8)) % (((/* implicit */int) (!(var_11))))));
    var_14 = ((/* implicit */int) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_8)))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        var_15 ^= ((/* implicit */_Bool) var_10);
                        var_16 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 15; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_4])) ^ (((/* implicit */int) var_8)))) ^ (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */int) arr_1 [15U])) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_4] [(short)10] [i_1] = ((/* implicit */short) (!(var_1)));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_18 ^= arr_15 [i_0 - 1] [i_1 + 2];
                                var_19 ^= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_0] [i_1 + 1] [i_2] [i_5])))) / ((-(arr_6 [i_0] [i_1] [i_6]))))), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_7 = 3; i_7 < 8; i_7 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) arr_1 [i_8]);
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) arr_10 [i_7] [i_8] [i_9] [i_8]);
                arr_24 [i_7] [i_8] [6U] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                arr_25 [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)190))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_6)) > (var_5))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [(unsigned char)0] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
            }
            for (int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_7] [i_7 + 3] [i_7 + 2])))))));
                arr_29 [i_8] [i_10] = ((/* implicit */int) var_4);
                var_24 = ((int) ((arr_22 [i_7]) * (((/* implicit */int) var_1))));
                arr_30 [10U] [i_10] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-31571))))));
            }
            for (unsigned char i_11 = 1; i_11 < 8; i_11 += 2) 
            {
                arr_33 [i_8] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_7 + 3] [i_8] [i_11 - 1])) ? (((/* implicit */int) arr_5 [i_7 + 2] [i_7] [i_8] [i_11])) : (((/* implicit */int) arr_5 [(_Bool)1] [i_8] [i_7 + 2] [i_8]))));
                var_25 = ((/* implicit */_Bool) ((short) arr_17 [i_7 + 1]));
                var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_11 + 3] [i_11 + 1] [i_11]))));
                var_27 = ((/* implicit */signed char) (((+(arr_16 [(_Bool)1]))) - (((/* implicit */int) ((_Bool) arr_32 [9] [5U] [i_11])))));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_17 [i_7 + 2]))));
            }
            arr_34 [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [5U] [i_7 + 3] [i_8])) : (((/* implicit */int) var_2))));
            var_29 ^= ((unsigned int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7])))));
        }
        for (long long int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
        {
            arr_38 [i_12] [i_7] [i_7] = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) arr_21 [i_7 - 3])) / (arr_14 [i_7 - 3] [i_7] [i_7] [i_7] [i_12]))) + (((/* implicit */int) ((_Bool) arr_15 [i_7 - 2] [i_12]))))));
            arr_39 [i_12] [i_7] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_31 [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7 - 1])))), ((!(((/* implicit */_Bool) arr_4 [i_7] [i_12] [i_12]))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_2))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_7 + 3] [i_7 - 1] [i_7 - 2] [i_7 - 2]), (arr_5 [i_7 - 3] [i_7 + 2] [i_7 - 1] [i_7 - 3])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (unsigned char)190))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        }
        var_32 = ((/* implicit */short) min((var_32), (arr_26 [i_7] [i_7])));
        arr_42 [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)190)) / (((/* implicit */int) (unsigned char)255))));
    }
    /* vectorizable */
    for (short i_14 = 2; i_14 < 14; i_14 += 3) 
    {
        arr_45 [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)111))));
        var_33 = var_6;
        arr_46 [i_14] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
    }
    var_34 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((short) var_4)), (((short) (unsigned char)228)))))));
}
