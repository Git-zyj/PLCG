/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153867
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
    var_14 ^= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_10 [i_1] [6ULL] [i_2] = ((/* implicit */_Bool) 18446744073709551598ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [(short)4] [i_2] [i_1 + 1] [i_0] |= min((((/* implicit */unsigned long long int) (signed char)72)), (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)10] [i_4])) ? (var_10) : (((((/* implicit */_Bool) arr_2 [(unsigned short)8] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [(short)10] [i_0] [i_4] [i_0]))) : (var_8))))));
                                arr_17 [i_2] [i_1] [i_1] = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [(unsigned char)0]);
                                var_15 += min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((1203035840U), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))), ((-(((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_2 [i_0] [i_1] [i_3]) : (var_11))))));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((-4762518419415311641LL) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_4]))))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (18ULL))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1387906079U)), (arr_9 [i_4] [i_3] [i_2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)29415))))) : ((~(var_10)))))));
                            }
                        } 
                    } 
                }
                arr_19 [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9815))) > (arr_2 [i_1] [i_1] [i_1 - 1]))))) - (((((/* implicit */_Bool) arr_2 [i_1] [15ULL] [i_1 - 1])) ? (arr_2 [i_1 + 2] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                var_16 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [(short)13] [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (+(var_12)));
}
