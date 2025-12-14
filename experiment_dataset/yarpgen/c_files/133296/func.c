/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133296
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */long long int) var_17);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [(signed char)7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0 - 2]))))) - (min((var_8), (var_8))))))));
                                arr_15 [i_0] [i_1] [i_0] [6] [i_4] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [i_1 + 1])) * (((/* implicit */int) arr_1 [i_4]))))));
                                var_19 |= (-(((long long int) var_6)));
                                arr_16 [i_3] [13LL] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) max((-568165658), (var_14)))) : ((+(var_16)))));
            }
        } 
    } 
    var_21 = ((int) ((int) ((((/* implicit */_Bool) var_17)) ? (2427866952280480213LL) : (((/* implicit */long long int) -851786744)))));
}
