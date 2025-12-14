/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148340
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
    var_16 += (!(((/* implicit */_Bool) (signed char)38)));
    var_17 &= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)53689)), (var_8))))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_10))));
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (unsigned short)65508))))) ? (((((/* implicit */int) (unsigned short)65510)) / (780045113))) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)48918)) && (((/* implicit */_Bool) (unsigned short)56602))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (arr_6 [i_2 - 1] [i_2] [i_2])));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2 - 2])) > (((/* implicit */int) arr_5 [i_2] [i_2 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_4 - 1]))));
                                var_23 = arr_11 [i_1] [(_Bool)1] [i_3] [i_4];
                                arr_16 [i_1] [i_1] [i_1] [i_4 + 2] [i_5] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_4] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_3] [i_1])))))) : (arr_14 [i_2 + 1] [i_2] [i_2] [i_2] [i_3 + 1])));
                            }
                        } 
                    } 
                    var_24 &= ((/* implicit */long long int) ((arr_3 [i_2 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2] [i_2 + 3] [i_2 + 3])))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_25 &= (!((((+(((/* implicit */int) (signed char)38)))) > ((-(((/* implicit */int) (short)0)))))));
        var_26 -= ((/* implicit */short) max((((((/* implicit */_Bool) 32833652)) ? (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40)))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6])))))));
    }
    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)25320)) - (2147483647)))));
        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7]))) : (1958256031U))) + (2336711265U)))) ? (min((((/* implicit */unsigned long long int) ((arr_21 [10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7] [i_7]))) : (var_0)))), (((((/* implicit */_Bool) 2147483647U)) ? (6279473174770709720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (unsigned short)650))))) ? (((/* implicit */int) arr_21 [i_7])) : (((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) (unsigned short)11846)) : (((/* implicit */int) var_10)))))))));
        var_28 -= ((((/* implicit */_Bool) ((short) min((((/* implicit */long long int) (signed char)-14)), (var_0))))) ? (((arr_21 [i_7]) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_20 [i_7])))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_7])) > (min((((/* implicit */int) (unsigned short)112)), (var_8)))))));
    }
    var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((2336711265U) * (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)24), (((/* implicit */unsigned short) var_4)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 15920116140506950695ULL))) ? (((((/* implicit */int) (unsigned short)11847)) / (((/* implicit */int) var_15)))) : (((/* implicit */int) var_14)))))));
}
