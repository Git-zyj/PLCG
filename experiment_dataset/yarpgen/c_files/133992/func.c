/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133992
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 *= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)255)))) * (arr_0 [i_0]))) * (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) (!(arr_1 [i_0]))))))));
        var_20 = ((/* implicit */short) (((-(((/* implicit */int) arr_1 [i_0])))) > (max(((-(((/* implicit */int) arr_1 [i_0])))), ((~(arr_0 [i_0])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            {
                var_21 &= ((/* implicit */long long int) (!(((((/* implicit */int) arr_2 [i_1 + 2])) > (((/* implicit */int) (unsigned char)0))))));
                arr_8 [i_2] [i_1] = ((/* implicit */unsigned char) min(((!((!((_Bool)0))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0)), (var_16)))) && (((/* implicit */_Bool) arr_5 [i_1 + 2]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 2; i_3 < 20; i_3 += 3) 
    {
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7235)) ? (((/* implicit */long long int) arr_9 [i_3 - 2] [i_3 - 1])) : (arr_10 [4ULL])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31720))))) : (((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_13 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44713))) * (arr_11 [i_3]))) * (arr_11 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) : (var_15)));
            var_23 &= ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)8))))) ? (((arr_11 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))) : (((var_5) + (arr_12 [i_4] [i_4])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_24 = ((/* implicit */_Bool) (+(((((arr_9 [i_3 - 1] [i_3]) + (2147483647))) << (((((/* implicit */int) (signed char)58)) - (58)))))));
            var_25 = arr_16 [i_3] [i_3 - 1] [i_3];
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_3] [i_3]), (((/* implicit */unsigned int) var_7))))))))));
            var_27 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)8))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)20798)) : (((/* implicit */int) (unsigned short)20820)))) : (((((/* implicit */int) (unsigned char)0)) + (arr_9 [i_3] [i_3])))))), (arr_16 [20ULL] [i_6] [i_6])));
        }
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_22 [i_7] [i_7]))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        arr_27 [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) arr_20 [i_9] [i_3 - 1]))));
                        arr_28 [i_3] [i_9] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_19 [i_3]))))));
                        var_29 = ((/* implicit */unsigned short) arr_9 [i_3] [i_9]);
                        var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -8152499174884526545LL)), (13626564116149330175ULL)));
                        arr_29 [i_3] [i_7] [i_8] [i_3] = ((/* implicit */unsigned int) arr_16 [i_3] [i_8] [i_3]);
                    }
                } 
            } 
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3427124592U)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)44738))));
            var_32 = (~(max((3384328525709231745ULL), (((/* implicit */unsigned long long int) arr_9 [i_7] [i_3 + 1])))));
        }
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3]))) : (((((long long int) (unsigned char)59)) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-28118)))))));
        arr_30 [i_3] = ((/* implicit */unsigned long long int) 2147352576);
    }
    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
    {
        var_34 *= ((/* implicit */unsigned long long int) (short)2048);
        var_35 = ((/* implicit */unsigned long long int) var_7);
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_36 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)63)) || (((/* implicit */_Bool) (unsigned short)20823)))))));
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_22 [(_Bool)1] [i_11])))))))));
    }
    var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_4))))))));
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                {
                    arr_41 [i_13] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_39 += ((/* implicit */_Bool) arr_35 [i_13]);
                }
            } 
        } 
    } 
}
