/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106127
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)145)), (arr_1 [i_0] [i_1]))))) : (((5797667446829424482LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))))))))));
                var_21 ^= arr_3 [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((long long int) (~(((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_10 [i_2] [(unsigned char)2]) : (var_0))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_14 [(signed char)1] [i_4] [2] = ((/* implicit */unsigned short) (_Bool)0);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (short)30720);
                                arr_20 [i_4] [i_3] [0ULL] [i_6] = ((/* implicit */unsigned short) arr_7 [i_3]);
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) 8846591066457816951ULL);
                            }
                        } 
                    } 
                }
                arr_22 [(unsigned short)16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_2] [(signed char)6] [i_3])) : (((/* implicit */int) arr_2 [i_3])))) > (((/* implicit */int) ((short) arr_19 [i_2] [i_2] [(signed char)10])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        for (short i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            {
                arr_27 [(unsigned char)9] = ((/* implicit */unsigned char) (+(((unsigned int) max((var_11), (((/* implicit */unsigned int) 45741836)))))));
                var_24 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 11; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            {
                arr_33 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5797667446829424497LL)) ? (8547536919584193019ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30720)))));
                arr_34 [i_9] [11] [i_10] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
}
