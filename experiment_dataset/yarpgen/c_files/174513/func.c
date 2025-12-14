/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174513
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-32750)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32931))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_3))))))) ? (((/* implicit */unsigned long long int) var_2)) : (min((((8841960348759191054ULL) / (((/* implicit */unsigned long long int) 550359495)))), (((/* implicit */unsigned long long int) var_3))))));
    var_13 = ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32756))) : (3552152781870564353LL));
    var_14 = ((/* implicit */unsigned char) 9223372036854775807LL);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */short) max((((((/* implicit */_Bool) -9223372036854775807LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)136), ((unsigned char)177))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) var_3))))) ? (((((/* implicit */long long int) arr_5 [6LL] [i_1])) | (arr_2 [i_0]))) : (((((/* implicit */_Bool) 696752848)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22649))) : (5908346933149790662LL)))))));
                    arr_8 [i_0] |= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (arr_2 [i_0])))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        arr_12 [i_3] = ((/* implicit */long long int) ((unsigned char) (-(((((/* implicit */_Bool) (short)-22332)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (unsigned short)14)))))));
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [9LL] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) arr_3 [i_0 + 3] [i_1] [i_3])) : (arr_7 [i_0 + 2] [(unsigned char)15] [i_3 + 1]))))));
                        var_17 = ((/* implicit */unsigned short) arr_0 [i_3]);
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) var_6);
                        var_19 -= ((/* implicit */unsigned int) ((unsigned long long int) 9604783724950360562ULL));
                    }
                }
            } 
        } 
        var_20 *= ((/* implicit */unsigned int) var_11);
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */long long int) var_8);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
        arr_18 [12LL] = arr_3 [i_5] [i_5] [i_5];
    }
}
