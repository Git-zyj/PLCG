/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181696
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)12] [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
                arr_5 [(short)0] [i_1] = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_1 [(short)2])))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) max((arr_14 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_2]), (((/* implicit */unsigned short) var_4))))));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)90))))) ? (2492587705U) : (1802379591U)))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    arr_16 [i_2] [i_1 + 1] [5ULL] = ((/* implicit */unsigned short) ((min((var_2), (((/* implicit */unsigned int) arr_13 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                }
                for (signed char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) var_6))))), (max((((/* implicit */int) arr_8 [i_5])), (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_3)) - (46))))))))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4928))))) ? (6U) : ((-(1802379591U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4914))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) : (6909615503858050256LL)))) : (var_7)));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (((+((~(((/* implicit */int) (unsigned short)60621)))))) ^ ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_4))))))));
}
