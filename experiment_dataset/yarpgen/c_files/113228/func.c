/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113228
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1 + 3] = ((/* implicit */short) ((1302472037495957230ULL) == (((/* implicit */unsigned long long int) -7055712789358748036LL))));
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0 + 2] [i_0 + 3] [i_1])), ((+(-7055712789358748036LL)))))) ? (((/* implicit */unsigned long long int) (-(arr_4 [i_1] [i_0 - 1] [i_1])))) : (17144272036213594405ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(17433124893993890425ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-7055712789358748036LL)))))))) : (arr_9 [i_4 + 2] [i_4 - 2])));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            arr_20 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) ((arr_18 [10ULL] [i_4] [i_5] [i_6]) > ((+(arr_18 [i_6] [i_4 - 1] [i_5] [(unsigned char)2])))));
                            var_14 ^= arr_16 [i_4];
                            arr_21 [i_3] [i_5] [i_3] = 1302472037495957230ULL;
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    arr_26 [i_3] [i_4 + 3] [i_7] = ((/* implicit */unsigned char) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_4 + 2] [i_7]))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_10 [i_7]))))));
                                arr_31 [i_9] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_5 [i_4 - 2] [i_4 + 3] [i_4 - 1] [i_3]))));
                            }
                        } 
                    } 
                }
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    arr_35 [i_3] [11] [i_10] [(unsigned short)9] = ((/* implicit */short) (signed char)44);
                    arr_36 [i_10] [i_4 + 1] [i_4] [(signed char)11] = ((/* implicit */int) var_10);
                    arr_37 [0U] [i_4] [i_10] [8LL] &= ((/* implicit */short) ((((((((/* implicit */int) var_10)) >= (arr_11 [i_3] [i_4 + 3]))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 + 2] [i_4] [(unsigned short)10] [i_4 + 3]))))) == (1302472037495957230ULL)));
                }
                /* vectorizable */
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_46 [i_3] [i_4] [(unsigned char)5] [8LL] = ((/* implicit */unsigned char) ((18446744073709551615ULL) ^ (arr_18 [i_11 - 1] [i_11] [i_11 - 1] [i_11])));
                        var_17 = ((/* implicit */_Bool) (+(arr_18 [i_4 - 1] [i_4 - 2] [i_11 - 1] [i_11 - 1])));
                    }
                    for (int i_13 = 1; i_13 < 11; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] [i_14] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_3] [i_11 + 1] [i_13 + 1] [i_13 + 1] [i_14])) >= (((/* implicit */int) arr_30 [i_4 + 1] [i_11 + 1] [i_13] [i_13 + 1] [i_13 - 1]))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)9972)))))))));
                        }
                        arr_52 [i_3] [i_3] [i_4 - 2] [i_11] [i_13 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3683128197U)))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        arr_56 [i_3] [8ULL] [i_11] [i_3] [i_3] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_5))))));
                        arr_57 [i_3] [i_3] [i_4] [i_11 - 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_11]))) & (arr_9 [(unsigned short)7] [i_11 - 1])));
                    }
                    arr_58 [i_11] [10LL] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1ULL))));
                    arr_59 [i_3] [i_11 + 1] = ((/* implicit */unsigned short) (-(0ULL)));
                    var_19 = ((/* implicit */int) arr_12 [i_4 + 3]);
                }
                for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    arr_64 [i_16] [i_4] [i_3] &= ((/* implicit */short) (unsigned char)114);
                    arr_65 [0ULL] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                }
            }
        } 
    } 
}
