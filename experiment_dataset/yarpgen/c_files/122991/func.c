/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122991
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
    var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) -2768941246285848744LL))) << (((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_16)))) - (70043876694659307ULL))))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((arr_2 [i_0]) + (arr_2 [i_0 + 1])));
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) -235268017)))));
            var_22 = ((/* implicit */signed char) var_8);
        }
        var_23 = ((/* implicit */int) min((((/* implicit */long long int) ((min((var_13), (((/* implicit */int) arr_1 [i_0])))) % (max((((/* implicit */int) (signed char)-35)), (var_6)))))), (arr_2 [i_0 + 1])));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */int) (short)-23823)) + (2147483647))) >> (((((((/* implicit */_Bool) (short)-23828)) ? (((/* implicit */int) (unsigned short)60265)) : (((/* implicit */int) (signed char)30)))) - (60258))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2])) >> (((((/* implicit */int) (signed char)-28)) + (41)))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)217)) || (((/* implicit */_Bool) -6502536196000568231LL))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_27 = (((-(arr_10 [i_3]))) % (arr_10 [i_3]));
        var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) min((arr_4 [i_3] [17LL] [i_3]), (arr_4 [i_3] [i_3] [12ULL]))))) << (((max((((/* implicit */unsigned int) arr_1 [i_3])), (var_14))) - (1365894844U)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        arr_19 [i_6 + 1] [i_6] [i_6] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) ((arr_17 [i_6] [i_6 + 4] [i_5] [i_6] [i_6]) ^ ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-23823)))))))));
                        var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) arr_3 [i_3]))), (max((((/* implicit */unsigned int) (signed char)-28)), (arr_10 [i_5])))));
                        arr_20 [i_3] [i_3] [i_4] [i_6] [i_5] [0ULL] = ((/* implicit */int) (signed char)-31);
                        var_30 = ((/* implicit */signed char) ((((arr_18 [i_5] [i_6 + 2] [i_6] [i_6] [i_6]) ? (((/* implicit */int) arr_18 [i_4] [i_6 + 3] [i_6] [i_4] [i_6 + 3])) : (((/* implicit */int) arr_18 [i_5] [i_6 - 1] [i_6] [i_5] [i_6])))) - (((((/* implicit */int) arr_18 [i_4] [i_6 + 4] [i_6 + 4] [i_6] [i_6 + 1])) << (((/* implicit */int) arr_18 [i_6] [i_6 + 2] [3] [i_6] [i_6]))))));
                    }
                    arr_21 [i_5] = ((/* implicit */int) var_14);
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((11054901161038311007ULL) < (142134093479808804ULL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) ((-198175993) ^ (((/* implicit */int) (unsigned char)158))));
                    arr_26 [i_3] [i_3] [(_Bool)1] [(short)10] = ((((/* implicit */_Bool) (unsigned short)37125)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    }
    var_33 ^= ((/* implicit */long long int) var_4);
}
