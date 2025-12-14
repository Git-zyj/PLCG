/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117650
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
    var_19 = var_7;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) - (4985058351184600247ULL))))));
                        var_21 &= ((/* implicit */_Bool) (((((~(var_0))) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)1)) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))) + (57604)))));
                        var_22 &= ((/* implicit */short) ((long long int) min((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (signed char)120)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    arr_14 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 2046421919U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_22 [i_0] [0U] [i_5] [(signed char)24] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) var_1))), (((long long int) arr_17 [i_6] [i_4] [(unsigned char)24] [i_0] [i_4] [i_5]))));
                                var_23 += ((/* implicit */_Bool) (signed char)121);
                                var_24 = ((/* implicit */int) min((var_24), ((-(((/* implicit */int) (signed char)-121))))));
                                arr_23 [i_0] [i_4] [i_0] [i_6] [(unsigned short)9] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_8 [(signed char)5])) ? (((/* implicit */int) (short)24576)) : (var_12))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)1)))) - (90))))) >> (((((/* implicit */int) arr_4 [i_4] [i_4] [i_0] [i_0])) + (5141)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_8 [(signed char)5])) ? (((/* implicit */int) (short)24576)) : (var_12))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)1)))) - (90))))) >> (((((((/* implicit */int) arr_4 [i_4] [i_4] [i_0] [i_0])) + (5141))) + (11688))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 4; i_8 < 21; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_8)))) >= (((int) arr_17 [i_9 + 2] [i_8 + 3] [i_8] [i_8] [i_4] [i_0]))));
                                arr_28 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? ((~(((/* implicit */int) var_9)))) : (2147483647)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [i_8 + 4] [i_8] [i_5] [i_0] [i_0]))) & (16920968132413109805ULL))) : (((((/* implicit */_Bool) ((var_13) | (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) var_0)) : ((~(var_10)))))));
                                var_26 &= ((/* implicit */long long int) 1ULL);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) ((unsigned short) (signed char)-119));
                    arr_29 [i_0] [(unsigned char)22] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)3694)) >= (((((/* implicit */int) var_14)) + (((/* implicit */int) arr_2 [i_0] [i_4]))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 1) 
    {
        for (long long int i_11 = 4; i_11 < 13; i_11 += 4) 
        {
            {
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((long long int) arr_0 [i_10 + 2])) < (((/* implicit */long long int) ((((((/* implicit */int) (short)-3134)) + (2147483647))) >> (((/* implicit */int) (unsigned short)5))))))))));
                arr_36 [i_10] [i_11] = ((/* implicit */long long int) (-(2091189383)));
                arr_37 [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((2091189383) ^ (-2147483637))))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned short)65533))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1011351545))))) : (((/* implicit */int) (short)-32767)))) : (min((((((/* implicit */_Bool) (short)30903)) ? (var_17) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_27 [i_10] [i_11] [i_11] [i_10]))))));
            }
        } 
    } 
    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) var_5)), (var_18))), (((/* implicit */long long int) max((var_14), (var_1)))))))));
}
