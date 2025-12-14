/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100534
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 |= ((/* implicit */unsigned int) arr_1 [i_1]);
                    var_11 ^= ((/* implicit */short) arr_4 [i_0] [i_0] [(unsigned short)9] [(unsigned short)9]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) (~(max((arr_11 [i_0] [i_1] [i_2] [i_0] [i_4]), (arr_11 [i_0] [i_0] [i_2] [i_0] [i_4])))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [0ULL] [i_1] [i_2] [i_3])))))));
                                var_14 = ((/* implicit */int) (~((~(arr_0 [i_0])))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3] [i_2] [i_0] [i_0]))))), ((~(18334852577179965575ULL)))))));
                            }
                        } 
                    } 
                    var_15 = ((arr_1 [i_0]) ? (min((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)8])), (0))) : (((((((/* implicit */_Bool) -906654461)) || (((/* implicit */_Bool) 1137070766434141197ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17309673307275410417ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)13] [i_0] [i_0])) || (arr_6 [i_0])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)21208)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18158513697557839872ULL)) ? (2047) : (((/* implicit */int) (unsigned short)44327))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))), (((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) var_2))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) (signed char)-120)) + (161)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) : (1137070766434141198ULL))) : (((unsigned long long int) 1344073687U))))) ? (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) 1137070766434141198ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_19 = ((/* implicit */unsigned char) ((max((((unsigned long long int) 17309673307275410411ULL)), (((/* implicit */unsigned long long int) (unsigned short)44327)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-32749)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))) : (var_0))))))));
}
