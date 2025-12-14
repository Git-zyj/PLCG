/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107430
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (var_1)));
    var_11 &= ((/* implicit */unsigned int) min((2023382315414185223ULL), (((/* implicit */unsigned long long int) (unsigned short)22))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(8796093022207ULL))) : (min((var_9), (((/* implicit */unsigned long long int) var_4))))))) && (((/* implicit */_Bool) var_0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1]));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_2] [i_3] [22ULL] [10U] [i_4] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2185330193U)) || (((/* implicit */_Bool) (unsigned short)0)))) ? (min((12453397050802432886ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))) : (((unsigned long long int) (unsigned short)32768))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_2]))) : (31ULL))));
                                arr_17 [i_0] [i_2] [i_2 + 3] [i_2] [(unsigned short)17] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (18446744073709551600ULL) : (arr_9 [i_2 + 3]))))));
                                arr_18 [i_0] [i_0] [(unsigned short)8] [i_0] [i_4] [i_0] [i_4] |= ((/* implicit */unsigned int) (((!(((4294967269U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_3 + 1]))))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */unsigned long long int) arr_3 [i_3])) & (max((arr_9 [i_3]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_4] [i_1] [i_2] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                var_13 = arr_12 [i_0];
                arr_19 [i_0] = ((/* implicit */unsigned short) (+((+(((unsigned long long int) arr_7 [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
}
