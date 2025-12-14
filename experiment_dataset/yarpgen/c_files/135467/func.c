/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135467
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned short) arr_1 [i_0 + 2]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [(signed char)11] [i_0 - 1]);
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] [i_1 + 3] = ((/* implicit */short) (+((+(((/* implicit */int) arr_5 [i_1 + 3] [18LL]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 4])) ? (8681102732324673510ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [14ULL] [i_1])))))));
                    var_21 -= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) (unsigned short)7936)))) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1] [(signed char)3])))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(unsigned char)3] [i_2] [i_1])) ? (((/* implicit */int) ((signed char) (unsigned short)1110))) : (((((/* implicit */_Bool) (unsigned short)64425)) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_2] [(signed char)17])) : (((/* implicit */int) (signed char)14)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_20 [i_1] [(short)4] [i_4] [i_5] [i_6] &= max(((+(((/* implicit */int) arr_5 [i_1] [i_1 + 4])))), ((~(((/* implicit */int) arr_15 [i_1 + 4] [i_1 + 2] [12U])))));
                        var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) -5603379182392328365LL)) ? (3849037008827383599LL) : (((/* implicit */long long int) arr_11 [i_1 + 3] [i_1 - 1]))))));
                        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_5 [i_5] [i_1 + 3]), (((/* implicit */short) (unsigned char)18))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)64398)))), (((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))));
                    }
                } 
            } 
        } 
    }
    var_24 = (unsigned char)205;
    /* LoopSeq 2 */
    for (short i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        var_25 *= ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_21 [10])))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1120))))), (((((/* implicit */_Bool) max((arr_11 [i_7] [(_Bool)1]), (((/* implicit */int) (short)-27039))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(signed char)14] [i_7 + 1] [i_7 - 1] [(signed char)14])))))) : (min((((/* implicit */unsigned long long int) arr_13 [i_7 + 1])), (1672387742272174253ULL))))))))));
        var_27 = ((/* implicit */short) arr_0 [i_7 - 1] [13]);
        arr_23 [i_7] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)1111))))));
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_16 [i_8] [i_8] [i_8] [(short)4])), (arr_7 [(unsigned short)5] [i_8] [i_8])))) ? ((+(((/* implicit */int) (short)-27026)))) : (((((/* implicit */_Bool) arr_22 [i_8])) ? (arr_11 [(signed char)2] [i_8]) : (((/* implicit */int) (unsigned char)6))))))) ? (min((min((arr_24 [i_8]), (((/* implicit */unsigned long long int) arr_1 [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11418213052203195813ULL)) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) (short)-24786))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_8] [i_8])) >> (((((/* implicit */_Bool) (unsigned short)14214)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65524)))))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (short i_10 = 2; i_10 < 12; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_8] [(signed char)2] [i_8] [(_Bool)1] [(short)17] [i_8])) ? (max((((((/* implicit */_Bool) (short)-27040)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64425))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [(_Bool)1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1087))) >= (4176988783U))))))))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (-(((unsigned long long int) arr_16 [i_9] [i_9] [i_8] [i_9])))))));
                    var_31 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)1100))));
                }
            } 
        } 
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_8]), (((/* implicit */unsigned long long int) arr_27 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_8] [i_8])))) : (((((/* implicit */_Bool) ((short) (unsigned short)1093))) ? ((-(arr_17 [i_8] [i_8] [16U] [i_8]))) : (((16160428671056006291ULL) | (2286315402653545335ULL)))))));
    }
    var_33 &= ((/* implicit */_Bool) min((min((((/* implicit */int) var_9)), (((((/* implicit */int) (short)13002)) / (((/* implicit */int) (unsigned short)65532)))))), ((~(((/* implicit */int) (!((_Bool)1))))))));
}
