/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170968
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (~((~(((/* implicit */int) (short)8192)))))))));
    var_11 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_2 - 2]))) ? (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_2 - 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1]))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) (((~(((/* implicit */int) var_8)))) % (((/* implicit */int) var_6))))) % ((~(((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-1), ((signed char)39))))) % ((~(((long long int) var_4))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned int) var_9);
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)12215))))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 18446744073709551612ULL))));
                            arr_18 [i_4] [i_1] [(short)2] [i_4] [i_5] [i_5 + 2] = ((/* implicit */long long int) var_2);
                            var_17 = ((/* implicit */_Bool) (short)24939);
                        }
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)0))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1598))))));
                            var_21 = ((/* implicit */int) var_6);
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 4080U))));
                        }
                        arr_22 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                    }
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_23 = var_7;
                        var_24 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 18010607354959776824ULL)) ? (max((-9178333113736224687LL), (((/* implicit */long long int) (unsigned char)103)))) : (((/* implicit */long long int) -1205839746)))));
                    }
                    var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 2] [i_2 + 2] [i_0 + 1] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23527))) : (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0 + 3] [i_0 + 2] [i_2 - 2] [i_2 - 2] [8LL])) << (((((/* implicit */int) arr_12 [i_0 + 2] [i_0 - 1] [i_2 + 2] [5ULL] [i_2 - 2])) - (124))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) -3639043918146565575LL);
}
