/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149493
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
    var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & ((~(16776960ULL))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((unsigned short) ((unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((/* implicit */int) (_Bool)1)))));
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)(-32767 - 1))), (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) ((_Bool) (unsigned short)9506))) : (arr_0 [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(621946447)))) || (((/* implicit */_Bool) ((unsigned short) 274012190U)))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_21 = ((/* implicit */_Bool) 22ULL);
                var_22 |= ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (15109977443777802019ULL) : (((/* implicit */unsigned long long int) 4294967281U)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19)))));
            }
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_10 [i_0] [(unsigned char)6] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_13))))) | (((/* implicit */int) arr_1 [i_0] [i_3]))));
            arr_11 [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_0]) <= (((/* implicit */unsigned int) 2147483647))));
            var_23 |= ((/* implicit */short) (-((+(((/* implicit */int) arr_1 [6] [i_3]))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                arr_18 [i_0] [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_5])) ? (((/* implicit */int) arr_7 [i_5] [i_4] [i_0])) : (((/* implicit */int) arr_7 [i_5] [i_0] [i_0]))));
                var_24 = ((/* implicit */_Bool) (~(arr_2 [i_0] [i_4])));
            }
            var_25 = ((/* implicit */int) (+(arr_2 [i_0] [i_0])));
            arr_19 [i_4] = ((/* implicit */int) (!(((arr_6 [i_0] [i_0] [i_4] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        }
    }
    for (int i_6 = 3; i_6 < 20; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    arr_27 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_6] [i_6] [i_6]))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((((/* implicit */long long int) arr_24 [i_7] [i_7] [i_7])), ((+((+(0LL))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 4) 
            {
                {
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_22 [i_6] [i_6 - 3] [i_6 - 3])) : (((/* implicit */int) arr_32 [i_6] [i_6 - 3] [i_6 - 2] [i_6 - 1]))))) || (((/* implicit */_Bool) (~(((int) var_9))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            {
                                arr_37 [i_12] [i_9] [i_10] [i_9] [i_12] [i_9] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)75)) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [0LL] [i_10] [2]))) == (arr_31 [i_12] [i_12] [i_10] [i_10])))) | (((/* implicit */int) (short)32767)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18028)))))));
                                var_28 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_9] [i_11] [i_10] [i_9])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32752))))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_30 [i_9] [i_10 + 4] [i_10]))))))) << (((((((/* implicit */_Bool) arr_22 [i_10 - 3] [i_9] [i_6 + 1])) ? (max((arr_33 [i_11] [i_11] [i_10] [(_Bool)1]), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [(unsigned short)19] [(unsigned short)19] [i_12])) | (((/* implicit */int) arr_21 [i_6]))))))) - (1483474881U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = 4108149587U;
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))) % (var_13)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
}
