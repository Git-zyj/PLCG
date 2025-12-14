/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123404
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
    var_10 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23238)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_3)))));
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) var_5)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) arr_12 [i_2]);
                                var_15 = ((/* implicit */unsigned char) ((arr_7 [i_1] [i_2]) & (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23238))) ^ (7834492974233047687ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))))));
                                var_16 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3]);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23238))) : (var_1)));
}
