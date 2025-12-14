/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11902
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) var_6);
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((var_4) ? (((/* implicit */int) arr_3 [i_3] [i_0] [i_0])) : (((/* implicit */int) (signed char)-100)))) : (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1)))) || ((!(((/* implicit */_Bool) var_8))))));
                    }
                    for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((8) * (((/* implicit */int) (_Bool)0)))))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = (~(var_1));
                        arr_14 [i_1] [i_4] [(signed char)3] [i_4 + 2] = ((/* implicit */_Bool) ((unsigned char) (signed char)-14));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((unsigned short) var_11)));
                                var_19 = ((/* implicit */unsigned int) (-(9)));
                                var_20 = ((/* implicit */long long int) var_5);
                                arr_20 [i_5] [i_5] [(short)1] [i_1] [i_5] [(unsigned short)20] [10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_9)) + (31)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((604307272U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */int) var_4);
        var_22 = ((/* implicit */long long int) 1048575U);
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_7] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */long long int) arr_7 [i_8] [i_7] [i_7]))))) : (18014398241046528ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_8] [i_8] [0] [i_8])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (int i_10 = 2; i_10 < 21; i_10 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_29 [i_10 - 2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_29 [i_10 + 1]))))) ? (((unsigned long long int) min((((/* implicit */long long int) var_1)), (var_12)))) : (((/* implicit */unsigned long long int) min((var_14), ((+(((/* implicit */int) var_9)))))))));
                            var_25 = ((/* implicit */_Bool) arr_16 [i_10] [i_9]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) ((short) ((604307272U) % (((/* implicit */unsigned int) var_6)))))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (((((/* implicit */long long int) 2918502602U)) ^ (arr_5 [i_11] [i_11])))))))))));
                    arr_42 [i_11] [i_12] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54713))) + (((((/* implicit */unsigned int) arr_7 [i_11] [i_12] [i_11])) ^ (min((((/* implicit */unsigned int) var_7)), (2915555359U)))))));
                    var_27 = ((/* implicit */signed char) var_12);
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) var_13);
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_12] [i_12])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) >> (((4055665961U) - (4055665953U)))));
                            }
                        } 
                    } 
                }
                var_30 = (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) arr_25 [i_11] [i_12])) : (((/* implicit */int) arr_36 [i_11] [i_12] [i_12]))))) * ((-(arr_22 [i_12]))))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) var_14);
}
