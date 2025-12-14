/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128307
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
    var_15 -= ((var_12) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) var_14);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)16), (((/* implicit */unsigned char) var_3)))))) >= (var_1))))));
                                arr_13 [i_0 - 1] [i_1] [(signed char)9] [22LL] [(unsigned char)11] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 4] [i_0 - 4] [i_3] [i_4 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)13273)))))));
                                var_18 -= ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)0))))), (var_1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
