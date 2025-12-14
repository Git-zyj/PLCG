/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134873
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_3);
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))), (((/* implicit */int) min((var_5), (var_2))))))) : ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_3)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1570473125U)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) 8191U))));
                    arr_13 [i_1] [i_1] [i_1] [i_1] = var_1;
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_5)) >> (((var_3) - (5034190422138522463LL))))) : (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_6)) - (52618)))))));
        var_17 ^= ((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)));
        arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_9))))))) ? (max((((((/* implicit */_Bool) (unsigned short)16380)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */unsigned long long int) (unsigned char)14)), (18446744073709551593ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) (-(((var_4) ? (((/* implicit */int) max((((/* implicit */short) var_0)), (var_9)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))));
                    arr_27 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2)))))));
                    arr_28 [i_6] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_3)));
                    var_21 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                    arr_29 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (((((_Bool)1) && (((/* implicit */_Bool) (signed char)-81)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                }
                arr_30 [i_5] [i_6] = ((/* implicit */unsigned long long int) (((!(((var_4) && (((/* implicit */_Bool) var_0)))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) max((var_12), (var_12)))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_0))))))));
                arr_31 [i_5] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
            }
        } 
    } 
}
