/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115669
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((unsigned int) (-(((unsigned int) var_10)))));
                var_13 = ((/* implicit */unsigned short) var_10);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_14 = arr_5 [i_0];
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+((-(arr_2 [i_1 + 1] [i_1]))))))));
                            var_16 = ((/* implicit */short) var_8);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)181))))))));
                                var_18 = ((/* implicit */_Bool) ((int) arr_18 [i_6] [4U] [i_6] [i_5] [i_6] [i_5 + 3] [i_5]));
                                var_19 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) var_0)))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 3) 
    {
        var_21 = ((/* implicit */_Bool) var_5);
        var_22 &= ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) arr_0 [i_7])))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 3) 
    {
        arr_27 [i_8] [i_8 + 2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */unsigned int) arr_18 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 + 2] [i_8] [11ULL])) : (arr_2 [i_8 + 1] [i_8]))));
        arr_28 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8 - 1])) ? (((int) arr_15 [i_8 + 2] [(signed char)19])) : (((/* implicit */int) ((short) arr_14 [(unsigned char)12] [i_8 + 1] [i_8 + 1] [0])))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) var_10);
        /* LoopSeq 1 */
        for (int i_10 = 1; i_10 < 20; i_10 += 3) 
        {
            var_24 = ((/* implicit */int) (_Bool)0);
            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((arr_10 [i_9] [i_10 - 1] [i_9]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) var_1)) : ((-(arr_11 [i_9] [i_10] [i_10])))));
            arr_33 [i_9] = ((/* implicit */int) arr_20 [i_9] [i_10] [i_10] [i_9] [(signed char)20] [i_10]);
        }
    }
}
