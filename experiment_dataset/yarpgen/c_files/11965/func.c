/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11965
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
    var_13 = ((/* implicit */short) max((var_13), (var_6)));
    var_14 &= ((/* implicit */long long int) ((short) var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) (-((((~(((/* implicit */int) arr_5 [i_2] [i_1] [i_1] [i_0])))) & (((/* implicit */int) (short)7184))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 |= ((unsigned short) (((+(2439395816U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (short)-7169)) : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] [(signed char)6]))))));
                                arr_12 [i_0] [i_4] = ((/* implicit */short) (+((~(((/* implicit */int) (_Bool)1))))));
                                arr_13 [i_0] [i_3] [i_0] [i_0] [i_3] |= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((signed char) arr_4 [i_0])))) | ((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) -1677808388)) ? (6217901496203063075LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43))))), (((/* implicit */long long int) var_12)))))))));
    var_18 = ((/* implicit */short) (((~(((/* implicit */int) var_6)))) * (((/* implicit */int) var_8))));
}
