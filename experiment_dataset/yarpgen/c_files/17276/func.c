/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17276
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
    var_16 &= ((/* implicit */signed char) ((((/* implicit */int) ((2805548132220819075ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) - ((-(((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) 95077592);
        var_18 &= ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_1 [i_0])))) * ((-(((/* implicit */int) (unsigned char)63))))))) - (max((((/* implicit */unsigned long long int) min((arr_1 [3]), ((short)511)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) * (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 8; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_1 - 4] [i_2 + 2] [i_2]);
                    arr_13 [i_1 - 1] [i_1] [i_1] [2LL] = ((/* implicit */_Bool) ((arr_10 [i_1 - 4] [i_2 + 2]) / (arr_10 [i_1 - 4] [i_2 + 2])));
                    arr_14 [i_3] [i_2] [i_3] [8LL] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) + (((((/* implicit */long long int) -399132782)) / (arr_9 [i_1 - 1] [i_2] [i_3])))));
                    var_19 -= ((/* implicit */unsigned char) ((((arr_5 [i_1] [i_1] [i_3]) - (((/* implicit */int) arr_4 [(_Bool)1])))) - (((/* implicit */int) (unsigned short)1))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                        {
                            {
                                arr_20 [i_1 + 3] [i_4] = ((/* implicit */int) (signed char)-82);
                                var_20 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_1] [i_2] [i_1 + 2] [i_1 + 2])) & (((/* implicit */int) ((95077589) >= (((/* implicit */int) (unsigned char)193)))))));
                                arr_21 [i_1] [i_1] [i_3] [5LL] [i_5] [i_5] = ((int) arr_4 [i_3]);
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [(signed char)2] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [i_1 - 3] [i_2 + 2] [i_3] [i_2 + 2]));
                                var_21 += ((/* implicit */long long int) arr_15 [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 + 3])) != (((/* implicit */int) (unsigned char)195))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_23 ^= (!(((/* implicit */_Bool) ((arr_9 [i_1 - 1] [i_6] [i_6]) % (arr_16 [i_1 + 1] [i_6 - 2] [i_6 - 1])))));
            /* LoopSeq 1 */
            for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                arr_29 [i_1] [i_6 + 1] [i_6] [i_7] &= ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)58))))));
                var_24 = ((/* implicit */unsigned int) arr_0 [i_6 + 1]);
                var_25 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_1 - 1] [i_6 + 1])) - (((/* implicit */int) arr_8 [i_1] [0LL] [i_1]))))) * (18446744073709551606ULL)));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) ((short) arr_7 [i_7] [i_7 + 1] [i_7]))) - (((/* implicit */int) (signed char)74)))))));
                arr_30 [i_1] [i_1] [i_6 - 2] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
            }
            arr_31 [i_1 - 1] [i_6] = ((/* implicit */unsigned long long int) (-(arr_24 [i_1 - 4] [i_6 - 2])));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (+(95077592))))));
        }
        arr_32 [i_1] = ((/* implicit */signed char) arr_8 [i_1] [i_1 + 1] [i_1]);
        arr_33 [i_1] = ((/* implicit */unsigned char) -95077593);
    }
    var_28 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        for (int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 6; i_10 += 4) 
            {
                {
                    var_29 *= ((/* implicit */signed char) (((-(((((/* implicit */int) (unsigned char)61)) * (((/* implicit */int) (short)8505)))))) - ((+(((/* implicit */int) ((short) (unsigned char)79)))))));
                    var_30 += ((/* implicit */signed char) arr_36 [i_8] [i_9]);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) (unsigned char)60);
}
