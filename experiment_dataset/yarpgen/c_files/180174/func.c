/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180174
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
    var_19 = var_5;
    var_20 &= ((/* implicit */_Bool) (+(((var_13) >> (((var_15) - (16797660530081182708ULL)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_13)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((short) arr_0 [i_0] [i_0]));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((arr_3 [i_4 - 1] [i_0]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_18)))))))));
                                var_23 = ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                } 
                var_24 = (~((+(((/* implicit */int) (short)30386)))));
            }
        } 
    } 
}
