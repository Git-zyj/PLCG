/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114262
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
    var_10 *= ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (var_5)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = max(((-9223372036854775807LL - 1LL)), (-9223372036854775803LL));
        arr_3 [i_0] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_1)), (arr_0 [i_0] [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) var_6);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) 9223372036854775807LL));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_16 [i_1] [i_3] [i_4 - 1] [i_5] = ((/* implicit */unsigned int) arr_7 [i_1] [i_2] [i_4 - 1]);
                            var_12 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ^ (arr_5 [i_3])))));
                            arr_17 [i_1] [i_2] [i_3] [i_4 - 1] [i_5] = ((/* implicit */unsigned int) arr_10 [i_1] [i_3] [i_4 - 1]);
                            arr_18 [i_1] [i_2] [i_5] [i_4 - 1] [i_5] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((var_3) >= (((/* implicit */unsigned long long int) arr_14 [i_4 - 1] [i_2] [i_1] [i_4 - 1] [i_5] [i_4 - 1] [i_2]))))), (((unsigned short) ((long long int) var_7)))));
                            var_13 = ((/* implicit */unsigned char) 333496632U);
                        }
                        arr_19 [i_1] [i_3] [i_3] [i_4 - 1] = (short)-22142;
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 4; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) arr_9 [i_3] [i_2]);
                        arr_23 [i_3] [i_6 + 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_6 - 4] [i_3] [i_6 - 1]))) != (arr_9 [i_1] [i_6 - 1])));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [i_6 - 3] [i_6 - 1])) % (((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_6 - 2] [i_2] [i_3]))));
                    }
                    for (unsigned short i_7 = 4; i_7 < 18; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            arr_29 [i_1] [i_2] [i_3] [i_3] [i_8 - 3] [i_8 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_1] [i_7 - 1] [i_8 - 2] [i_8 - 2] [i_3] [i_8 + 1])) | (((/* implicit */int) var_9))));
                            var_15 = ((/* implicit */signed char) var_5);
                            var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_3] [i_1]))) | (arr_14 [i_1] [i_2] [i_2] [i_3] [i_3] [i_7 + 1] [i_8 - 3])));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_32 [i_2] [i_3] [i_7 - 3] [i_9] = ((/* implicit */signed char) ((arr_14 [i_3] [i_3] [i_7 + 1] [i_7 + 2] [i_7 - 3] [i_7 - 3] [i_7 - 4]) << (((arr_14 [i_2] [i_3] [i_3] [i_7 - 2] [i_7 + 2] [i_7 + 1] [i_7 - 4]) - (1217962502061758433LL)))));
                            var_17 = arr_25 [i_1] [i_7 - 3] [i_3] [i_7 + 1];
                            arr_33 [i_1] [i_2] [i_3] [i_7 + 2] [i_9] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7 - 2] [i_3] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 - 3])) >> (((((/* implicit */int) arr_30 [i_7 - 1] [i_3] [i_7 - 1] [i_7 + 2] [i_7 - 4] [i_7 - 1])) - (60032)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7 - 2] [i_3] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 - 3])) >> (((((((/* implicit */int) arr_30 [i_7 - 1] [i_3] [i_7 - 1] [i_7 + 2] [i_7 - 4] [i_7 - 1])) - (60032))) + (48203))))));
                            arr_34 [i_1] [i_2] [i_3] [i_3] [i_7 - 2] [i_3] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_6 [i_7 + 1])) * (arr_5 [i_1])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) arr_27 [i_10 - 3] [i_7 - 2]);
                            arr_37 [i_1] [i_2] [i_3] [i_7 + 1] [i_10 + 1] [i_10 - 2] [i_3] = ((/* implicit */signed char) (_Bool)0);
                        }
                        arr_38 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) arr_28 [i_1] [i_2] [i_3] [i_3] [i_7 - 1] [i_7 - 1]);
                        arr_39 [i_1] [i_3] [i_3] [i_7 - 2] [i_1] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                    }
                    arr_40 [i_1] [(unsigned char)12] [i_3] |= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_24 [i_1] [i_2] [i_3] [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] [i_3])))))));
                    var_19 = ((/* implicit */signed char) var_5);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) var_0);
    }
    var_21 = ((/* implicit */unsigned short) ((11ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
