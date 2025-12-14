/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148924
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) (short)10207)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [9U] [(unsigned short)11] [9U] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_4)) & (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_0), (var_5))))));
                                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_10))))));
                                var_19 |= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)8664)) | (((/* implicit */int) var_8))))) ? (var_1) : (var_7))));
                            }
                        } 
                    } 
                    arr_17 [(short)2] [i_0] [(short)2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (((((/* implicit */_Bool) -2288793998749467581LL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) max((var_11), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((var_13), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) var_11)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101)))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (((-(min((var_1), (((/* implicit */long long int) var_6)))))) <= (((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_14))))) ? (((((/* implicit */_Bool) 16777215)) ? (-2288793998749467581LL) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))))));
}
