/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145538
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((min((max((arr_1 [i_0]), (var_11))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) var_8)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((18446744073709551612ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))))))))) ? (min((((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (620798807356689511ULL) : (var_17))), (((/* implicit */unsigned long long int) (short)-17530)))) : (var_5)));
                    var_20 = ((/* implicit */unsigned char) var_11);
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)45548)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1294979466))))))))) <= (((/* implicit */int) (short)5))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            arr_22 [i_3 + 1] [i_4 - 1] [i_4] [i_6 - 1] [i_6 - 1] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_7] [i_6] [i_3 + 1] [i_4] [i_3 + 1])) ? ((+(arr_17 [i_3 - 1]))) : (((/* implicit */unsigned int) arr_11 [i_5]))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_3] [i_6]))) ? (((/* implicit */unsigned int) ((int) 10501277235093039811ULL))) : (arr_17 [i_4 - 1])));
                            var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551614ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_5]))))))) < (10501277235093039811ULL)));
                        }
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_23 = arr_20 [i_3 + 1] [i_4 - 1] [(unsigned short)8] [i_5] [19];
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_13 [i_3 - 1]))) / ((+(((/* implicit */int) (unsigned short)65535))))));
                            var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4] [i_6] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8314))) : (var_17)))) ? (((unsigned int) arr_15 [i_4] [i_3])) : (((unsigned int) var_5))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            var_26 |= ((/* implicit */unsigned long long int) ((short) arr_26 [i_3 - 2] [i_4 - 1] [i_9 - 1] [i_9]));
                            var_27 = ((/* implicit */unsigned char) arr_21 [i_3] [i_3] [i_5] [(unsigned char)6] [i_9]);
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_3] [i_4])))) <= (((arr_23 [i_3] [i_3] [i_3] [(unsigned short)15]) + (arr_15 [i_3] [i_4])))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_13) : (((/* implicit */unsigned int) -1))))) ? (((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_4])) ? (10501277235093039834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))))) : (((620798807356689518ULL) >> (((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((0ULL) != (18446744073709551595ULL))))));
        var_31 &= arr_12 [20U];
    }
    var_32 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) <= (var_12)))) < (((((/* implicit */int) var_6)) * (((/* implicit */int) var_6)))))));
    var_33 = ((/* implicit */unsigned short) min((((min((((/* implicit */unsigned long long int) var_4)), (var_11))) + (var_11))), (min((var_12), (((/* implicit */unsigned long long int) ((short) (unsigned short)51858)))))));
}
