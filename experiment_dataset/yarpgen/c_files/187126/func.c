/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187126
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */int) (short)24299)) == (((((/* implicit */_Bool) (short)-24294)) ? (((/* implicit */int) (short)-24306)) : (((/* implicit */int) (short)-24306))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)-19963), ((short)8)))) - (((/* implicit */int) var_0))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-127)), (arr_6 [i_1]))))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_1] [i_1])), (3111239459U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24306)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_6 [i_2])))) : (((((/* implicit */_Bool) (short)-24269)) ? (arr_11 [i_1]) : (arr_11 [i_1])))))));
            arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)61189)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (arr_8 [i_2])))))))) : (min((((/* implicit */long long int) min((((/* implicit */short) var_3)), (var_7)))), (max((arr_11 [i_1]), (((/* implicit */long long int) var_7))))))));
            arr_14 [i_1] = ((/* implicit */unsigned int) var_9);
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_3])) % (((/* implicit */int) arr_8 [i_1]))));
            arr_18 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (short)19963)) : (((/* implicit */int) (short)-19963))))) ? (arr_7 [i_1] [i_3]) : (arr_15 [i_1])));
        }
    }
    /* LoopNest 3 */
    for (short i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    arr_25 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_11)), (((unsigned char) (unsigned char)22))));
                    arr_26 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) -7410810060828440173LL);
                    arr_27 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_6])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_20 [i_6]))))) ? (arr_23 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_4] [i_4] [i_6])) % (((/* implicit */int) (unsigned short)29937)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
}
