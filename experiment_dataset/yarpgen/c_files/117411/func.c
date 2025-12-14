/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117411
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
    var_12 = ((/* implicit */_Bool) (((_Bool)1) ? (1313963256U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_1)) >> (((max((((/* implicit */unsigned int) var_1)), (1755296135U))) - (1755296121U))))), (((((/* implicit */int) (short)26937)) - (((/* implicit */int) (short)26937))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((_Bool) (_Bool)1))))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)-3877)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 255ULL)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (_Bool)1))))))))));
                                var_15 = ((/* implicit */unsigned short) min((min((min((18446744073709551612ULL), (((/* implicit */unsigned long long int) 3LL)))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                                arr_14 [i_0] [i_0] &= ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
