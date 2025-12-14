/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173560
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
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            arr_5 [i_0] [(unsigned short)3] = ((/* implicit */unsigned short) ((((-1051860662186891047LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_1 - 4] [i_0 + 2])) - (74)))));
            arr_6 [i_0] = ((/* implicit */signed char) var_5);
            arr_7 [4LL] &= ((/* implicit */unsigned char) 4523342449899494051ULL);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29830)))))));
            arr_12 [i_0] = ((/* implicit */unsigned long long int) var_12);
            arr_13 [i_0] [i_2] = ((/* implicit */unsigned long long int) var_3);
            var_14 |= ((/* implicit */unsigned short) 8843987149198436974LL);
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (34359738367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
            arr_16 [i_3] |= ((/* implicit */unsigned short) min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned short)38066))));
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) 5957352549702531928ULL);
        }
        for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            arr_21 [i_0] [i_4] [i_0] = ((/* implicit */long long int) var_12);
            /* LoopNest 3 */
            for (unsigned int i_5 = 2; i_5 < 7; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (signed char i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) 245760U))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)8160))))), (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)27))))))), ((-(((var_5) * (var_5))))))))));
                            var_18 = ((/* implicit */unsigned int) (-((-(max((((/* implicit */long long int) 1100659288U)), (9223372036854775787LL)))))));
                            arr_30 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)128);
                            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_3)))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3] [i_4 - 1]))) + (var_2)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_8 = 2; i_8 < 9; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (signed char)2);
                        arr_42 [i_0] [1U] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_33 [i_0] [i_0 + 2] [i_0 - 2])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                for (unsigned short i_12 = 3; i_12 < 9; i_12 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [0ULL] [i_0] [i_0] [(_Bool)0]))) > (var_10))))) <= (var_13)));
                        var_22 &= ((/* implicit */unsigned long long int) (short)-662);
                    }
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_13 = 3; i_13 < 16; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                {
                    arr_59 [i_13] [i_14] = ((/* implicit */_Bool) 4523342449899494051ULL);
                    var_23 = ((/* implicit */unsigned int) (unsigned char)32);
                    var_24 -= ((/* implicit */unsigned short) (unsigned char)128);
                }
            } 
        } 
    } 
}
