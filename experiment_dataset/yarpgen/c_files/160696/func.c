/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160696
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((/* implicit */int) var_18)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1 + 1] [i_0] [i_3] = (!(((/* implicit */_Bool) (unsigned char)255)));
                                arr_17 [i_1] [i_0] [i_0] [i_3] [i_0] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_0 [i_0] [i_4 + 2]), (arr_0 [i_0] [i_4 - 2]))))));
                                var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)596))) : (((2840001784U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                                var_21 = ((/* implicit */long long int) arr_12 [i_3] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */long long int) ((short) var_11));
                    arr_18 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)-16886))))));
                }
            } 
        } 
    } 
}
