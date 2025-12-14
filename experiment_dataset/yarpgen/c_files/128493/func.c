/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128493
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
    var_16 += ((/* implicit */unsigned char) ((signed char) var_9));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) * (((((/* implicit */_Bool) (signed char)10)) ? (arr_3 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44718))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((var_5) == (arr_1 [i_1 - 2]))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 990522879)) : (var_10))))) : (var_6)));
                            arr_8 [16] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (var_12))))))));
                            arr_9 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) (unsigned short)42702)))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1] [i_3 + 1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3 + 1] [i_3 + 2])))))));
                            var_19 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_5)) : (5315156250324856624ULL))) <= (((/* implicit */unsigned long long int) var_12))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_12);
}
