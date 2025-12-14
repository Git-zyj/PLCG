/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124060
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
    var_14 += ((/* implicit */short) ((17179869183LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [(signed char)1] [i_0] [i_1] = ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_4))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (8299339933979640407LL)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))));
                arr_8 [7ULL] [10LL] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) var_9)) : (max((((/* implicit */unsigned long long int) ((short) var_4))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0]))) : (var_0)))))));
                var_15 = ((((var_7) & (((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 1])))) >> (((((((var_6) > (var_12))) ? (max((arr_1 [i_0 + 1] [i_1]), (var_5))) : (arr_6 [i_1 - 1] [i_1 + 1]))) + (2422182506438505964LL))));
                var_16 &= ((/* implicit */long long int) arr_2 [i_0 + 1]);
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31369)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8299339933979640407LL)) ? (8299339933979640407LL) : (-8299339933979640407LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14325))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) 8299339933979640407LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                arr_15 [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_3) >= (((/* implicit */int) (short)14332)))))))) ? (min(((+(-2033565046))), ((+(var_3))))) : (((/* implicit */int) var_13))));
                arr_16 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) (-(1207294587U)));
                arr_17 [i_3] [5U] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [7ULL] [13ULL])) ? (((/* implicit */unsigned long long int) arr_10 [i_2] [i_3])) : (var_4))) * (((/* implicit */unsigned long long int) max((arr_10 [i_3] [i_2]), (((/* implicit */unsigned int) var_7)))))));
            }
        } 
    } 
}
