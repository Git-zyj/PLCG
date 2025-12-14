/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100578
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
    var_13 = ((/* implicit */int) var_11);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (short)7280)) : (((/* implicit */int) (signed char)-1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((17583596109824ULL), (6604054289508381547ULL)))) ? (((/* implicit */unsigned int) arr_0 [(short)14])) : (arr_1 [i_1 - 1])))) ? (((unsigned long long int) arr_4 [i_0] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4388609480158892319ULL))))))));
                var_16 += ((/* implicit */signed char) (-((~(-1)))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (min((((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_0])) ? (var_5) : (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (+(arr_0 [(short)14]))))))));
                arr_5 [i_0] [(signed char)17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? ((~(arr_0 [i_0]))) : (((/* implicit */int) (short)8192))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)127))))) ? (2902862583U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [2ULL])) || (((/* implicit */_Bool) var_1)))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 267911168U)) ? (0) : (((/* implicit */int) (unsigned char)250)))) >> ((((~(var_4))) - (1344530630U)))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_8))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11)))))))));
}
