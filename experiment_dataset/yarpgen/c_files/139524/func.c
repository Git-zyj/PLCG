/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139524
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2869806994804161524LL)), (max((arr_0 [i_0 - 1]), (((unsigned long long int) var_6))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */long long int) ((((/* implicit */int) ((2869806994804161524LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) < (((((/* implicit */_Bool) (-(arr_0 [12ULL])))) ? (((((/* implicit */_Bool) 16128)) ? (arr_4 [i_2]) : (((/* implicit */int) (signed char)-84)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_2 [i_0] [i_0]))))))));
                    var_11 = ((/* implicit */_Bool) ((((((arr_2 [i_2] [i_1]) ? (var_9) : (((/* implicit */unsigned long long int) -16128)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)0)) : (arr_4 [i_0])))))) >> (((((/* implicit */int) arr_5 [i_0] [2LL] [i_1] [(signed char)4])) >> (((((/* implicit */int) ((short) 12786620700803030484ULL))) - (23990)))))));
                    var_12 -= (!(((/* implicit */_Bool) ((arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (arr_6 [i_0 - 1] [i_0 - 1] [i_2]))))) : (((((/* implicit */_Bool) 8796093022207ULL)) ? (2869806994804161524LL) : (((/* implicit */long long int) 4294967295U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                arr_14 [(unsigned short)12] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(short)2])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((((/* implicit */int) arr_10 [i_3])) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_4])))))))));
                arr_15 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_4])), (var_4)))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4]))))))));
                var_14 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) == (0U)));
            }
        } 
    } 
}
