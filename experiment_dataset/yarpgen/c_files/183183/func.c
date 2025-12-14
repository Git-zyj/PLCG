/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183183
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0 - 4] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2147483618)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [3U] [i_1] [i_1] [i_0]))) : (arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_2]))))) >> (((/* implicit */int) min((arr_5 [i_2] [i_2] [i_0 + 1] [i_0 - 3]), (((/* implicit */unsigned char) arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 2])))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0 - 4]);
                    var_18 |= ((/* implicit */signed char) max((min((((/* implicit */int) arr_1 [i_0 - 2] [(_Bool)1])), (var_1))), (((((/* implicit */int) arr_1 [i_0 - 4] [(unsigned short)12])) & (((/* implicit */int) arr_1 [i_0 - 4] [(unsigned char)10]))))));
                    var_19 += ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [6LL])) * (((/* implicit */int) arr_6 [i_2] [i_1] [i_0 - 4]))))) && (((var_17) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)0))));
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_9 [i_3])))))) > (max((var_16), (((/* implicit */long long int) arr_10 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    var_22 += min((max((arr_15 [i_5] [i_3]), (arr_15 [i_4] [i_4]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) && (((/* implicit */_Bool) arr_15 [i_5] [i_5]))))));
                    arr_16 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) ((int) min((arr_13 [i_3] [i_5]), (arr_13 [i_5] [i_5]))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483617))));
                                arr_24 [i_3] [i_7] [15LL] [i_6] [i_3] = ((/* implicit */unsigned int) 1073741823LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [(unsigned char)10] [i_3]), (arr_20 [2U] [i_3]))))) % (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (signed char)-40)) ? (1843308046U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [(unsigned char)16] [(unsigned char)16] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3])))))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_25 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_8]))));
        arr_28 [i_8] = ((/* implicit */long long int) arr_12 [i_8]);
    }
    /* LoopSeq 2 */
    for (long long int i_9 = 3; i_9 < 12; i_9 += 1) 
    {
        arr_32 [i_9 + 2] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) max((var_11), (((/* implicit */short) arr_6 [i_9] [i_9] [i_9 + 1]))))) | (2147483632)));
        var_26 = ((/* implicit */long long int) arr_3 [i_9 + 1] [i_9]);
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_5)), (arr_0 [i_9] [i_9]))) / (min((((/* implicit */int) arr_31 [i_9])), (arr_15 [i_9 + 2] [(unsigned short)19])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_9 - 2] [i_9 - 2] [i_9 - 2])) : (((/* implicit */int) arr_6 [i_9] [15ULL] [i_9]))))) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) arr_19 [i_9] [i_9] [i_9 - 1])), (arr_29 [i_9])))))));
        arr_33 [i_9] [i_9] = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_13 [i_9 - 1] [i_9 - 3]))), (((((/* implicit */_Bool) ((arr_15 [i_9] [i_9 + 2]) << (((((-1444549628) + (1444549655))) - (27)))))) ? (-2147483610) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_28 ^= (!(((/* implicit */_Bool) arr_0 [i_10] [i_10])));
        var_29 = ((/* implicit */_Bool) var_9);
        arr_37 [12ULL] &= ((/* implicit */unsigned char) ((685912516U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_10] [i_10])) : (((/* implicit */int) var_13))));
    }
}
