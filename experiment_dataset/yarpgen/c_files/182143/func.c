/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182143
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
    var_15 = ((/* implicit */_Bool) (((-(var_3))) * (((((/* implicit */int) ((133690053) < (((/* implicit */int) (signed char)-70))))) / (var_12)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [5] [i_0] [i_3] [i_4] &= ((unsigned short) ((((((/* implicit */int) arr_7 [(unsigned short)19] [i_2] [i_0])) ^ (((/* implicit */int) var_4)))) & (((/* implicit */int) (unsigned short)30514))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (((~(((/* implicit */int) (signed char)-51)))) > ((+(var_3))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_1] [i_2])) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) var_6))))), (((arr_5 [(unsigned short)9] [i_0] [i_0] [4LL]) ? (5609537850461434829LL) : (((/* implicit */long long int) -177875843))))))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34340))) : (5423104105528870814LL))) * (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (arr_1 [(signed char)12] [i_1])))))) : (((var_8) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) -177875846))))))));
                                arr_18 [i_0 - 1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (-1LL) : (((/* implicit */long long int) arr_3 [i_4] [i_1]))))))) ? (((((((/* implicit */int) (signed char)43)) >= (((/* implicit */int) (short)-29553)))) ? ((~(1307895871))) : (((arr_11 [(signed char)16] [i_1] [i_2] [i_2] [i_2] [i_4]) | (((/* implicit */int) var_14)))))) : (177875817)));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] = ((/* implicit */unsigned int) var_0);
                    arr_20 [i_0] [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
