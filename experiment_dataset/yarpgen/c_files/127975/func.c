/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127975
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])));
        var_12 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [2LL])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_0] [(unsigned short)2]))))) <= (((unsigned int) var_9))));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (7ULL))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 7; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [8ULL] [8ULL] [i_4] [i_6]))) == ((-(arr_20 [i_4])))));
                    var_16 ^= ((/* implicit */int) 0ULL);
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (_Bool)1))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (arr_19 [i_4] [i_5 - 2])));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) (short)-1)) > (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_7 = 1; i_7 < 7; i_7 += 1) 
        {
            for (long long int i_8 = 3; i_8 < 9; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_31 [i_9] [i_7] [i_4] [i_9] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((arr_20 [i_4]) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (0ULL)))));
                        arr_32 [i_4] [i_7 + 3] [i_4] [i_9] = (-(((((/* implicit */_Bool) arr_30 [i_4] [i_7 + 2] [i_4] [i_4])) ? (((/* implicit */int) arr_21 [i_4] [i_7 + 1] [i_7 + 1] [i_7 + 1])) : (arr_8 [i_4] [(short)5] [i_9]))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
}
