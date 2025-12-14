/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162854
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_5)))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_4)) : (var_10)))))) : (((/* implicit */long long int) var_7))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-93))) : (min((((/* implicit */long long int) -350344236)), (-6326289729546332871LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            arr_4 [i_0 + 1] [2ULL] [i_1] = var_4;
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0 - 1] [i_1] [(unsigned short)6] [i_1] = ((/* implicit */long long int) ((((arr_7 [i_3] [i_0] [i_0] [i_0]) - (3665988667U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) arr_0 [i_2]))))))));
                        arr_11 [i_3] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (arr_1 [i_0 - 1])));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_4] = ((/* implicit */_Bool) arr_5 [4LL] [i_3]);
                            var_14 = ((/* implicit */unsigned int) ((arr_1 [i_1 - 1]) % (arr_1 [i_1 - 3])));
                            var_15 = ((/* implicit */unsigned short) ((arr_3 [i_1 - 2] [i_4 + 1]) ^ (((/* implicit */unsigned long long int) arr_1 [i_4 + 2]))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 2] [i_3] [1] [i_5] [i_5])) / (arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                            arr_17 [(short)0] [(short)0] [(short)0] [i_3] [i_3] [i_3] [i_3] &= ((arr_16 [i_2] [i_2 + 2] [i_3] [i_3] [i_5 - 2]) >> (((((/* implicit */int) arr_15 [i_0] [i_3] [(unsigned char)7] [5] [i_2 + 2])) - (48689))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [(unsigned short)6] [i_0] = ((/* implicit */signed char) (-(arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                            var_18 = (~(arr_6 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 1]));
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 12; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 3] [i_1 - 2])) ? (arr_16 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 3]) : (arr_16 [i_1 - 3] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 2])));
                        var_21 = ((/* implicit */unsigned char) arr_8 [i_0] [0U] [i_0]);
                    }
                } 
            } 
        }
        var_22 = max(((+(arr_19 [i_0 + 1]))), (((arr_19 [i_0 + 1]) >> (((arr_19 [i_0 - 1]) - (13724819639431379498ULL))))));
        var_23 = ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [2U]))))) % (arr_2 [i_0 + 1] [i_0] [i_0]))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [4ULL] [4ULL])) ? (var_8) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)80))))))) - (928681800376199672ULL))));
    }
}
