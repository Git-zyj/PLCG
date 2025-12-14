/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155260
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-115)) < (((/* implicit */int) (unsigned char)120))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) var_2);
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = arr_4 [i_4] [i_2] [i_2] [i_0];
                            arr_14 [i_4] [i_3] [i_2] [(signed char)4] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                            var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((2049583932U) * (((/* implicit */unsigned int) -1993146966))))) ? (((/* implicit */int) max((arr_2 [i_2] [i_0] [i_0]), (((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [(signed char)14] [(signed char)14] [i_0] [i_0]))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))) / (((((-1581875283) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) (short)-22901))))))));
                            var_16 ^= ((/* implicit */long long int) ((_Bool) 15005581170906604383ULL));
                        }
                    } 
                } 
            } 
            var_17 ^= ((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_1] [i_0] [(unsigned short)8] [i_0] [i_0]), (((/* implicit */unsigned short) max((arr_2 [i_1] [i_0] [i_0]), (((/* implicit */short) var_5)))))));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    arr_21 [i_5] [i_5] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) ((2810561267U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))))) + (((/* implicit */int) (_Bool)1))))));
                    var_18 ^= ((/* implicit */unsigned short) arr_20 [i_0] [i_5] [i_6]);
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_6] [i_7])) || (((/* implicit */_Bool) ((((long long int) (signed char)-115)) & (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        arr_24 [i_0] [i_5] [i_0] [i_5] [i_6] [(signed char)12] &= ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_16 [i_7] [i_5])) > (((/* implicit */int) arr_16 [i_0] [i_5])))));
                        var_20 = var_3;
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            arr_27 [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_5] [i_6] [i_6] [i_7] [i_7]);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((arr_18 [i_0] [8]) ^ (((/* implicit */long long int) 0U)))) > (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [(short)6] [i_7] [i_6] [(unsigned char)7] [i_0])))));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_31 [i_0] [i_0] [1LL] [1LL] [i_6] [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3758096384U))) + (((/* implicit */unsigned int) ((int) arr_11 [i_0] [i_0] [i_6] [i_7] [i_9] [i_7] [i_5])))))) || (arr_17 [i_0] [i_6] [i_0])));
                            arr_32 [i_0] [i_5] [i_6] [i_0] [i_5] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) + (3758096384U)))), (var_6));
                            var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_9] [i_5] [i_5] [i_5]) : (arr_4 [i_0] [i_6] [17] [17]))));
                        }
                        arr_33 [i_0] [i_5] [12] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_25 [i_7] [i_6] [i_6] [(short)9] [17U] [i_0])) - (((((/* implicit */_Bool) (unsigned short)17864)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) : (10911757972009141572ULL)))));
                    }
                    var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)27881)) : (((((/* implicit */_Bool) 536870912U)) ? (arr_25 [i_0] [i_0] [i_5] [i_5] [i_6] [i_0]) : (((/* implicit */int) (unsigned char)166)))))));
                    var_23 *= ((/* implicit */unsigned char) (unsigned short)37654);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (+(arr_6 [i_10]))))) > (((/* implicit */int) (signed char)114))));
        var_25 *= ((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_10]);
        arr_38 [i_10] = ((/* implicit */signed char) min(((~(max((var_4), (arr_22 [i_10] [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_10] [i_10] [i_10] [i_10] [i_10] [(_Bool)1] [i_10])) / (((/* implicit */int) arr_26 [i_10] [i_10] [9] [i_10] [i_10] [14ULL])))))));
        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)121))));
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned char) arr_4 [4ULL] [4ULL] [i_10] [i_10]);
    }
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (_Bool)1))));
}
