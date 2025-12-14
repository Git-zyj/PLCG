/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154452
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) || ((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
                    var_11 &= ((/* implicit */unsigned char) (unsigned short)0);
                    var_12 = (!((!(((/* implicit */_Bool) (unsigned short)44507)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)62759)) : (arr_12 [i_3 - 1] [i_3 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 - 1] [4LL]))))))))));
                var_14 = ((/* implicit */unsigned char) arr_12 [(unsigned char)12] [i_3]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_15 += ((/* implicit */signed char) arr_21 [i_8] [i_7] [i_5]);
                            arr_25 [i_7] [i_7] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)7)) * (((/* implicit */int) (unsigned short)65521)))), ((-(((/* implicit */int) (unsigned char)76)))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) max((arr_13 [i_5]), (((/* implicit */unsigned int) min(((unsigned short)65530), ((unsigned short)0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((arr_19 [i_10] [i_9]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25451))))) && (((arr_23 [i_9]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_11] [i_12])))))))))));
                        var_18 &= ((/* implicit */int) arr_30 [(unsigned char)8]);
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        var_19 = ((/* implicit */int) arr_31 [(_Bool)1]);
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_20 [i_9])) + (((unsigned int) arr_36 [i_9] [i_10] [i_11] [4U]))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (((/* implicit */int) arr_6 [i_9] [i_9] [i_9])))))));
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_13])) % (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopSeq 2 */
                    for (int i_14 = 2; i_14 < 11; i_14 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) (((~(1224524330))) / (((((/* implicit */int) (unsigned short)23)) + (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 13; i_15 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (min((((/* implicit */unsigned char) ((signed char) arr_41 [i_9] [i_11] [i_9] [i_15]))), ((unsigned char)157)))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((/* implicit */int) arr_35 [i_14] [i_14] [i_14 - 1] [i_14 - 1])) >> (((max((arr_20 [i_14]), (((/* implicit */int) (unsigned char)187)))) - (262301777))))) | (((/* implicit */int) ((((/* implicit */int) arr_41 [i_9] [i_14 + 2] [i_14] [i_14 + 1])) != (((/* implicit */int) arr_44 [i_9] [i_9] [i_11] [i_14 + 1] [i_14]))))))))));
                        }
                        var_26 = ((/* implicit */int) (!(((((/* implicit */int) arr_41 [i_14 + 2] [i_14 - 1] [i_9] [i_14 - 1])) < (((/* implicit */int) arr_41 [i_14] [i_14 + 2] [i_9] [i_14 + 1]))))));
                        var_27 += arr_4 [i_14] [i_10] [i_14];
                    }
                    for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) min(((unsigned short)4), (((/* implicit */unsigned short) arr_41 [i_9] [i_9] [i_9] [i_11]))));
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_16])) && (((/* implicit */_Bool) (unsigned char)253)))))) ^ (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (((arr_14 [i_10]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_13 [i_11])))) || (((/* implicit */_Bool) (-(max((126976), (((/* implicit */int) (unsigned char)120)))))))));
                }
            } 
        } 
    } 
}
