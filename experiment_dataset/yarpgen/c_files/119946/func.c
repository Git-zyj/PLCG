/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119946
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-13))))) ? (((/* implicit */int) (!((_Bool)1)))) : (var_3)));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_12))))) : (min((var_3), (((/* implicit */int) var_1))))))) ? ((-((~(((/* implicit */int) var_9)))))) : (var_13)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)4))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (arr_1 [i_2])));
                                arr_13 [i_0] [i_2] [(_Bool)0] [i_0] = arr_9 [i_3] [i_2] [i_2 + 1] [i_3] [i_4] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
