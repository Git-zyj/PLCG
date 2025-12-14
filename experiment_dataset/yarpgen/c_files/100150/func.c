/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100150
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((arr_3 [i_0] [i_0] [i_0]) & (((/* implicit */int) var_14))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [i_2])), (arr_6 [i_0] [i_2] [i_2]))))))));
                    arr_11 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) | (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [(unsigned char)4] [(unsigned short)14])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) (+(min((1639754842), (((/* implicit */int) (short)-19783))))));
                        arr_15 [i_1] [i_1] = ((((/* implicit */_Bool) min((arr_14 [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]), (arr_14 [i_1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))) ? ((+((~(var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(var_14))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [i_0]))) != (var_8))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_20 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0]))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_7))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_24 [i_1] [i_1] [i_1] [5ULL] = (+(((((((/* implicit */int) arr_7 [i_5] [i_2] [i_1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_2] [0ULL] [i_2] [i_2])) + (2429))))));
                        var_19 ^= (((~(32767U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (arr_4 [10LL]))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            arr_36 [i_9] [i_6] [i_6 + 2] [14ULL] [i_6 + 2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_0] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_6]))))) ? (((((/* implicit */int) arr_25 [i_9] [i_9])) >> (((((/* implicit */int) arr_25 [i_9] [i_9])) - (17122))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_6 + 2]))) >= (32767U))))));
                            var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) 1048958540U))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_19 [i_7] [(short)6] [i_7] [i_9])))), (((/* implicit */int) var_1))));
                        }
                        var_21 = ((/* implicit */signed char) ((min((min((var_15), (((/* implicit */unsigned long long int) arr_32 [i_6] [i_6])))), (((/* implicit */unsigned long long int) var_1)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_8]))) - (arr_18 [i_8] [(unsigned short)10] [i_6] [i_0]))))))));
                        var_22 *= ((/* implicit */unsigned char) min((((arr_18 [i_6] [i_6 + 1] [i_6 + 1] [7ULL]) >= (((/* implicit */unsigned long long int) 4294934522U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (arr_18 [i_6] [i_6 + 1] [i_6 + 1] [i_6])))));
                    }
                } 
            } 
        } 
    }
    var_23 += ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_10 = 2; i_10 < 13; i_10 += 3) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_10 - 2] [i_10] [i_10 + 1] [(short)8]), (arr_7 [i_10] [i_10] [i_10] [i_10]))))) > (var_12)));
        arr_40 [i_10 + 1] [i_10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_4));
        var_25 *= ((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) arr_28 [0U] [i_10])) : (((/* implicit */int) var_10))))), (arr_12 [0U]))), (((((((/* implicit */_Bool) 10107757960219131181ULL)) ? (32762U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27457))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        var_26 = ((/* implicit */short) var_3);
    }
}
