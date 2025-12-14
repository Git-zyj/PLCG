/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16568
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)33768), (((/* implicit */unsigned short) (signed char)126))))) ? (((/* implicit */int) (unsigned short)33768)) : (((/* implicit */int) var_9))));
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33771)) >> (((((/* implicit */int) arr_1 [11U] [11U])) + (81)))))) : (min((arr_0 [i_0 - 1] [i_0]), (arr_0 [8] [i_0]))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)-65)))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_10))))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) (signed char)-65)))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31768)) ? (((/* implicit */int) (unsigned short)33771)) : (((/* implicit */int) (short)13928))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((signed char) ((unsigned char) 1505395587062856827LL)));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((+(((/* implicit */int) var_1)))) > (((/* implicit */int) min(((unsigned short)31764), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31764)))))))))))));
                                var_23 = var_14;
                                arr_20 [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_4] [i_4]))))))) || (((/* implicit */_Bool) arr_14 [(unsigned char)9] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        for (long long int i_7 = 2; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)33768)) ? (1976508887U) : (((/* implicit */unsigned int) var_10)))) << (((((/* implicit */int) ((unsigned char) (unsigned short)33771))) - (221)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_3])) && (((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2]))))), (arr_6 [i_2 + 3]))))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_6]))) : (arr_12 [i_1] [i_1] [i_3] [i_6]))), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_2] [i_3] [(unsigned char)2])))))))));
                                arr_26 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-64)), (1505395587062856827LL)));
                                var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) var_7))) | (((arr_18 [i_3] [i_3] [i_3] [i_6] [i_3] [i_3]) ? (6169772335934473890LL) : (-1505395587062856813LL)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_3]))))) < ((~(((((/* implicit */int) arr_21 [i_1] [i_1] [i_3] [i_3])) % (var_0))))))))));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_28 [i_8])), (arr_27 [i_8])))) ? (((/* implicit */int) arr_27 [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_8])) < (((/* implicit */int) arr_28 [i_8])))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((/* implicit */int) (signed char)-83)))))));
    }
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((1976508887U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))))))));
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) min(((unsigned char)112), (((/* implicit */unsigned char) var_2)))))));
}
