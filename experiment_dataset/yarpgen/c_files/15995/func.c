/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15995
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) (unsigned short)16384)) ? (1632748854904785530LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1632748854904785534LL)) ? (min((((/* implicit */int) var_12)), (var_1))) : (((((/* implicit */_Bool) -1632748854904785529LL)) ? (((/* implicit */int) (unsigned short)39243)) : (((/* implicit */int) (signed char)-44))))))) ^ ((-(max((1632748854904785534LL), (((/* implicit */long long int) var_2))))))));
                }
                var_17 ^= ((/* implicit */unsigned char) ((_Bool) var_1));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)67))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38272))))) ? (arr_3 [2LL]) : (((/* implicit */long long int) ((/* implicit */int) (short)-18))))))))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (_Bool)0))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (arr_2 [i_0])))))), ((~(-1608355457)))));
                arr_8 [i_0] = ((/* implicit */long long int) -1);
            }
        } 
    } 
    var_20 += ((/* implicit */_Bool) var_11);
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) ((var_1) == (((/* implicit */int) ((unsigned char) (short)-865)))))), (var_9)));
}
