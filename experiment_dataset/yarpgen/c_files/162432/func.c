/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162432
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
    var_14 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(unsigned short)13] = ((/* implicit */unsigned short) (short)27820);
                arr_5 [(signed char)1] [(unsigned char)1] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_1]))))));
                arr_6 [i_0] [(unsigned short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_1 [(unsigned char)4])))), ((~(((/* implicit */int) (short)27820))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-27821)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18672))))) : (arr_2 [i_0] [i_1])))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_1 [i_1])))) ? (((/* implicit */int) (short)-27820)) : (((/* implicit */int) (short)27805))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) (unsigned char)77);
        arr_11 [i_2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_6))))));
        arr_12 [(unsigned char)0] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) arr_9 [2ULL] [(unsigned char)4])) < (((/* implicit */int) arr_8 [i_2] [(unsigned char)4])))) ? (var_0) : (((((/* implicit */_Bool) arr_9 [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */int) arr_8 [(signed char)4] [(unsigned char)4])) : (((/* implicit */int) (unsigned char)32))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_3]))));
        arr_16 [(unsigned char)4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)148))));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) arr_13 [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            arr_23 [i_4] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)81))));
            arr_24 [i_5] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_18 [i_4 - 1] [i_5]))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        arr_31 [i_4] [(signed char)8] [10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5] [i_6])) / (arr_28 [i_4] [i_5] [i_4]))))));
                        arr_32 [(short)16] [(short)16] [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_18 [i_4 - 1] [i_5]) ? (((/* implicit */int) arr_18 [(_Bool)1] [(unsigned char)13])) : (((/* implicit */int) var_10))));
                    }
                } 
            } 
            arr_33 [10LL] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_19 [i_4 - 1]))))) : (arr_29 [i_4] [i_5] [i_4] [i_4] [i_5])));
        }
        arr_34 [i_4 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_29 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4]))));
    }
    var_15 = ((/* implicit */unsigned char) var_3);
}
