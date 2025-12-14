/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172112
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) == (((((/* implicit */_Bool) 7811804591994755070LL)) ? (var_6) : (((/* implicit */unsigned int) var_5))))))), (var_4))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1] [(short)11] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [(_Bool)1])) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [7LL] [(signed char)17] [(unsigned short)10] [i_1])) : (((/* implicit */int) arr_7 [(signed char)6]))))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */int) (short)16576);
                                var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16576)) ? (((/* implicit */int) (short)-16604)) : (((/* implicit */int) (short)-16604))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
