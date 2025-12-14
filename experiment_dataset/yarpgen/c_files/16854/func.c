/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16854
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) var_0)), ((+(var_1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_1 - 3] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483639)) ? (((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 144115187002114048ULL))))))) - ((+(18446744073709551615ULL))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((_Bool) min((min((var_10), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_3])))));
                                var_15 = ((/* implicit */int) var_3);
                                var_16 += ((/* implicit */_Bool) (+((-((+(((/* implicit */int) var_7))))))));
                                arr_17 [i_1] = (((_Bool)1) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)96)), (2147483647)))) : (min(((~(var_0))), (((/* implicit */unsigned int) var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7))))));
}
