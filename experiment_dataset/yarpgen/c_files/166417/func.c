/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166417
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (unsigned char)77);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */int) ((long long int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]));
                        var_13 = ((/* implicit */long long int) (!((!((_Bool)1)))));
                        var_14 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-76)) <= (((/* implicit */int) var_2)))))));
                        arr_10 [i_0] [i_1 - 3] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 6204474884775493644LL)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (unsigned short)19810))));
                    }
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19824)))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = max((arr_2 [i_0]), (((/* implicit */long long int) var_4)));
                    }
                    var_16 -= ((/* implicit */short) (+(arr_2 [(unsigned short)0])));
                    var_17 = (short)-32751;
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (signed char)-105))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11782)) ? (2680465712U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384)))))) ? (((/* implicit */unsigned long long int) (+(-9159088813215993891LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32745))) / (arr_9 [i_0] [i_1] [i_1 - 3] [i_0] [i_1] [i_5]))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11782)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36029)))))) : (arr_0 [i_0 + 4] [i_5])))) ? (565852214U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_5] [i_1] [i_5]))))))))));
                        arr_17 [i_0] [i_2] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) & (8940511592973951358LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0 + 4] [i_1 + 1] [i_0 + 4])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)45726))))) : (max((arr_12 [i_0] [i_1] [(signed char)11] [i_0]), (arr_0 [i_1] [i_1])))))));
                    }
                }
                arr_18 [i_0] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (max((((/* implicit */unsigned int) -2118602517)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27130)))));
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 17; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (short)16382))))) ? (arr_20 [i_1] [i_0] [i_7]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)19)))))))));
                            arr_25 [i_0] [i_0] [4] [i_0] [(unsigned short)4] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-18763)))))))) - (arr_7 [i_0] [i_0 - 1]));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_20 [i_0] [16LL] [i_7]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0 + 2])), ((-(((arr_7 [i_0] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6603))))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        arr_28 [i_8] = ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22665)) ? (((/* implicit */int) (unsigned short)19804)) : (((/* implicit */int) arr_23 [i_8]))))) : (16777152LL)))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 4; i_9 < 11; i_9 += 2) 
        {
            for (int i_10 = 3; i_10 < 12; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        arr_36 [i_8] = ((/* implicit */signed char) (short)31865);
                        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)22421))))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((signed char) max((((/* implicit */unsigned int) arr_32 [5LL] [5LL])), (var_6))))));
                    }
                    arr_37 [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */long long int) (~((-(((var_1) ? (((/* implicit */int) (unsigned short)375)) : (((/* implicit */int) (short)-16373))))))));
                }
            } 
        } 
    }
}
