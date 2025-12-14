/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106902
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? ((~(((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((unsigned long long int) (_Bool)0))));
                    arr_10 [i_2] = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_10 |= (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_0)))))));
                                var_11 += ((/* implicit */short) var_0);
                                arr_16 [i_1] [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) : (var_8))))));
                                var_13 &= ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) var_8)));
                            }
                        } 
                    } 
                    arr_17 [i_2] = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((int) var_8))) == ((+(var_1)))))) : (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */unsigned char) var_5);
    var_16 = ((/* implicit */unsigned char) var_5);
    var_17 = ((/* implicit */int) var_7);
}
