/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138397
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
    var_10 = ((/* implicit */short) 9223372036854775804LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        var_11 = ((((/* implicit */_Bool) arr_2 [i_0 - 2])) || (((/* implicit */_Bool) var_9)));
        arr_3 [i_0 - 3] [i_0] = ((/* implicit */long long int) (short)28875);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(var_8)));
                        arr_12 [i_0 + 1] [i_1] [i_2] [i_1] [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                        arr_13 [i_0] [i_1] [i_2] [(short)9] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0] [i_1])) <= (((/* implicit */int) (_Bool)0)))) && (((var_2) <= (var_2)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        arr_21 [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_4] [i_4] [i_6]))) != (9223372036854775804LL))))) / (9223372036854775791LL)));
                        var_12 = ((/* implicit */unsigned char) -9223372036854775804LL);
                        arr_22 [i_0 - 1] [i_4] [i_4] [i_4 - 1] [i_4] [i_6] = ((/* implicit */long long int) (unsigned char)161);
                        arr_23 [i_4] [(unsigned char)1] [i_4] [(unsigned char)1] [i_0] [i_4] = ((/* implicit */int) var_9);
                        var_13 = (((+(((/* implicit */int) var_5)))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)11)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */long long int) ((arr_25 [i_7]) << (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (signed char)-107)), (var_2)))))));
        arr_29 [i_7] = ((/* implicit */int) 9223372036854775803LL);
        var_14 = ((/* implicit */unsigned int) arr_26 [(unsigned char)2] [i_7]);
        var_15 = ((/* implicit */signed char) (-(8191)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((((((/* implicit */long long int) 1048575U)) & (-9223372036854775804LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (short)17648)) : (((/* implicit */int) (short)14012)))))));
                            var_17 = ((/* implicit */unsigned char) (short)11728);
                        }
                    } 
                } 
                arr_41 [i_9] [11] [i_8] [(unsigned char)0] = ((/* implicit */unsigned char) var_8);
            }
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                arr_44 [1ULL] [i_12] [i_12] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (-14021310) : (((/* implicit */int) var_6)))) <= (var_0)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)11716)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) arr_38 [i_7] [i_8] [i_12]))))));
                            arr_51 [i_7] [5ULL] [i_12] = ((/* implicit */unsigned int) var_0);
                            arr_52 [i_7] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) arr_35 [i_8 + 2] [i_8 + 2] [i_8 - 1]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24982)) && (((/* implicit */_Bool) arr_43 [i_8 - 1] [i_8 + 1] [i_7] [i_7]))));
            }
        }
    }
}
