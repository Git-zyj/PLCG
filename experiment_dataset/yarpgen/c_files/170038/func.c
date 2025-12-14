/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170038
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (unsigned short)28944))))) ? (max((12ULL), (((/* implicit */unsigned long long int) (unsigned char)154)))) : (((/* implicit */unsigned long long int) ((var_15) >> (((((/* implicit */int) (unsigned char)48)) - (40)))))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246))))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)64)) | (((/* implicit */int) (unsigned short)49689))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14475)))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1] [6LL])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (unsigned short)3517)))) : (min((arr_7 [5ULL] [i_1] [i_1] [i_3]), (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8509)))))) : (max((((/* implicit */unsigned long long int) max(((unsigned char)93), (((/* implicit */unsigned char) (signed char)-100))))), (((1953522410798878183ULL) / (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [5ULL])))))));
                        var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1] [i_1]))));
                        var_23 = arr_4 [i_1] [i_3];
                        var_24 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) ((arr_10 [i_0] [(unsigned short)14] [0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) / (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_17))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned int i_5 = 4; i_5 < 18; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_25 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)37667))));
                        arr_19 [(signed char)14] = max((arr_5 [i_4]), (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)108), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_26 [i_7] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_2 [i_7] [i_0]), (arr_2 [i_8] [i_7])))), (((unsigned int) arr_10 [i_0] [i_0] [i_8]))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8] [16LL] [i_7] [i_7] [i_0] [i_0])) ? (298238405U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_7] [i_8])) ? (((/* implicit */int) arr_18 [(unsigned short)8] [8])) : (((/* implicit */int) (short)-29842)))))))) + (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(short)8] [10ULL] [7ULL] [7ULL])) ? (arr_24 [i_0] [i_7] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((arr_13 [i_8] [i_7] [i_0]) ^ (((/* implicit */long long int) 593685879)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)15835)) ? (((/* implicit */int) (unsigned char)0)) : (2147483647))));
                                var_28 = ((/* implicit */unsigned short) arr_14 [i_0] [i_7] [i_10 - 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_0] [i_0] = ((/* implicit */short) max((((arr_3 [i_0]) << (((arr_3 [i_0]) - (556897873))))), (((/* implicit */int) ((((/* implicit */_Bool) 12859104055677600014ULL)) || ((_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)168))));
                        var_30 = ((/* implicit */unsigned short) ((short) arr_35 [(unsigned short)9] [i_14 - 1]));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1714)) ? (-7042241625057737797LL) : (((/* implicit */long long int) 298238399U))));
                        var_32 += ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65535))));
                    }
                } 
            } 
        } 
        arr_46 [i_11] = ((/* implicit */unsigned int) arr_22 [i_11] [i_11] [i_11]);
        arr_47 [i_11] [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3996728893U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11] [i_11] [i_11] [i_11])))))) ? (((((/* implicit */int) (short)32757)) >> (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_6 [i_11] [i_11]))));
    }
    var_33 = ((((/* implicit */int) var_12)) | (((/* implicit */int) var_8)));
}
