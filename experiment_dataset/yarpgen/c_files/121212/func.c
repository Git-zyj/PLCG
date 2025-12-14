/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121212
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
    var_15 = ((/* implicit */_Bool) var_14);
    var_16 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */unsigned long long int) var_14)) & (var_4))) : (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) & (var_4)))));
                        var_18 -= ((((/* implicit */unsigned long long int) var_3)) < (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4))));
                        arr_10 [11U] [12LL] [i_1] = ((/* implicit */_Bool) var_7);
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) (-(((unsigned int) var_14))));
                            var_20 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 - 2])) : (arr_3 [i_1] [i_1]));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : ((~(var_2)))));
                            var_22 = ((/* implicit */int) var_4);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_15 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_3 [8LL] [8LL])))) ? (var_14) : (((/* implicit */int) (!(var_1)))))))));
            arr_16 [i_0] [i_5] = ((/* implicit */unsigned int) var_13);
            var_24 = ((/* implicit */unsigned char) arr_7 [i_0 + 1] [(unsigned short)8] [i_5] [i_0]);
        }
        for (short i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            var_25 = ((/* implicit */long long int) var_11);
            arr_19 [i_6] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_12)))));
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (arr_24 [i_8] [15ULL] [i_8]) : (((/* implicit */long long int) var_11))))));
            arr_25 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_8])) ? (var_4) : (((/* implicit */unsigned long long int) (+(arr_24 [i_8] [i_7] [i_7]))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))) : (((/* implicit */int) ((_Bool) var_6))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                {
                    var_28 += ((/* implicit */int) ((((arr_29 [i_7] [(short)16]) ? (((/* implicit */unsigned long long int) var_14)) : (((unsigned long long int) arr_29 [(_Bool)1] [i_7])))) >> (((/* implicit */int) ((unsigned char) ((var_4) - (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7] [i_7]))))))));
                    var_29 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) arr_29 [i_7] [i_9]))))) ? (((var_10) ? (((/* implicit */unsigned long long int) var_14)) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_14))))))));
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        arr_34 [i_11] = ((/* implicit */unsigned char) var_12);
        arr_35 [i_11] = ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) var_13)) ? (((arr_22 [i_11] [i_11] [i_11]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_11] [i_11] [i_11] [(_Bool)1] [(unsigned char)12]))));
    }
    var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) + (((/* implicit */int) var_1))))))))) : (((((/* implicit */unsigned int) var_14)) + (((var_5) - (var_12)))))));
    var_31 = ((/* implicit */_Bool) var_5);
}
