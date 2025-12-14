/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105933
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) -5665182714873355133LL);
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_6)), (var_4)))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (arr_2 [(_Bool)0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)14903))));
                            arr_11 [i_1] [i_1] [(short)13] [(short)13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22804))) | (1033245935U)));
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_6);
    var_14 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) (unsigned short)50632))))));
}
